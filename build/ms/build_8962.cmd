@echo off
rem ==========================================================================
rem
rem  CBSP Buils system
rem
rem  General Description
rem     build batch file.
rem
rem Copyright (c) 2009-2009 by QUALCOMM, Incorporated.
rem All Rights Reserved.
rem QUALCOMM Proprietary/GTDR
rem
rem --------------------------------------------------------------------------
rem
rem $Header: //components/rel/dspbuild.adsp/2.2/ms/build_8962.cmd#2 $
rem $DateTime: 2013/08/02 15:10:50 $
rem $Author: coresvc $
rem $Change: 4212633 $
rem                      EDIT HISTORY FOR FILE
rem
rem  This section contains comments describing changes made to the module.
rem  Notice that changes are listed in reverse chronological order.
rem
rem when       who     what, where, why
rem --------   ---     ---------------------------------------------------------
rem
rem ==========================================================================

setlocal

echo -- Running Qshrink now --
call Qshrink.bat
echo -- Done running Qshrink now --

REM Enable Manifest file for Klocwork
if "%QDSP6_BUILD_VERSION%"=="0x8fffffff" (
echo REM set BUILDSPEC=KLOCWORK
) else (
set BUILDSPEC=KLOCWORK
)


REM if we have a set environment batch file, call it.
IF EXIST setenv.cmd CALL setenv.cmd


set MPFLAG=SPD

FOR %%A IN (%*) DO (
echo %%A
IF "%%A"=="adsp_mpd_images" (
set MPFLAG=USES_MULTI_PD
)
IF "%%A"=="adsp_core_images" (
set MPFLAG=CORE_KERNEL_CONFIGURATION,SPD
)
IF "%%A"=="adsp_mpd_core_images" (
set MPFLAG=CORE_KERNEL_CONFIGURATION,USES_MULTI_PD
)
IF "%%A"=="msm8962_MPD" (
set MPFLAG=USES_MULTI_PD,USES_FULL_ADSP_BUILD
)
IF "%%A"=="msm8962_hcbsp_MPD" (
set MPFLAG=USES_MULTI_PD,USES_FULL_ADSP_BUILD,HCBSP
)
IF "%%A"=="msm8962_hcbsp_SPD" (
set MPFLAG=SPD,HCBSP
)
)

REM Setup Default Values
SET BUILD_ID=AAAAAAAA
SET BUILD_VER=0002

REM Common
SET BUILD_ASIC=8962
SET MSM_ID=8962
SET HAL_PLATFORM=8962
SET TARGET_FAMILY=8962
SET CHIPSET=msm8962
SET BUILD_CMD=BUILD_ID=%BUILD_ID% BUILD_VER=%BUILD_VER% MSM_ID=%MSM_ID% HAL_PLATFORM=%HAL_PLATFORM% TARGET_FAMILY=%TARGET_FAMILY% BUILD_ASIC=%BUILD_ASIC% CHIPSET=%CHIPSET% USES_FLAGS=%MPFLAG% %*
echo BUILD_CMD = %BUILD_CMD%
REM ==================================================================
REM     Setup Hexagon Environment
REM ==================================================================

if "%HEXAGON_RTOS_RELEASE%" == "" (
set HEXAGON_RTOS_RELEASE=5.0.10
)
if "%HEXAGON_Q6VERSION%" == "" (
set HEXAGON_Q6VERSION=v5
)
if "%HEXAGON_ROOT%" == "" (
set HEXAGON_ROOT=C:\Qualcomm\HEXAGON_Tools
)
if "%HEXAGON_REQD_Q6VERSION%" == "" (
set HEXAGON_REQD_Q6VERSION=v5
)
if "%HEXAGON_REQD_RTOS_RELEASE%" == "" (
set HEXAGON_REQD_RTOS_RELEASE=5.0.10
)

REM Setup Paths
SET SCONS_BUILD_ROOT=%~dp0..\..
SET SCONS_TARGET_ROOT=%SCONS_BUILD_ROOT%\..
SET TOOLS_SCONS_ROOT=%SCONS_BUILD_ROOT%\tools\build\scons
echo Calling rename-log.cmd
CALL %TOOLS_SCONS_ROOT%\build\rename-log.cmd
CALL %TOOLS_SCONS_ROOT%\build\build.cmd -f %TOOLS_SCONS_ROOT%\build\start.scons %BUILD_CMD%
@exit /B %ERRORLEVEL%

