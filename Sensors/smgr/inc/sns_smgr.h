#ifndef SNS_SMGR_H
#define SNS_SMGR_H

/*============================================================================

  @file sns_smgr.h

  @brief
  This file contains definition for Sensor Manager

 Copyright (c) 2010-2014 Qualcomm Technologies, Inc.  All Rights Reserved.
 Qualcomm Technologies Proprietary and Confidential.

============================================================================*/
/* $Header: //components/rel/ssc.adsp/2.4.1/adsp_proc/Sensors/smgr/inc/sns_smgr.h#1 $ */
/* $DateTime: 2014/05/16 10:56:56 $ */
/* $Author: coresvc $ */

/*============================================================================
  EDIT HISTORY FOR FILE

  when        who  what, where, why
  ----------  ---  -----------------------------------------------------------
  2014-02-13  tc    Added SMGR_RESTRICT_QCSI_WAIT_SIG and support for the Driver Access Framework
  2013-12-10  pn    Added SNS_SMGR_QMI_DISC_SIG
  2013-10-03  pn    Added SMGR_MSG_4
  2013-06-11  ae    Added QDSP SIM playback support
  2013-06-06  pn    Keeps track of AP state change
  2013-01-29  gju   Include different file for SMR utlity functions.
  2013-01-09  sd    Added support for SSI
  2012-12-26  pn    Enabled turning off SMGR debug messages
  2012-12-14  pn    Added signal bit SNS_SMGR_SENSOR_STATE_EV
  2012-12-08  pn    Replaced MSG_SSID_QDSP6 with MSG_SSID_SNS.
  2012-12-03  pn    Fixed a typo
  2012-10-23  vh    Processing the messages in task loop
  2012-10-02  ag    cleanup macros
  2012-10-02  ag    MSG macros
  2012-09-19  sd    removed nested comment
  2012-05-01  vh    Added bus_instance in smgr_sensor_cfg_s
  2012-03-05  br    added a few fields which is GPIO configuration for DRI supporting.
  2011-08-13  sd    added timer flag to set LD09
  2011-08-05  rb    moved sns_smgr_RegItemType_e and SNS_SMGR_NUM_SENSORS_DEFINED from sns_smgr_sensor_config.h
                    and sns_smgr_config.h
  2011-08-03  br    moved smgr_sensor_cfg_s, smgr_sensor_id_e and a few definitions from smgr_define.h and sensor_config.h
                    defined sns_smgr_get_sensor_config_info()
  2011-06-17  sd    smgr code clean up
  2010-08-30  JTL   Moving init function decl into sns_init.h
                    Making variable defns into decls, and putting defns in
                    a c file.
  2010-08-25   SD   use printf for SMGR_LOG if SNS_PCSIM is defined
  2010-07-07   SD   Initial version
============================================================================*/
#include <sns_smgr_api_v01.h>             /* Auto-generated by IDL */
#include <sns_smgr_internal_api_v01.h>    /* Auto-generated by IDL */
#include <sns_smgr_restricted_api_v01.h>  /* Auto-generated by IDL */
#include "sns_common.h"
#include "sns_queue.h"
#include "sns_smr_util.h"
#include "sns_ddf_comm.h"
#include "sns_ddf_common.h"
#include "sns_ddf_attrib.h"
#include "sns_ddf_util.h"
#include "sns_ddf_driver_if.h"
#include "sns_ddf_smgr_if.h"

/*===========================================================================

                   SMGR MACRO

===========================================================================*/
#ifdef SNS_PCSIM
  #define SMGR_LOG printf
#else
  #define SMGR_LOG(_Format, ...)
#endif

