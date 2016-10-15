/*! \file
 *  
 *  \brief  pm_config_lpass_npa_pam.c ----This file contains PAM information for NPA
 *  \details This file contains PAM information for NPA for all NPA Clients and Modes
 *  
 *    PMIC code generation Version: 1.0.0.0
 *    PMIC code generation NPA Client Version: MSM8974 branch 1.0 ver 01_24_2013 - Approved
 *    PMIC code generation NPA Device Setting Value Version: MSM8974 branch 1.0 ver 01_24_2013 - Approved
 *    This file contains code for Target specific settings and modes.
 *  
 *  &copy; Copyright 2013 Qualcomm Technologies Incorporated, All Rights Reserved
 */

/*===========================================================================

                        EDIT HISTORY FOR MODULE

  This document is created by a code generator, therefore this section will
  not contain comments describing changes made to the module.

$Header: //components/rel/core.adsp/2.2/systemdrivers/pmic/config/msm8974/pm8941/pm_lpass_proc_pam.c#3 $ 

===========================================================================*/

/*===========================================================================

                     INCLUDE FILES 

===========================================================================*/

/* =======================================================================
 For more information regarding these settings please see document: 
Qualcomm PMIC NPA (QPN) Node
System Software Specification
80-VN657-xxx
Edit History
This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.

when        who      what, where, why
--------    ---      ----------------------------------------------------------
6/6/2013    akt      Fixed the node dependancy size for handling suppresible (CR-555420)
1/25/2013	NA\crosolow	MSM8974 branch 1.0 ver 01_24_2013 - Approved 
Comments: 1.Version Notes:
Adds new sensor clients.  Independent control of I/O and Ana (VDD) rails.
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

1/21/2013	NA\crosolow	MSM8974 branch 1.0 ver 01_21_2013 - NOT Approved 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

Comments: 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

1/21/2013	NA\crosolow	MSM8974 branch 1.0 ver 01_18_2013 - Approved 
Comments: 1.Version Notes:
Created 3 new sensor clients
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

1/17/2013	NA\crosolow	MSM8974 branch 1.0 ver 12_13_2012 - Approved 
Comments: 1.Version Notes:
Adding new generic RF client.
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/13/2012	NA\crosolow	MSM8974 branch 1.0 ver 12_11_2012b - Approved 
Comments: 1.Version Notes:
Sensors was incorrectly swapped back to LDO17.  Fix.  Again.
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/11/2012	NA\crosolow	MSM8974 branch 1.0 ver 12_11_2012 - Approved 
Comments: 1.Version Notes:
Enable LDO15 for GPS *Temporary Workaround*
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/10/2012	NA\crosolow	MSM8974 branch 1.0 ver 12_10_2012 (DON'T USE) - NOT Approved 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

Comments: 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/10/2012	NA\crosolow	MSM8974 branch 1.0 ver 12_10_2012 (DON'T USE) - NOT Approved 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

Comments: 1.Version Notes:
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/10/2012	NA\crosolow	MSM8974 branch 1.0 ver 12_05_2012 - Approved 
Comments: 1.Version Notes:
Changed WLAN PA from 2.9V to 3.3V
For GFX client.  Force MX to NPM when in nominal or above.
Set WLAN PA supply to 3.3V http://prism/CR/419780
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

12/5/2012	NA\crosolow	MSM8974 branch 1.0 ver 11_20_2012 - Approved 
Comments: 1.Version Notes:
Updated Generic Clients... Includes LOW_MINUS
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

11/19/2012	NA\crosolow	MSM8974 branch 1.0 ver 11_19_2012 - Approved 
Comments: 1.Version Notes:
Removed MX and CX from RPM_INIT client
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

11/19/2012	NA\crosolow	MSM8974 branch 1.0 ver 11_05_2012 - Approved 
Comments: 1.Version Notes:
Corrected bug in sensors client:  LDO18 changed to LDO17
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

11/5/2012	NA\crosolow	MSM8974 branch 1.0 ver 10_30_2012 - Approved 
Comments: 1.Version Notes:
Corrected Sensor LDO from LDO17 to LDO18
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

10/25/2012	NA\crosolow	MSM8974 branch 1.0 ver 10_12_2012 - Approved 
Comments: 1.Version Notes:
Updated with generic clients
Added new PLLs clients	

2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

10/12/2012	NA\crosolow	MSM8974 branch 1.0 ver 10_01_2012 - Approved 
Comments: 1.Version Notes:
Corrected Several bugs in the Audio Client (wrong voltage for S3A, boost)
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

10/1/2012	NA\crosolow	MSM8974 branch 1.0 ver 8_28a_2012 - Approved 
Comments: 1.Version Notes:
Added missing processors to generic clients
	
2.Applicability:
Needed specifically for QNX
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

9/28/2012	NA\crosolow	MSM8974 branch 1.0 ver 8_28_2012 - NOT Approved 1.Version Notes:
Adding Other Processors for Generic CX/MX clients
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

Comments: 1.Version Notes:
Adding Other Processors for Generic CX/MX clients
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

9/24/2012	NA\crosolow	MSM8974 branch 1.0 ver 8_21_2012 - Approved 
Comments: 1.Version Notes:
- Adding DIFF_CLK and SLEEP_CLK test client modes for off target testing.
- Added Generic clients (RAIL) for CX, GFX, MX.  Old clients are still included for backwards compatibility.
	
2.Applicability:
	
3.Release Priority(Urgent/Medium/Low/Not for release):
	
4.Verification(How/Who will test):
	

8/16/2012	NA\crosolow	MSM8974 branch 1.0 ver 7_16_2012 - Approved 
Comments: 1.Version Notes:
Changed Camera Processor from Modem to Apps
Changed MHL Processor from Modem to Apps
	
2.Applicability:
Camera, MHL
	
3.Release Priority(Urgent/Medium/Low/Not for release):
Medium
	
4.Verification(How/Who will test):
Camera, MHL	

7/16/2012	NA\agnerw	MSM8974 branch 1.0 ver 7_3_2012 - Approved 
Comments: Converting to Version 4.0 of PAM.
Introduced NPA Test Clients
7/3/2012	NA\agnerw	MSM8974 branch 1.0 ver 5_25_2012 - Approved 
Comments: removing parent resources from PAM (handled by dependencies)
5/16/2012	NA\crosolow	MSM8974 branch 1.0 ver 3_29_2012 - Approved 
Comments: Locking after updating UIM to 2 clients per UIM interface (ENABLE and ACTIVITY)
3/29/2012	NA\agnerw	MSM8974 branch 1.0 ver 3_29_2012 - FTS Replace - Approved 
Comments: 

3/29/2012	NA\agnerw	MSM8974 branch 1.0 ver 3_14_2012 - Approved 
Comments: 

3/14/2012	NA\agnerw	B-Family Settings 2_29_2012 - Approved 
Comments: Locking for 3/15/2012 Release.
- Note WCN and MCPM client resources are still 
pointing to PM8921 component.
2/29/2012	NA\agnerw	Depecated A-Family Settings 2_29_2012 - Approved 
Comments: 

3/27/2011	NA\agnerw	MSM8974 branch 1.0 ver 3_27_2012 - DO NOT USE - NOT Approved 
Comments: 

3/26/2011	NA\agnerw	MSM8974 branch 1.0 ver 3_26_2011 - DO NOT USE - NOT Approved 
Comments: 

3/29/2012	NA\agnerw	MSM8974 branch 1.0 ver 3_26_2012 - FTS Replace - Approved 
Comments: 

========================================================================== */
/*===========================================================================

                     INCLUDE FILES FOR MODULE

===========================================================================*/
#include "pm_npa.h"
#include "pmapp_npa.h"
#include "pm_lpass_proc_npa.h"
#include "pm_npa_device.h"
#include "npa_remote_resource.h"

