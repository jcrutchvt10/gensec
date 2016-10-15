#ifndef BAMHWIO_H
#define BAMHWIO_H

/**
  @file bamhwio.h
  @brief
  This file provides IO macros to access the BAM Rev 4 (B-family enhancements). 
  This file is autogenerated  
*/
/*
===============================================================================

                             Edit History

 $Header: //components/rel/core.adsp/2.2/hwengines/bam/core4/bamhwio.h#1 $

 when       who     what, where, why
--------    ---     ------------------------------------------------------------
1/31/2012   MK      Created for 8974

===============================================================================
                  Copyright (c) 2012 Qualcomm Technologies Incorporated.
                           All Rights Reserved.
                        Qualcomm Confidential and Proprietary.
===============================================================================
*/
/* BAM_CTRL*/
#define BAM_CTRL                                                               ( 0x0 )   
#define BAM_CTRL_LOCAL_CLK_GATING_MASK                                         0x60000   
#define BAM_CTRL_LOCAL_CLK_GATING_SHFT                                         0x11      
#define BAM_CTRL_IBC_DISABLE_MASK                                              0x10000   
#define BAM_CTRL_IBC_DISABLE_SHFT                                              0x10      
#define BAM_CTRL_BAM_CACHED_DESC_STORE_MASK                                    0x8000    
#define BAM_CTRL_BAM_CACHED_DESC_STORE_SHFT                                    0xF       
#define BAM_CTRL_BAM_DESC_CACHE_SEL_MASK                                       0x6000    
#define BAM_CTRL_BAM_DESC_CACHE_SEL_SHFT                                       0xD       
#define BAM_CTRL_BAM_TESTBUS_SEL_MASK                                          0xFE0     
#define BAM_CTRL_BAM_TESTBUS_SEL_SHFT                                          0x5       
#define BAM_CTRL_BAM_EN_ACCUM_MASK                                             0x10      
#define BAM_CTRL_BAM_EN_ACCUM_SHFT                                             0x4       
#define BAM_CTRL_BAM_EN_MASK                                                   0x2       
#define BAM_CTRL_BAM_EN_SHFT                                                   0x1       
#define BAM_CTRL_BAM_SW_RST_MASK                                               0x1       
#define BAM_CTRL_BAM_SW_RST_SHFT                                               0x0       
/* BAM_REVISION*/
#define BAM_REVISION                                                           ( 0x4 )   
#define BAM_REVISION_INACTIV_TMR_BASE_MASK                                     0xFF000000
#define BAM_REVISION_INACTIV_TMR_BASE_SHFT                                     0x18      
#define BAM_REVISION_CMD_DESC_EN_MASK                                          0x800000  
#define BAM_REVISION_CMD_DESC_EN_SHFT                                          0x17      
#define BAM_REVISION_DESC_CACHE_DEPTH_MASK                                     0x600000  
#define BAM_REVISION_DESC_CACHE_DEPTH_SHFT                                     0x15      
#define BAM_REVISION_NUM_INACTIV_TMRS_MASK                                     0x100000  
#define BAM_REVISION_NUM_INACTIV_TMRS_SHFT                                     0x14      
#define BAM_REVISION_INACTIV_TMRS_EXST_MASK                                    0x80000   
#define BAM_REVISION_INACTIV_TMRS_EXST_SHFT                                    0x13      
#define BAM_REVISION_HIGH_FREQUENCY_BAM_MASK                                   0x40000   
#define BAM_REVISION_HIGH_FREQUENCY_BAM_SHFT                                   0x12      
#define BAM_REVISION_BAM_HAS_NO_BYPASS_MASK                                    0x20000   
#define BAM_REVISION_BAM_HAS_NO_BYPASS_SHFT                                    0x11      
#define BAM_REVISION_SECURED_MASK                                              0x10000   
#define BAM_REVISION_SECURED_SHFT                                              0x10      
#define BAM_REVISION_USE_VMIDMT_MASK                                           0x8000    
#define BAM_REVISION_USE_VMIDMT_SHFT                                           0xF       
#define BAM_REVISION_AXI_ACTIVE_MASK                                           0x4000    
#define BAM_REVISION_AXI_ACTIVE_SHFT                                           0xE       
#define BAM_REVISION_CE_BUFFER_SIZE_MASK                                       0x2000    
#define BAM_REVISION_CE_BUFFER_SIZE_SHFT                                       0xD       
#define BAM_REVISION_NUM_EES_MASK                                              0xF00     
#define BAM_REVISION_NUM_EES_SHFT                                              0x8       
#define BAM_REVISION_REVISION_MASK                                             0xFF      
#define BAM_REVISION_REVISION_SHFT                                             0x0       
/* BAM_SW_VERSION*/
#define BAM_SW_VERSION                                                         ( 0x80 )  
#define BAM_SW_VERSION_MAJOR_MASK                                              0xF0000000
#define BAM_SW_VERSION_MAJOR_SHFT                                              0x1C      
#define BAM_SW_VERSION_MINOR_MASK                                              0xFFF0000 
#define BAM_SW_VERSION_MINOR_SHFT                                              0x10      
#define BAM_SW_VERSION_STEP_MASK                                               0xFFFF    
#define BAM_SW_VERSION_STEP_SHFT                                               0x0       
/* BAM_NUM_PIPES*/
#define BAM_NUM_PIPES                                                          ( 0x3C )  
#define BAM_NUM_PIPES_BAM_NON_PIPE_GRP_MASK                                    0xFF000000
#define BAM_NUM_PIPES_BAM_NON_PIPE_GRP_SHFT                                    0x18      
#define BAM_NUM_PIPES_PERIPH_NON_PIPE_GRP_MASK                                 0xFF0000  
#define BAM_NUM_PIPES_PERIPH_NON_PIPE_GRP_SHFT                                 0x10      
#define BAM_NUM_PIPES_BAM_NUM_PIPES_MASK                                       0xFF      
#define BAM_NUM_PIPES_BAM_NUM_PIPES_SHFT                                       0x0       
/* BAM_TIMER*/
#define BAM_TIMER                                                              ( 0x40 )  
#define BAM_TIMER_TIMER_MASK                                                   0xFFFF    
#define BAM_TIMER_TIMER_SHFT                                                   0x0       
/* BAM_TIMER_CTRL*/
#define BAM_TIMER_CTRL                                                         ( 0x44 )  
#define BAM_TIMER_CTRL_TIMER_RST_MASK                                          0x80000000
#define BAM_TIMER_CTRL_TIMER_RST_SHFT                                          0x1F      
#define BAM_TIMER_CTRL_TIMER_RUN_MASK                                          0x40000000
#define BAM_TIMER_CTRL_TIMER_RUN_SHFT                                          0x1E      
#define BAM_TIMER_CTRL_TIMER_MODE_MASK                                         0x20000000
#define BAM_TIMER_CTRL_TIMER_MODE_SHFT                                         0x1D      
#define BAM_TIMER_CTRL_TIMER_TRSHLD_MASK                                       0xFFFF    
#define BAM_TIMER_CTRL_TIMER_TRSHLD_SHFT                                       0x0       
/* BAM_DESC_CNT_TRSHLD*/
#define BAM_DESC_CNT_TRSHLD                                                    ( 0x8 )   
#define BAM_DESC_CNT_TRSHLD_CNT_TRSHLD_MASK                                    0xFFFF    
#define BAM_DESC_CNT_TRSHLD_CNT_TRSHLD_SHFT                                    0x0       
/* BAM_IRQ_SRCS*/
#define BAM_IRQ_SRCS                                                           ( 0xC )   
#define BAM_IRQ_SRCS_BAM_IRQ_MASK                                              0x80000000
#define BAM_IRQ_SRCS_BAM_IRQ_SHFT                                              0x1F      
#define BAM_IRQ_SRCS_P_IRQ_MASK                                                0x7FFFFFFF
#define BAM_IRQ_SRCS_P_IRQ_SHFT                                                0x0       
/* BAM_IRQ_SRCS_MSK*/
#define BAM_IRQ_SRCS_MSK                                                       ( 0x10 )  
#define BAM_IRQ_SRCS_MSK_BAM_IRQ_MSK_MASK                                      0x80000000
#define BAM_IRQ_SRCS_MSK_BAM_IRQ_MSK_SHFT                                      0x1F      
#define BAM_IRQ_SRCS_MSK_P_IRQ_MSK_MASK                                        0x7FFFFFFF
#define BAM_IRQ_SRCS_MSK_P_IRQ_MSK_SHFT                                        0x0       
/* BAM_IRQ_SRCS_UNMASKED*/
#define BAM_IRQ_SRCS_UNMASKED                                                  ( 0x30 )  
#define BAM_IRQ_SRCS_UNMASKED_BAM_IRQ_UNMASKED_MASK                            0x80000000
#define BAM_IRQ_SRCS_UNMASKED_BAM_IRQ_UNMASKED_SHFT                            0x1F      
#define BAM_IRQ_SRCS_UNMASKED_P_IRQ_UNMASKED_MASK                              0x7FFFFFFF
#define BAM_IRQ_SRCS_UNMASKED_P_IRQ_UNMASKED_SHFT                              0x0       
/* BAM_IRQ_STTS*/
#define BAM_IRQ_STTS                                                           ( 0x14 )  
#define BAM_IRQ_STTS_BAM_TIMER_IRQ_MASK                                        0x10      
#define BAM_IRQ_STTS_BAM_TIMER_IRQ_SHFT                                        0x4       
#define BAM_IRQ_STTS_BAM_EMPTY_IRQ_MASK                                        0x8       
#define BAM_IRQ_STTS_BAM_EMPTY_IRQ_SHFT                                        0x3       
#define BAM_IRQ_STTS_BAM_ERROR_IRQ_MASK                                        0x4       
#define BAM_IRQ_STTS_BAM_ERROR_IRQ_SHFT                                        0x2       
#define BAM_IRQ_STTS_BAM_HRESP_ERR_IRQ_MASK                                    0x2       
#define BAM_IRQ_STTS_BAM_HRESP_ERR_IRQ_SHFT                                    0x1       
/* BAM_IRQ_CLR*/
#define BAM_IRQ_CLR                                                            ( 0x18 )  
#define BAM_IRQ_CLR_BAM_TIMER_CLR_MASK                                         0x10      
#define BAM_IRQ_CLR_BAM_TIMER_CLR_SHFT                                         0x4       
#define BAM_IRQ_CLR_BAM_EMPTY_CLR_MASK                                         0x8       
#define BAM_IRQ_CLR_BAM_EMPTY_CLR_SHFT                                         0x3       
#define BAM_IRQ_CLR_BAM_ERROR_CLR_MASK                                         0x4       
#define BAM_IRQ_CLR_BAM_ERROR_CLR_SHFT                                         0x2       
#define BAM_IRQ_CLR_BAM_HRESP_ERR_CLR_MASK                                     0x2       
#define BAM_IRQ_CLR_BAM_HRESP_ERR_CLR_SHFT                                     0x1       
/* BAM_IRQ_EN*/
#define BAM_IRQ_EN                                                             ( 0x1C )  
#define BAM_IRQ_EN_BAM_TIMER_EN_MASK                                           0x10      
#define BAM_IRQ_EN_BAM_TIMER_EN_SHFT                                           0x4       
#define BAM_IRQ_EN_BAM_EMPTY_EN_MASK                                           0x8       
#define BAM_IRQ_EN_BAM_EMPTY_EN_SHFT                                           0x3       
#define BAM_IRQ_EN_BAM_ERROR_EN_MASK                                           0x4       
#define BAM_IRQ_EN_BAM_ERROR_EN_SHFT                                           0x2       
#define BAM_IRQ_EN_BAM_HRESP_ERR_EN_MASK                                       0x2       
#define BAM_IRQ_EN_BAM_HRESP_ERR_EN_SHFT                                       0x1       
/* BAM_AHB_MASTER_ERR_CTRLS*/
#define BAM_AHB_MASTER_ERR_CTRLS                                               ( 0x24 )  
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HVMID_MASK                            0x7C0000  
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HVMID_SHFT                            0x12      
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_DIRECT_MODE_MASK                      0x20000   
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_DIRECT_MODE_SHFT                      0x11      
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HCID_MASK                             0x1F000   
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HCID_SHFT                             0xC       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HPROT_MASK                            0xF00     
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HPROT_SHFT                            0x8       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HBURST_MASK                           0xE0      
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HBURST_SHFT                           0x5       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HSIZE_MASK                            0x18      
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HSIZE_SHFT                            0x3       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HWRITE_MASK                           0x4       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HWRITE_SHFT                           0x2       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HTRANS_MASK                           0x3       
#define BAM_AHB_MASTER_ERR_CTRLS_BAM_ERR_HTRANS_SHFT                           0x0       
/* BAM_AHB_MASTER_ERR_ADDR*/
#define BAM_AHB_MASTER_ERR_ADDR                                                ( 0x28 )  
#define BAM_AHB_MASTER_ERR_ADDR_BAM_ERR_ADDR_MASK                              0xFFFFFFFF
#define BAM_AHB_MASTER_ERR_ADDR_BAM_ERR_ADDR_SHFT                              0x0       
/* BAM_AHB_MASTER_ERR_DATA*/
#define BAM_AHB_MASTER_ERR_DATA                                                ( 0x2C )  
#define BAM_AHB_MASTER_ERR_DATA_BAM_ERR_DATA_MASK                              0xFFFFFFFF
#define BAM_AHB_MASTER_ERR_DATA_BAM_ERR_DATA_SHFT                              0x0       
/* BAM_TRUST_REG*/
#define BAM_TRUST_REG                                                          ( 0x70 )  
#define BAM_TRUST_REG_LOCK_EE_CTRL_MASK                                        0x2000    
#define BAM_TRUST_REG_LOCK_EE_CTRL_SHFT                                        0xD       
#define BAM_TRUST_REG_BAM_VMID_MASK                                            0x1F00    
#define BAM_TRUST_REG_BAM_VMID_SHFT                                            0x8       
#define BAM_TRUST_REG_BAM_RST_BLOCK_MASK                                       0x80      
#define BAM_TRUST_REG_BAM_RST_BLOCK_SHFT                                       0x7       
#define BAM_TRUST_REG_BAM_EE_MASK                                              0x7       
#define BAM_TRUST_REG_BAM_EE_SHFT                                              0x0       
/* BAM_TEST_BUS_SEL*/
#define BAM_TEST_BUS_SEL                                                       ( 0x74 )  
#define BAM_TEST_BUS_SEL_BAM_DATA_ERASE_MASK                                   0x40000   
#define BAM_TEST_BUS_SEL_BAM_DATA_ERASE_SHFT                                   0x12      
#define BAM_TEST_BUS_SEL_BAM_DATA_FLUSH_MASK                                   0x20000   
#define BAM_TEST_BUS_SEL_BAM_DATA_FLUSH_SHFT                                   0x11      
#define BAM_TEST_BUS_SEL_BAM_CLK_ALWAYS_ON_MASK                                0x10000   
#define BAM_TEST_BUS_SEL_BAM_CLK_ALWAYS_ON_SHFT                                0x10      
#define BAM_TEST_BUS_SEL_BAM_TESTBUS_SEL_MASK                                  0x7F      
#define BAM_TEST_BUS_SEL_BAM_TESTBUS_SEL_SHFT                                  0x0       
/* BAM_TEST_BUS_REG*/
#define BAM_TEST_BUS_REG                                                       ( 0x78 )  
#define BAM_TEST_BUS_REG_BAM_TESTBUS_REG_MASK                                  0xFFFFFFFF
#define BAM_TEST_BUS_REG_BAM_TESTBUS_REG_SHFT                                  0x0       
/* BAM_CNFG_BITS*/
#define BAM_CNFG_BITS                                                          ( 0x7C )  
#define BAM_CNFG_BITS_BAM_CD_ENABLE_MASK                                       0x8000000 
#define BAM_CNFG_BITS_BAM_CD_ENABLE_SHFT                                       0x1B      
#define BAM_CNFG_BITS_BAM_AU_ACCUMED_MASK                                      0x4000000 
#define BAM_CNFG_BITS_BAM_AU_ACCUMED_SHFT                                      0x1A      
#define BAM_CNFG_BITS_BAM_PSM_P_HD_DATA_MASK                                   0x2000000 
#define BAM_CNFG_BITS_BAM_PSM_P_HD_DATA_SHFT                                   0x19      
#define BAM_CNFG_BITS_BAM_REG_P_EN_MASK                                        0x1000000 
#define BAM_CNFG_BITS_BAM_REG_P_EN_SHFT                                        0x18      
#define BAM_CNFG_BITS_BAM_WB_DSC_AVL_P_RST_MASK                                0x800000  
#define BAM_CNFG_BITS_BAM_WB_DSC_AVL_P_RST_SHFT                                0x17      
#define BAM_CNFG_BITS_BAM_WB_RETR_SVPNT_MASK                                   0x400000  
#define BAM_CNFG_BITS_BAM_WB_RETR_SVPNT_SHFT                                   0x16      
#define BAM_CNFG_BITS_BAM_WB_CSW_ACK_IDL_MASK                                  0x200000  
#define BAM_CNFG_BITS_BAM_WB_CSW_ACK_IDL_SHFT                                  0x15      
#define BAM_CNFG_BITS_BAM_WB_BLK_CSW_MASK                                      0x100000  
#define BAM_CNFG_BITS_BAM_WB_BLK_CSW_SHFT                                      0x14      
#define BAM_CNFG_BITS_BAM_WB_P_RES_MASK                                        0x80000   
#define BAM_CNFG_BITS_BAM_WB_P_RES_SHFT                                        0x13      
#define BAM_CNFG_BITS_BAM_SI_P_RES_MASK                                        0x40000   
#define BAM_CNFG_BITS_BAM_SI_P_RES_SHFT                                        0x12      
#define BAM_CNFG_BITS_BAM_AU_P_RES_MASK                                        0x20000   
#define BAM_CNFG_BITS_BAM_AU_P_RES_SHFT                                        0x11      
#define BAM_CNFG_BITS_BAM_PSM_P_RES_MASK                                       0x10000   
#define BAM_CNFG_BITS_BAM_PSM_P_RES_SHFT                                       0x10      
#define BAM_CNFG_BITS_BAM_PSM_CSW_REQ_MASK                                     0x8000    
#define BAM_CNFG_BITS_BAM_PSM_CSW_REQ_SHFT                                     0xF       
#define BAM_CNFG_BITS_BAM_SB_CLK_REQ_MASK                                      0x4000    
#define BAM_CNFG_BITS_BAM_SB_CLK_REQ_SHFT                                      0xE       
#define BAM_CNFG_BITS_BAM_IBC_DISABLE_MASK                                     0x2000    
#define BAM_CNFG_BITS_BAM_IBC_DISABLE_SHFT                                     0xD       
#define BAM_CNFG_BITS_BAM_NO_EXT_P_RST_MASK                                    0x1000    
#define BAM_CNFG_BITS_BAM_NO_EXT_P_RST_SHFT                                    0xC       
#define BAM_CNFG_BITS_BAM_FULL_PIPE_MASK                                       0x800     
#define BAM_CNFG_BITS_BAM_FULL_PIPE_SHFT                                       0xB       
#define BAM_CNFG_BITS_BAM_ADML_SYNC_BRIDGE_MASK                                0x8       
#define BAM_CNFG_BITS_BAM_ADML_SYNC_BRIDGE_SHFT                                0x3       
#define BAM_CNFG_BITS_BAM_PIPE_CNFG_MASK                                       0x4       
#define BAM_CNFG_BITS_BAM_PIPE_CNFG_SHFT                                       0x2       
#define BAM_CNFG_BITS_BAM_ADML_DEEP_CONS_FIFO_MASK                             0x2       
#define BAM_CNFG_BITS_BAM_ADML_DEEP_CONS_FIFO_SHFT                             0x1       
#define BAM_CNFG_BITS_BAM_ADML_INCR4_EN_N_MASK                                 0x1       
#define BAM_CNFG_BITS_BAM_ADML_INCR4_EN_N_SHFT                                 0x0       
/* BAM_IRQ_SRCS_EEn*/
#define BAM_IRQ_SRCS_EEn(n)                                                    ( 0x800 + 0x80 * (n) )
#define BAM_IRQ_SRCS_EEn_BAM_IRQ_MASK                                          0x80000000
#define BAM_IRQ_SRCS_EEn_BAM_IRQ_SHFT                                          0x1F      
#define BAM_IRQ_SRCS_EEn_P_IRQ_MASK                                            0x7FFFFFFF
#define BAM_IRQ_SRCS_EEn_P_IRQ_SHFT                                            0x0       
/* BAM_IRQ_SRCS_MSK_EEn*/
#define BAM_IRQ_SRCS_MSK_EEn(n)                                                ( 0x804 + 0x80 * (n) )
#define BAM_IRQ_SRCS_MSK_EEn_BAM_IRQ_MSK_MASK                                  0x80000000
#define BAM_IRQ_SRCS_MSK_EEn_BAM_IRQ_MSK_SHFT                                  0x1F      
#define BAM_IRQ_SRCS_MSK_EEn_P_IRQ_MSK_MASK                                    0x7FFFFFFF
#define BAM_IRQ_SRCS_MSK_EEn_P_IRQ_MSK_SHFT                                    0x0       
/* BAM_IRQ_SRCS_UNMASKED_EEn*/
#define BAM_IRQ_SRCS_UNMASKED_EEn(n)                                           ( 0x808 + 0x80 * (n) )
#define BAM_IRQ_SRCS_UNMASKED_EEn_BAM_IRQ_UNMASKED_MASK                        0x80000000
#define BAM_IRQ_SRCS_UNMASKED_EEn_BAM_IRQ_UNMASKED_SHFT                        0x1F      
#define BAM_IRQ_SRCS_UNMASKED_EEn_P_IRQ_UNMASKED_MASK                          0x7FFFFFFF
#define BAM_IRQ_SRCS_UNMASKED_EEn_P_IRQ_UNMASKED_SHFT                          0x0       
/* BAM_P_CTRLn*/
#define BAM_P_CTRLn(n)                                                         ( 0x1000 + 0x1000 * (n) )
#define BAM_P_CTRLn_P_LOCK_GROUP_MASK                                          0x1F0000  
#define BAM_P_CTRLn_P_LOCK_GROUP_SHFT                                          0x10      
#define BAM_P_CTRLn_P_WRITE_NWD_MASK                                           0x800     
#define BAM_P_CTRLn_P_WRITE_NWD_SHFT                                           0xB       
#define BAM_P_CTRLn_P_PREFETCH_LIMIT_MASK                                      0x600     
#define BAM_P_CTRLn_P_PREFETCH_LIMIT_SHFT                                      0x9       
#define BAM_P_CTRLn_P_AUTO_EOB_SEL_MASK                                        0x180     
#define BAM_P_CTRLn_P_AUTO_EOB_SEL_SHFT                                        0x7       
#define BAM_P_CTRLn_P_AUTO_EOB_MASK                                            0x40      
#define BAM_P_CTRLn_P_AUTO_EOB_SHFT                                            0x6       
#define BAM_P_CTRLn_P_SYS_MODE_MASK                                            0x20      
#define BAM_P_CTRLn_P_SYS_MODE_SHFT                                            0x5       
#define BAM_P_CTRLn_P_SYS_STRM_MASK                                            0x10      
#define BAM_P_CTRLn_P_SYS_STRM_SHFT                                            0x4       
#define BAM_P_CTRLn_P_DIRECTION_MASK                                           0x8       
#define BAM_P_CTRLn_P_DIRECTION_SHFT                                           0x3       
#define BAM_P_CTRLn_P_EN_MASK                                                  0x2       
#define BAM_P_CTRLn_P_EN_SHFT                                                  0x1       
/* BAM_P_RSTn*/
#define BAM_P_RSTn(n)                                                          ( 0x1004 + 0x1000 * (n) )
#define BAM_P_RSTn_P_SW_RST_MASK                                               0x1       
#define BAM_P_RSTn_P_SW_RST_SHFT                                               0x0       
/* BAM_P_HALTn*/
#define BAM_P_HALTn(n)                                                         ( 0x1008 + 0x1000 * (n) )
#define BAM_P_HALTn_P_PROD_HALTED_MASK                                         0x2       
#define BAM_P_HALTn_P_PROD_HALTED_SHFT                                         0x1       
#define BAM_P_HALTn_P_HALT_MASK                                                0x1       
#define BAM_P_HALTn_P_HALT_SHFT                                                0x0       
/* BAM_P_TRUST_REGn*/
#define BAM_P_TRUST_REGn(n)                                                    ( 0x1030 + 0x1000 * (n) )
#define BAM_P_TRUST_REGn_BAM_P_VMID_MASK                                       0x1F00    
#define BAM_P_TRUST_REGn_BAM_P_VMID_SHFT                                       0x8       
#define BAM_P_TRUST_REGn_BAM_P_SUP_GROUP_MASK                                  0xF8       
#define BAM_P_TRUST_REGn_BAM_P_SUP_GROUP_SHFT                                  0x3       
#define BAM_P_TRUST_REGn_BAM_P_EE_MASK                                         0x7       
#define BAM_P_TRUST_REGn_BAM_P_EE_SHFT                                         0x0       
/* BAM_P_IRQ_STTSn*/
#define BAM_P_IRQ_STTSn(n)                                                     ( 0x1010 + 0x1000 * (n) )
#define BAM_P_IRQ_STTSn_P_TRNSFR_END_IRQ_MASK                                  0x20      
#define BAM_P_IRQ_STTSn_P_TRNSFR_END_IRQ_SHFT                                  0x5       
#define BAM_P_IRQ_STTSn_P_ERR_IRQ_MASK                                         0x10      
#define BAM_P_IRQ_STTSn_P_ERR_IRQ_SHFT                                         0x4       
#define BAM_P_IRQ_STTSn_P_OUT_OF_DESC_IRQ_MASK                                 0x8       
#define BAM_P_IRQ_STTSn_P_OUT_OF_DESC_IRQ_SHFT                                 0x3       
#define BAM_P_IRQ_STTSn_P_WAKE_IRQ_MASK                                        0x4       
#define BAM_P_IRQ_STTSn_P_WAKE_IRQ_SHFT                                        0x2       
#define BAM_P_IRQ_STTSn_P_TIMER_IRQ_MASK                                       0x2       
#define BAM_P_IRQ_STTSn_P_TIMER_IRQ_SHFT                                       0x1       
#define BAM_P_IRQ_STTSn_P_PRCSD_DESC_IRQ_MASK                                  0x1       
#define BAM_P_IRQ_STTSn_P_PRCSD_DESC_IRQ_SHFT                                  0x0       
/* BAM_P_IRQ_CLRn*/
#define BAM_P_IRQ_CLRn(n)                                                      ( 0x1014 + 0x1000 * (n) )
#define BAM_P_IRQ_CLRn_P_TRNSFR_END_CLR_MASK                                   0x20      
#define BAM_P_IRQ_CLRn_P_TRNSFR_END_CLR_SHFT                                   0x5       
#define BAM_P_IRQ_CLRn_P_ERR_CLR_MASK                                          0x10      
#define BAM_P_IRQ_CLRn_P_ERR_CLR_SHFT                                          0x4       
#define BAM_P_IRQ_CLRn_P_OUT_OF_DESC_CLR_MASK                                  0x8       
#define BAM_P_IRQ_CLRn_P_OUT_OF_DESC_CLR_SHFT                                  0x3       
#define BAM_P_IRQ_CLRn_P_WAKE_CLR_MASK                                         0x4       
#define BAM_P_IRQ_CLRn_P_WAKE_CLR_SHFT                                         0x2       
#define BAM_P_IRQ_CLRn_P_TIMER_CLR_MASK                                        0x2       
#define BAM_P_IRQ_CLRn_P_TIMER_CLR_SHFT                                        0x1       
#define BAM_P_IRQ_CLRn_P_PRCSD_DESC_CLR_MASK                                   0x1       
#define BAM_P_IRQ_CLRn_P_PRCSD_DESC_CLR_SHFT                                   0x0       
/* BAM_P_IRQ_ENn*/
#define BAM_P_IRQ_ENn(n)                                                       ( 0x1018 + 0x1000 * (n) )
#define BAM_P_IRQ_ENn_P_TRNSFR_END_EN_MASK                                     0x20      
#define BAM_P_IRQ_ENn_P_TRNSFR_END_EN_SHFT                                     0x5       
#define BAM_P_IRQ_ENn_P_ERR_EN_MASK                                            0x10      
#define BAM_P_IRQ_ENn_P_ERR_EN_SHFT                                            0x4       
#define BAM_P_IRQ_ENn_P_OUT_OF_DESC_EN_MASK                                    0x8       
#define BAM_P_IRQ_ENn_P_OUT_OF_DESC_EN_SHFT                                    0x3       
#define BAM_P_IRQ_ENn_P_WAKE_EN_MASK                                           0x4       
#define BAM_P_IRQ_ENn_P_WAKE_EN_SHFT                                           0x2       
#define BAM_P_IRQ_ENn_P_TIMER_EN_MASK                                          0x2       
#define BAM_P_IRQ_ENn_P_TIMER_EN_SHFT                                          0x1       
#define BAM_P_IRQ_ENn_P_PRCSD_DESC_EN_MASK                                     0x1       
#define BAM_P_IRQ_ENn_P_PRCSD_DESC_EN_SHFT                                     0x0       
/* BAM_P_TIMERn*/
#define BAM_P_TIMERn(n)                                                        ( 0x101C + 0x1000 * (n) )
#define BAM_P_TIMERn_P_TIMER_MASK                                              0xFFFF    
#define BAM_P_TIMERn_P_TIMER_SHFT                                              0x0       
/* BAM_P_TIMER_CTRLn*/
#define BAM_P_TIMER_CTRLn(n)                                                   ( 0x1020 + 0x1000 * (n) )
#define BAM_P_TIMER_CTRLn_P_TIMER_RST_MASK                                     0x80000000
#define BAM_P_TIMER_CTRLn_P_TIMER_RST_SHFT                                     0x1F      
#define BAM_P_TIMER_CTRLn_P_TIMER_RUN_MASK                                     0x40000000
#define BAM_P_TIMER_CTRLn_P_TIMER_RUN_SHFT                                     0x1E      
#define BAM_P_TIMER_CTRLn_P_TIMER_MODE_MASK                                    0x20000000
#define BAM_P_TIMER_CTRLn_P_TIMER_MODE_SHFT                                    0x1D      
#define BAM_P_TIMER_CTRLn_P_TIMER_TRSHLD_MASK                                  0xFFFF    
#define BAM_P_TIMER_CTRLn_P_TIMER_TRSHLD_SHFT                                  0x0       
/* BAM_P_PRDCR_SDBNDn*/
#define BAM_P_PRDCR_SDBNDn(n)                                                  ( 0x1024 + 0x1000 * (n) )
#define BAM_P_PRDCR_SDBNDn_BAM_P_SB_UPDATED_MASK                               0x1000000 
#define BAM_P_PRDCR_SDBNDn_BAM_P_SB_UPDATED_SHFT                               0x18      
#define BAM_P_PRDCR_SDBNDn_BAM_P_TOGGLE_MASK                                   0x100000  
#define BAM_P_PRDCR_SDBNDn_BAM_P_TOGGLE_SHFT                                   0x14      
#define BAM_P_PRDCR_SDBNDn_BAM_P_CTRL_MASK                                     0xF0000   
#define BAM_P_PRDCR_SDBNDn_BAM_P_CTRL_SHFT                                     0x10      
#define BAM_P_PRDCR_SDBNDn_BAM_P_BYTES_FREE_MASK                               0xFFFF    
#define BAM_P_PRDCR_SDBNDn_BAM_P_BYTES_FREE_SHFT                               0x0       
/* BAM_P_CNSMR_SDBNDn*/
#define BAM_P_CNSMR_SDBNDn(n)                                                  ( 0x1028 + 0x1000 * (n) )
#define BAM_P_CNSMR_SDBNDn_BAM_P_SB_UPDATED_MASK                               0x1000000 
#define BAM_P_CNSMR_SDBNDn_BAM_P_SB_UPDATED_SHFT                               0x18      
#define BAM_P_CNSMR_SDBNDn_BAM_P_WAIT_4_ACK_MASK                               0x800000  
#define BAM_P_CNSMR_SDBNDn_BAM_P_WAIT_4_ACK_SHFT                               0x17      
#define BAM_P_CNSMR_SDBNDn_BAM_P_ACK_TOGGLE_MASK                               0x400000  
#define BAM_P_CNSMR_SDBNDn_BAM_P_ACK_TOGGLE_SHFT                               0x16      
#define BAM_P_CNSMR_SDBNDn_BAM_P_ACK_TOGGLE_R_MASK                             0x200000  
#define BAM_P_CNSMR_SDBNDn_BAM_P_ACK_TOGGLE_R_SHFT                             0x15      
#define BAM_P_CNSMR_SDBNDn_BAM_P_TOGGLE_MASK                                   0x100000  
#define BAM_P_CNSMR_SDBNDn_BAM_P_TOGGLE_SHFT                                   0x14      
#define BAM_P_CNSMR_SDBNDn_BAM_P_CTRL_MASK                                     0xF0000   
#define BAM_P_CNSMR_SDBNDn_BAM_P_CTRL_SHFT                                     0x10      
#define BAM_P_CNSMR_SDBNDn_BAM_P_BYTES_AVAIL_MASK                              0xFFFF    
#define BAM_P_CNSMR_SDBNDn_BAM_P_BYTES_AVAIL_SHFT                              0x0       
/* BAM_P_EVNT_DEST_ADDRn*/
#define BAM_P_EVNT_DEST_ADDRn(n)                                               ( 0x182C + 0x1000 * (n) )
#define BAM_P_EVNT_DEST_ADDRn_P_EVNT_DEST_ADDR_MASK                            0xFFFFFFFF
#define BAM_P_EVNT_DEST_ADDRn_P_EVNT_DEST_ADDR_SHFT                            0x0       
/* BAM_P_EVNT_REGn*/
#define BAM_P_EVNT_REGn(n)                                                     ( 0x1818 + 0x1000 * (n) )
#define BAM_P_EVNT_REGn_P_BYTES_CONSUMED_MASK                                  0xFFFF0000
#define BAM_P_EVNT_REGn_P_BYTES_CONSUMED_SHFT                                  0x10      
#define BAM_P_EVNT_REGn_P_DESC_FIFO_PEER_OFST_MASK                             0xFFFF    
#define BAM_P_EVNT_REGn_P_DESC_FIFO_PEER_OFST_SHFT                             0x0       
/* BAM_P_SW_OFSTSn*/
#define BAM_P_SW_OFSTSn(n)                                                     ( 0x1800 + 0x1000 * (n) )
#define BAM_P_SW_OFSTSn_SW_OFST_IN_DESC_MASK                                   0xFFFF0000
#define BAM_P_SW_OFSTSn_SW_OFST_IN_DESC_SHFT                                   0x10      
#define BAM_P_SW_OFSTSn_SW_DESC_OFST_MASK                                      0xFFFF    
#define BAM_P_SW_OFSTSn_SW_DESC_OFST_SHFT                                      0x0       
/* BAM_P_DATA_FIFO_ADDRn*/
#define BAM_P_DATA_FIFO_ADDRn(n)                                               ( 0x1824 + 0x1000 * (n) )
#define BAM_P_DATA_FIFO_ADDRn_P_DATA_FIFO_ADDR_MASK                            0xFFFFFFFF
#define BAM_P_DATA_FIFO_ADDRn_P_DATA_FIFO_ADDR_SHFT                            0x0       
/* BAM_P_DESC_FIFO_ADDRn*/
#define BAM_P_DESC_FIFO_ADDRn(n)                                               ( 0x181C + 0x1000 * (n) )
#define BAM_P_DESC_FIFO_ADDRn_P_DESC_FIFO_ADDR_MASK                            0xFFFFFFFF
#define BAM_P_DESC_FIFO_ADDRn_P_DESC_FIFO_ADDR_SHFT                            0x0       
/* BAM_P_EVNT_GEN_TRSHLDn*/
#define BAM_P_EVNT_GEN_TRSHLDn(n)                                              ( 0x1828 + 0x1000 * (n) )
#define BAM_P_EVNT_GEN_TRSHLDn_P_TRSHLD_MASK                                   0xFFFF    
#define BAM_P_EVNT_GEN_TRSHLDn_P_TRSHLD_SHFT                                   0x0       
/* BAM_P_FIFO_SIZESn*/
#define BAM_P_FIFO_SIZESn(n)                                                   ( 0x1820 + 0x1000 * (n) )
#define BAM_P_FIFO_SIZESn_P_DATA_FIFO_SIZE_MASK                                0xFFFF0000
#define BAM_P_FIFO_SIZESn_P_DATA_FIFO_SIZE_SHFT                                0x10      
#define BAM_P_FIFO_SIZESn_P_DESC_FIFO_SIZE_MASK                                0xFFFF    
#define BAM_P_FIFO_SIZESn_P_DESC_FIFO_SIZE_SHFT                                0x0       
/* BAM_P_RETR_CNTXT_n*/
#define BAM_P_RETR_CNTXT_n(n)                                                  ( 0x1834 + 0x1000 * (n) )
#define BAM_P_RETR_CNTXT_n_RETR_DESC_OFST_MASK                                 0xFFFF0000
#define BAM_P_RETR_CNTXT_n_RETR_DESC_OFST_SHFT                                 0x10      
#define BAM_P_RETR_CNTXT_n_RETR_OFST_IN_DESC_MASK                              0xFFFF    
#define BAM_P_RETR_CNTXT_n_RETR_OFST_IN_DESC_SHFT                              0x0       
/* BAM_P_SI_CNTXT_n*/
#define BAM_P_SI_CNTXT_n(n)                                                    ( 0x1838 + 0x1000 * (n) )
#define BAM_P_SI_CNTXT_n_SI_DESC_OFST_MASK                                     0xFFFF    
#define BAM_P_SI_CNTXT_n_SI_DESC_OFST_SHFT                                     0x0       
/* BAM_P_DF_CNTXT_n*/
#define BAM_P_DF_CNTXT_n(n)                                                    ( 0x1830 + 0x1000 * (n) )
#define BAM_P_DF_CNTXT_n_WB_ACCUMULATED_MASK                                   0xFFFF0000
#define BAM_P_DF_CNTXT_n_WB_ACCUMULATED_SHFT                                   0x10      
#define BAM_P_DF_CNTXT_n_DF_DESC_OFST_MASK                                     0xFFFF    
#define BAM_P_DF_CNTXT_n_DF_DESC_OFST_SHFT                                     0x0       
/* BAM_P_AU_PSM_CNTXT_1_n*/
#define BAM_P_AU_PSM_CNTXT_1_n(n)                                              ( 0x1804 + 0x1000 * (n) )
#define BAM_P_AU_PSM_CNTXT_1_n_AU_PSM_ACCUMED_MASK                             0xFFFF0000
#define BAM_P_AU_PSM_CNTXT_1_n_AU_PSM_ACCUMED_SHFT                             0x10      
#define BAM_P_AU_PSM_CNTXT_1_n_AU_ACKED_MASK                                   0xFFFF    
#define BAM_P_AU_PSM_CNTXT_1_n_AU_ACKED_SHFT                                   0x0       
/* BAM_P_PSM_CNTXT_2_n*/
#define BAM_P_PSM_CNTXT_2_n(n)                                                 ( 0x1808 + 0x1000 * (n) )
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_VALID_MASK                                0x80000000
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_VALID_SHFT                                0x1F      
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_IRQ_MASK                                  0x40000000
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_IRQ_SHFT                                  0x1E      
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_IRQ_DONE_MASK                             0x20000000
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_IRQ_DONE_SHFT                             0x1D      
#define BAM_P_PSM_CNTXT_2_n_PSM_GENERAL_BITS_MASK                              0x1E000000
#define BAM_P_PSM_CNTXT_2_n_PSM_GENERAL_BITS_SHFT                              0x19      
#define BAM_P_PSM_CNTXT_2_n_PSM_CONS_STATE_MASK                                0x1C00000 
#define BAM_P_PSM_CNTXT_2_n_PSM_CONS_STATE_SHFT                                0x16      
#define BAM_P_PSM_CNTXT_2_n_PSM_PROD_SYS_STATE_MASK                            0x380000  
#define BAM_P_PSM_CNTXT_2_n_PSM_PROD_SYS_STATE_SHFT                            0x13      
#define BAM_P_PSM_CNTXT_2_n_PSM_PROD_B2B_STATE_MASK                            0x70000   
#define BAM_P_PSM_CNTXT_2_n_PSM_PROD_B2B_STATE_SHFT                            0x10      
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_SIZE_MASK                                 0xFFFF    
#define BAM_P_PSM_CNTXT_2_n_PSM_DESC_SIZE_SHFT                                 0x0       
/* BAM_P_PSM_CNTXT_3_n*/
#define BAM_P_PSM_CNTXT_3_n(n)                                                 ( 0x180C + 0x1000 * (n) )
#define BAM_P_PSM_CNTXT_3_n_PSM_DESC_ADDR_MASK                                 0xFFFFFFFF
#define BAM_P_PSM_CNTXT_3_n_PSM_DESC_ADDR_SHFT                                 0x0       
/* BAM_P_PSM_CNTXT_4_n*/
#define BAM_P_PSM_CNTXT_4_n(n)                                                 ( 0x1810 + 0x1000 * (n) )
#define BAM_P_PSM_CNTXT_4_n_PSM_DESC_OFST_MASK                                 0xFFFF0000
#define BAM_P_PSM_CNTXT_4_n_PSM_DESC_OFST_SHFT                                 0x10      
#define BAM_P_PSM_CNTXT_4_n_PSM_SAVED_ACCUMED_SIZE_MASK                        0xFFFF    
#define BAM_P_PSM_CNTXT_4_n_PSM_SAVED_ACCUMED_SIZE_SHFT                        0x0       
/* BAM_P_PSM_CNTXT_5_n*/
#define BAM_P_PSM_CNTXT_5_n(n)                                                 ( 0x1814 + 0x1000 * (n) )
#define BAM_P_PSM_CNTXT_5_n_PSM_BLOCK_BYTE_CNT_MASK                            0xFFFF0000
#define BAM_P_PSM_CNTXT_5_n_PSM_BLOCK_BYTE_CNT_SHFT                            0x10      
#define BAM_P_PSM_CNTXT_5_n_PSM_OFST_IN_DESC_MASK                              0xFFFF    
#define BAM_P_PSM_CNTXT_5_n_PSM_OFST_IN_DESC_SHFT                              0x0       
/* BAM_P_RESERVED_2_n*/
#define BAM_P_RESERVED_2_n(n)                                                  ( 0x183C + 0x1000 * (n) )
#define BAM_P_RESERVED_2_n_BAM_P_RES_2_MASK                                    0xFFFFFFFF
#define BAM_P_RESERVED_2_n_BAM_P_RES_2_SHFT                                    0x0       
#endif /* #ifndef BAMHWIO_H */