#define SNS_MSG_MACRO_MSG
#ifdef SNS_MSG_MACRO_MSG
#if defined QDSP6
#define SMGR_MSG_0(xx_pri, xx_fmt)                            MSG(MSG_SSID_SNS, xx_pri, xx_fmt)
#define SMGR_MSG_1(xx_pri, xx_fmt, xx_arg1)                   MSG_1(MSG_SSID_SNS, xx_pri, xx_fmt, xx_arg1)
#define SMGR_MSG_2(xx_pri, xx_fmt, xx_arg1, xx_arg2)          MSG_2(MSG_SSID_SNS, xx_pri, xx_fmt, xx_arg1, xx_arg2)
#define SMGR_MSG_3(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3) MSG_3(MSG_SSID_SNS, xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3)
#define SMGR_MSG_4(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4) MSG_4(MSG_SSID_SNS, xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4)
#elif defined(ADSP_STANDALONE)
#define SMGR_MSG_0(xx_pri, xx_fmt)                            qurt_printf("\n"); qurt_printf(xx_fmt)
#define SMGR_MSG_1(xx_pri, xx_fmt, xx_arg1)                   qurt_printf("\n"); qurt_printf(xx_fmt, xx_arg1)
#define SMGR_MSG_2(xx_pri, xx_fmt, xx_arg1, xx_arg2)          qurt_printf("\n"); qurt_printf(xx_fmt, xx_arg1, xx_arg2)
#define SMGR_MSG_3(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3) qurt_printf("\n"); qurt_printf(xx_fmt, xx_arg1, xx_arg2, xx_arg3)
#define SMGR_MSG_4(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4) qurt_printf("\n"); qurt_printf(xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4)
#else
#define SMGR_MSG_0(xx_pri, xx_fmt)                            SNS_PRINTF_STRING_ID_MEDIUM_0(SNS_DBG_MOD_DSPS_SMGR, DBG_SMGR_GENERIC_STRING0)
#define SMGR_MSG_1(xx_pri, xx_fmt, xx_arg1)                   SNS_PRINTF_STRING_ID_MEDIUM_1(SNS_DBG_MOD_DSPS_SMGR, DBG_SMGR_GENERIC_STRING1, xx_arg1)
#define SMGR_MSG_2(xx_pri, xx_fmt, xx_arg1, xx_arg2)          SNS_PRINTF_STRING_ID_MEDIUM_2(SNS_DBG_MOD_DSPS_SMGR, DBG_SMGR_GENERIC_STRING2, xx_arg1, xx_arg2)
#define SMGR_MSG_3(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3) SNS_PRINTF_STRING_ID_MEDIUM_3(SNS_DBG_MOD_DSPS_SMGR, DBG_SMGR_GENERIC_STRING3, xx_arg1, xx_arg2, xx_arg3)
#define SMGR_MSG_4(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4)
#endif //QDSP6
#else
#define SMGR_MSG_0(xx_pri, xx_fmt)
#define SMGR_MSG_1(xx_pri, xx_fmt, xx_arg1)
#define SMGR_MSG_2(xx_pri, xx_fmt, xx_arg1, xx_arg2)
#define SMGR_MSG_3(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3)
#define SMGR_MSG_4(xx_pri, xx_fmt, xx_arg1, xx_arg2, xx_arg3, xx_arg4)
#endif //SNS_MSG_MACRO_MSG
/*===========================================================================

                   EXTERNAL DEFINITIONS AND TYPES

===========================================================================*/
#define SNS_SMGR_BODY_LEN                   0x200

#define SNS_SMGR_SENSOR_READ_FLAG           0x1
#define SNS_SMGR_SMR_FLAG                   0x2
#define SNS_SMGR_DD_CB_FLAG                 0x4
#define SNS_SMGR_LDO9_FLAG                  0x8
#define SNS_SMGR_SENSOR_STATE_EV            0x10

#define SNS_SMGR_QMI_PM_CL_RX_SIG           0x00100000
#define SMGR_QCSI_WAIT_SIG                  0x00010000
#define SMGR_INT_QCSI_WAIT_SIG              0x00020000
#define SNS_SMGR_QMI_PM_CL_MSG_SIG          0x00040000
#define SNS_SMGR_QMI_PM_CL_TIMER_SIG        0x00080000
#define SNS_SMGR_QMI_REG_CL_MSG_SIG         0x00200000
#define SNS_SMGR_QMI_REG_CL_TIMER_SIG       0x00400000
#define SNS_SMGR_QMI_DISC_SIG               0x00800000
#define SNS_SMGR_APP_WAKE_SIG               0x01000000
#define SNS_SMGR_APP_SLEEP_SIG              0x02000000
#define SMGR_RESTRICT_QCSI_WAIT_SIG         0x04000000  // This signal is used for handling SMGR Restricted API requests

 /* If SMGR_MAX_DATA_TYPES_PER_DEVICE is expanded, define corresponding
    SNS_SMGR_SENSOR_xx_DATA_TYPE_y for additional y. */