#include "pm_npa_device_clk_buff.h"
#include "pm_npa_device_ldo.h"
#include "pm_npa_device_smps.h"
#include "pm_npa_device_ncp.h"
#include "pm_npa_device_vs.h"

#include "pm_lpass_proc_npa.h"
#include "pm_lpass_proc_npa_device.h"

/*===========================================================================

                 LOCAL CONSTANT AND MACRO DEFINITIONS

===========================================================================*/

/*===========================================================================

                LOCAL FUNCTION PROTOTYPES

===========================================================================*/

/*===========================================================================

                VARIABLES DEFINITIONS

===========================================================================*/

static pm_npa_smps_kvps
pm_pam_rail_cx_b_smps2[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_RETENTION*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__1,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW_MINUS
    // Comments: Do not use*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__2,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__3,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__4,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL_PLUS*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__5,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_TURBO*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__6,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_rail_cx_rails_info []=
{
   {
      (void*)pm_pam_rail_cx_b_smps2,
      PM_NPA_VREG_SMPS
   }
};

/* RAIL_MX Client */
static pm_npa_smps_kvps
pm_pam_rail_mx_b_smps1[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 670000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_RETENTION*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 670000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW_MINUS
    // Comments: Do not use*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 950000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 950000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 950000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL_PLUS*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__NPM,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CORE_RAIL_TURBO*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__NPM,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_rail_mx_rails_info []=
{
   {
      (void*)pm_pam_rail_mx_b_smps1,
      PM_NPA_VREG_SMPS
   },
};
/* SENSOR_DSP_PROXY Client */
static pm_npa_ldo_kvps
pm_pam_sensor_dsp_proxy_a_ldo18[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_LPM*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_ON*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 123,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

static pm_npa_vs_kvps
pm_pam_sensor_dsp_proxy_a_vs1[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_LPM*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_ON*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_sensor_dsp_proxy_rails_info []=
{
   {
      (void*)pm_pam_sensor_dsp_proxy_a_ldo18,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_sensor_dsp_proxy_a_vs1,
      PM_NPA_VREG_VS
   },
};
/* SENSOR_VDD Client */
static pm_npa_ldo_kvps
pm_pam_sensor_vdd_a_ldo18[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_LPM*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_ON*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 11,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_sensor_vdd_rails_info []=
{
   {
      (void*)pm_pam_sensor_vdd_a_ldo18,
      PM_NPA_VREG_LDO
   },
};
/* SENSOR_VDDIO Client */
static pm_npa_vs_kvps
pm_pam_sensor_vddio_a_vs1[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_OFF*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_LPM*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
   },
    /**< Mode: PMIC_NPA_MODE_ID_SENSOR_POWER_ON*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> max aggregation */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_sensor_vddio_rails_info []=
{
   {
      (void*)pm_pam_sensor_vddio_a_vs1,
      PM_NPA_VREG_VS
   },
};
/* SLIMBUS Client */
static pm_npa_smps_kvps
pm_pam_slimbus_b_smps1[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_0
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_NO_VOTE_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 670000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_1
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_RETENTION_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 670000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_2
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_LOW_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 950000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_3
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_NORMAL_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 950000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__4,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_4
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_HIGH_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_5
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_SUPER_HIGH_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_6*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
};

static pm_npa_smps_kvps
pm_pam_slimbus_b_smps2[] =
{
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_0
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_NO_VOTE_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__1,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_1
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_RETENTION_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__1,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_2
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_LOW_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__3,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_3
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_NORMAL_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__4,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_4
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_HIGH_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__5,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_5
    // Comments: PMIC_NPA_MODE_ID_CLK_REGIME_DIG_SUPER_HIGH_DIG*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 100,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__6,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
    /**< Mode: PMIC_NPA_MODE_ID_CLK_REGIME_MODE_6*/
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right) */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right) */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> max aggregation */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority) */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right)  */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo)] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0, /**< head_room_voltage_value */
   },
};

