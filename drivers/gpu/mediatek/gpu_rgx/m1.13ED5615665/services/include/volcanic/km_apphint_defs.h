/*************************************************************************/ /*!
@File
@Title          Services AppHint definitions
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Device specific functions
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/
#include "km_apphint_defs_common.h"

#ifndef KM_APPHINT_DEFS_H
#define KM_APPHINT_DEFS_H

/* NB: The 'DEVICE' AppHints must be last in this list as they will be
 * duplicated in the case of a driver supporting multiple devices
 */
#define APPHINT_LIST_ALL \
	APPHINT_LIST_BUILDVAR_COMMON \
	APPHINT_LIST_BUILDVAR \
	APPHINT_LIST_MODPARAM_COMMON \
	APPHINT_LIST_MODPARAM \
	APPHINT_LIST_DEBUGFS_COMMON \
	APPHINT_LIST_DEBUGFS \
	APPHINT_LIST_DEBUGFS_DEVICE_COMMON \
	APPHINT_LIST_DEBUGFS_DEVICE


/*
*******************************************************************************
 Build variables (volcanic-specific)
 All of these should be configurable only through the 'default' value
******************************************************************************/
#define APPHINT_LIST_BUILDVAR

/*
*******************************************************************************
 Module parameters (volcanic-specific)
******************************************************************************/
#define APPHINT_LIST_MODPARAM \
/* name,                            type,           class,       default,                                         helper,         */ \
X(FabricCoherencyOverride,          UINT32,         ALWAYS,      PVRSRV_APPHINT_FABRICCOHERENCYOVERRIDE,          NO_PARAM_TABLE   ) \
\
X(EnableGenericDMKillingRandMode,   BOOL,           VALIDATION,  PVRSRV_APPHINT_ENABLEDMKILLINGRANDMODE,          NO_PARAM_TABLE   ) \
X(KillingCtl,                       UINT32,         VALIDATION,  PVRSRV_APPHINT_KILLINGCTL,                       NO_PARAM_TABLE   ) \
X(HWValEnableSPUPowerMaskChange,    BOOL,           VALIDATION,  PVRSRV_APPHINT_HWVALENABLESPUPOWERMASKCHANGE,    NO_PARAM_TABLE   ) \
X(HWValAvailableSPUMask,            UINT32,         VALIDATION,  PVRSRV_APPHINT_HWVALAVAILABLESPUMASK,            NO_PARAM_TABLE   ) \
\
X(HWPerfDisableCounterFilter,       BOOL,           VALIDATION,  PVRSRV_APPHINT_HWPERFDISABLECOUNTERFILTER,       NO_PARAM_TABLE   ) \
\
X(ISPSchedulingLatencyMode,         UINT32,         ALWAYS,      PVRSRV_APPHINT_ISPSCHEDULINGLATENCYMODE,         NO_PARAM_TABLE   ) \
X(ValidateSOCUSCTimer,              BOOL,           VALIDATION,  PVRSRV_APPHINT_VALIDATESOCUSCTIMERS,             NO_PARAM_TABLE   ) \
X(HMMUOSID0_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID0_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID1_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID1_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID2_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID2_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID3_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID3_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID4_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID4_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID5_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID5_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID6_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID6_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUOSID7_Options,                UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMUOSID7_OPTIONS,                NO_PARAM_TABLE   ) \
X(HMMUValidationIPAPAOffset,        UINT32,         VALIDATION,  PVRSRV_APPHINT_HMMU_VALIDATION_IPA_PA_OFFSET,    NO_PARAM_TABLE   ) \
\
X(USRMNumRegionsVDM,                UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
X(USRMNumRegionsCDM,                UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
X(USRMNumRegionsDDM,                UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
X(USRMNumRegionsPDM,                UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
X(USRMNumRegionsTDM,                UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
\
X(UVBRMNumRegionsVDM,               UINT64,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
X(UVBRMNumRegionsDDM,               UINT32,         VALIDATION,  0,                                               NO_PARAM_TABLE   ) \
\
X(CDMArbitrationOverride,           UINT32,         ALWAYS,      PVRSRV_APPHINT_CDMARBITRATIONOVERRIDE,           NO_PARAM_TABLE   ) \
\
X(DualLockstepFWProcessor,          BOOL,           VALIDATION,  PVRSRV_APPHINT_DUAL_LOCKSTEP_FWPROC,             NO_PARAM_TABLE   ) \

/*
*******************************************************************************
 Debugfs parameters (volcanic-specific) - driver configuration
******************************************************************************/
#define APPHINT_LIST_DEBUGFS \
/* name,                            type,           class,       default,                                         helper,         */ \

/*
*******************************************************************************
 Debugfs parameters (volcanic-specific) - device configuration
******************************************************************************/
#define APPHINT_LIST_DEBUGFS_DEVICE \
/* name,                            type,           class,       default,                                         helper,         */ \
X(HWValInjectSPUPowerStateMask,     BOOL,           VALIDATION,  PVRSRV_APPHINT_HWVALINJECTSPUPOWERSTATEMASK,     NO_PARAM_TABLE   ) \

/*
*******************************************************************************

 Table generated enums

******************************************************************************/
/* Unique ID for all AppHints */
typedef enum {
#define X(a, b, c, d, e) APPHINT_ID_ ## a,
	APPHINT_LIST_ALL
#undef X
	APPHINT_ID_MAX
} APPHINT_ID;

/* ID for build variable Apphints - used for build variable only structures */
typedef enum {
#define X(a, b, c, d, e) APPHINT_BUILDVAR_ID_ ## a,
	APPHINT_LIST_BUILDVAR_COMMON
	APPHINT_LIST_BUILDVAR
#undef X
	APPHINT_BUILDVAR_ID_MAX
} APPHINT_BUILDVAR_ID;

/* ID for Modparam Apphints - used for modparam only structures */
typedef enum {
#define X(a, b, c, d, e) APPHINT_MODPARAM_ID_ ## a,
	APPHINT_LIST_MODPARAM_COMMON
	APPHINT_LIST_MODPARAM
#undef X
	APPHINT_MODPARAM_ID_MAX
} APPHINT_MODPARAM_ID;

/* ID for Debugfs Apphints - used for debugfs only structures */
typedef enum {
#define X(a, b, c, d, e) APPHINT_DEBUGFS_ID_ ## a,
	APPHINT_LIST_DEBUGFS_COMMON
	APPHINT_LIST_DEBUGFS
#undef X
	APPHINT_DEBUGFS_ID_MAX
} APPHINT_DEBUGFS_ID;

/* ID for Debugfs Device Apphints - used for debugfs device only structures */
typedef enum {
#define X(a, b, c, d, e) APPHINT_DEBUGFS_DEVICE_ID_ ## a,
	APPHINT_LIST_DEBUGFS_DEVICE_COMMON
	APPHINT_LIST_DEBUGFS_DEVICE
#undef X
	APPHINT_DEBUGFS_DEVICE_ID_MAX
} APPHINT_DEBUGFS_DEVICE_ID;

#endif /* KM_APPHINT_DEFS_H */