#define SMGR_MAX_DATA_TYPES_PER_DEVICE       2

typedef enum {
  SNS_SMGR_MSG_PRI_LOW = 0,
  SNS_SMGR_MSG_PRI_HIGH,
  SNS_SMGR_MSG_PRI_LAST
} sns_smgr_msg_pri_e;

/* define sensor_id enumeration type */
typedef uint8_t smgr_sensor_id_e;

/* Sensor data structure for CONSTANT info common to all sensors */
typedef struct
{
  sns_ddf_driver_if_s*                  drv_fn_ptr;
  /* The UUID associated with the device driver */
  uint8_t                               uuid[SNS_SMGR_UUID_LENGTH_V01];
  /* Normal time (ticks) delay from power off to idle */
  uint16_t                              off_to_idle_time;
  /* Normal time (ticks) delay from low power mode until ready for command */
  uint16_t                              idle_to_ready_time;
  /* External sensor ID */
  smgr_sensor_id_e                      sensor_id;
  /* Bus address of device */
  uint8_t                               bus_addr;
  /* Which data type has range and or lpf attribute (pri/sec) */
  uint8_t                               range_sensor;
  /* Default sensitivity in terms of device driver command */
  uint8_t                               sensitivity_default;
  /* Registry item type for driver init */
  nv_id_t                               driver_reg_type;
  /* Registry item identifier for driver initialization */
  uint32_t                              driver_reg_id;
/* Registry item type for primary factory calibration */
  nv_id_t                               primary_cal_reg_type;
  /* Registry item identifier for primary data calibration */
  uint32_t                              primary_cal_reg_id;
  /* Identify an instance of a device driven by a device driver */
  uint8_t                               device_select;
 /* Flags as defined in FLAG VALUES in sns_smgr_sensor_config.h */
  uint8_t                               flags;
  /* Data types defined for this sensor device */
  sns_ddf_sensor_e                      data_types[SMGR_MAX_DATA_TYPES_PER_DEVICE];
  /* First GPIO assigned to the device. If the value is 0xffff, gpio is not assigned */
  uint16_t                              first_gpio;
  /* Second GPIO assigned to the device.If the value is 0xffff, gpio is not assigned */
  uint16_t                              second_gpio;
  /* Bus instance ID */
  uint8_t                               bus_instance;
} smgr_sensor_cfg_s;

typedef enum
{
   SNS_SMGR_REG_ITEM_TYPE_NONE,
   SNS_SMGR_REG_ITEM_TYPE_SINGLE,
   SNS_SMGR_REG_ITEM_TYPE_GROUP
} sns_smgr_RegItemType_e;

extern sns_q_s      sns_msgr_lo_q, sns_msgr_hi_q;

/*===========================================================================

  FUNCTION:  sns_smgr_test_init

===========================================================================*/
/**
  @brief
  Initialize all the necessary data structure of SMGR Test Task

  @detail

  @return None

*/
/*=========================================================================*/
void sns_smgr_test_init (void);


/*===========================================================================

  FUNCTION:   sns_smgr_get_sensor_config_info

===========================================================================*/
/*!
  @brief This function returns the sensor configuration information.

  @detail  pointer to smgr_sensor_cfg, and the definition value of SNS_SMGR_NUM_SENSORS_DEFINED

  @param[o] num_sensor_ptr  pointer to a variable in which SNS_SMGR_NUM_SENSORS_DEFINED is saved.

  @return  the address of smgr_sensor_cfg table
 */
/*=========================================================================*/
smgr_sensor_cfg_s * sns_smgr_get_sensor_config_info (uint32_t *num_sensor_ptr);


#endif /* SNS_SMGR_H */