static pm_npa_pam_client_cfg_type
pm_pam_slimbus_rails_info []=
{
   {
      (void*)pm_pam_slimbus_b_smps1,
      PM_NPA_VREG_SMPS
   },
   {
      (void*)pm_pam_slimbus_b_smps2,
      PM_NPA_VREG_SMPS
   },
};


/*===========================================================================

                RESOURCE VARIABLES DEFINITIONS

===========================================================================*/
#define PMIC_NPA_CLIENT_NODE_RAIL_CX   "/node/pmic/client/rail_cx"
#define PMIC_NPA_CLIENT_NODE_RAIL_MX   "/node/pmic/client/rail_mx"
#define PMIC_NPA_CLIENT_NODE_SENSOR_DSP_PROXY   "/node/pmic/client/sensor_dsp_proxy"
#define PMIC_NPA_CLIENT_NODE_SENSOR_VDD   "/node/pmic/client/sensor_vdd"
#define PMIC_NPA_CLIENT_NODE_SENSOR_VDDIO   "/node/pmic/client/sensor_vddio"
#define PMIC_NPA_CLIENT_NODE_SLIMBUS   "/node/pmic/client/slimbus"

/*===========================================================================

                VARIABLES DEFINITIONS

===========================================================================*/

/* RAIL_CX Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_rail_cx [] =
{
  PMIC_NPA_NODE_DEP_LIST( B, smps, 2 ),
};

/* RAIL_MX Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_rail_mx [] =
{
  PMIC_NPA_NODE_DEP_LIST( B, smps, 1 ),
};

/* SENSOR_DSP_PROXY Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_sensor_dsp_proxy [] =
{
  PMIC_NPA_NODE_DEP_LIST( A, ldo, 18 ),
  PMIC_NPA_NODE_DEP_LIST( A, vs, 1 ),
};

/* SENSOR_VDDIO Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_sensor_vddio [] =
{
  PMIC_NPA_NODE_DEP_LIST( A, vs, 1 ),
};

/* SLIMBUS Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_slimbus [] =
{
  PMIC_NPA_NODE_DEP_LIST( B, smps, 1 ),
  PMIC_NPA_NODE_DEP_LIST( B, smps, 2 ),
};

/* SENSOR_VDD Client */
static npa_node_dependency 
pm_lpass_proc_client_dev_deps_sensor_vdd [] =
{
  PMIC_NPA_NODE_DEP_LIST( A, ldo, 18 )
};

pm_npa_node_resource_info pm8x41_npa_lpass_node_resources[] =
{
   {
      PMIC_NPA_GROUP_ID_RAIL_CX,                      // Resource Name
      PMIC_NPA_MODE_ID_MODE_MAX - 1,                  // Maximum value
      NPA_RESOURCE_DEFAULT,                           // Resource Attributes
      (void*) pm_pam_rail_cx_rails_info,              // Resource User Data
      PMIC_NPA_CLIENT_NODE_RAIL_CX,                   // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_rail_cx,          // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_rail_cx),  // Node dependency count
      PM_NPA_PLUGIN_TYPE_MAX                          // Type of NPA plugin to use
   },
   {
      PMIC_NPA_GROUP_ID_RAIL_MX,                      // Resource Name
      PMIC_NPA_MODE_ID_MODE_MAX - 1,                  // Maximum value
      NPA_RESOURCE_DEFAULT,                           // Resource Attributes
      (void*) pm_pam_rail_mx_rails_info,              // Resource User Data
      PMIC_NPA_CLIENT_NODE_RAIL_MX,                   // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_rail_mx,          // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_rail_mx),  // Node dependency count
      PM_NPA_PLUGIN_TYPE_MAX                          // Type of NPA plugin to use
   },
   {
      PMIC_NPA_GROUP_ID_SENSOR_DSP_PROXY,             // Resource Name
      PMIC_NPA_MODE_ID_SENSOR_MAX - 1,                // Maximum value
      NPA_RESOURCE_SINGLE_CLIENT,                     // Resource Attributes
      (void*) pm_pam_sensor_dsp_proxy_rails_info,     // Resource User Data
      PMIC_NPA_CLIENT_NODE_SENSOR_DSP_PROXY,          // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_sensor_dsp_proxy, // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_sensor_dsp_proxy),  // Node dependency count
      PM_NPA_PLUGIN_TYPE_IDENTITY                     // Use Identity here.
   },
   {
      PMIC_NPA_GROUP_ID_SENSOR_VDDIO,                 // Resource Name
      PMIC_NPA_MODE_ID_SENSOR_MAX - 1,                // Maximum value
      NPA_RESOURCE_SINGLE_CLIENT,                     // Resource Attributes
      (void*) pm_pam_sensor_vddio_rails_info,         // Resource User Data
      PMIC_NPA_CLIENT_NODE_RAIL_MX,                   // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_sensor_vddio,     // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_sensor_vddio),   // Node dependency count
      PM_NPA_PLUGIN_TYPE_IDENTITY                     // Use Identity here.
   },
   {
      PMIC_NPA_GROUP_ID_SENSOR_VDD,                   // Resource Name
      PMIC_NPA_MODE_ID_SENSOR_MAX - 1,                // Maximum value
      NPA_RESOURCE_SINGLE_CLIENT,                     // Resource Attributes
      (void*) pm_pam_sensor_vdd_rails_info,           // Resource User Data
      PMIC_NPA_CLIENT_NODE_RAIL_MX,                   // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_sensor_vdd,       // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_sensor_vdd),  // Node dependency count
      PM_NPA_PLUGIN_TYPE_IDENTITY                     // Use Identity here.
   },
   {
      PMIC_NPA_GROUP_ID_SLIMBUS,                      // Resource Name
      PMIC_NPA_MODE_ID_MODE_MAX - 1,                  // Maximum value
      NPA_RESOURCE_SINGLE_CLIENT,                     // Resource Attributes
      (void*) pm_pam_slimbus_rails_info,              // Resource User Data
      PMIC_NPA_CLIENT_NODE_SLIMBUS,                   // Node Name
      NPA_NODE_DEFAULT,                               // Node Attributes
      NULL,                                           // Node User Data
      pm_lpass_proc_client_dev_deps_slimbus,          // Node dependencies
      NPA_ARRAY_SIZE(pm_lpass_proc_client_dev_deps_slimbus),   // Node dependency count
      PM_NPA_PLUGIN_TYPE_IDENTITY                     // Type of NPA plugin to use
   }
};

unsigned pm8x41_num_of_pmic_lpass_nodes[] = { 6 };


// Remote resource definitions.
static pm_npa_remote_name_type pmic_npa_ldo_remote_resources [] =
{  
   {
     PMIC_DEV_RSRC_NAME_VEC_IN( A, ldo, 12 ),
     "ldoa\x0C\x00\x00\x00",
   },
   {
     PMIC_DEV_RSRC_NAME_VEC_IN( A, ldo, 18 ),
     "ldoa\x12\x00\x00\x00",
   }
};

pm_npa_remote_resource_type pm8x41_npa_remote_ldo =
{
   pmic_npa_ldo_remote_resources,
   2
};


static pm_npa_remote_name_type pmic_npa_vs_remote_resources [] =
{  
   {
     PMIC_DEV_RSRC_NAME_VEC_IN( A, vs, 1 ),
     "vsa\x00\x01\x00\x00\x00",
   }
};

pm_npa_remote_resource_type pm8x41_npa_remote_vs =
{
   pmic_npa_vs_remote_resources,
   1
};

static pm_npa_remote_name_type pmic_npa_smps_remote_resources [] =
{  
   {
     PMIC_DEV_RSRC_NAME_VEC_IN( B, smps, 1 ),
     "smpb\x01\x00\x00\x00",
   },
   {
     PMIC_DEV_RSRC_NAME_VEC_IN( B, smps, 2 ),
     "smpb\x02\x00\x00\x00",
   }
};

pm_npa_remote_resource_type pm8x41_npa_remote_smps =
{
   pmic_npa_smps_remote_resources,
   2
};

static char *pmic_publish_resources[] =
{
   PMIC_NPA_GROUP_ID_SENSOR_VDD,
   PMIC_NPA_GROUP_ID_SENSOR_VDDIO
};

pm_npa_resource_publish_type pm8x41_npa_pub_type = 
{
   SENSOR_PD,
   pmic_publish_resources,
   2
};

