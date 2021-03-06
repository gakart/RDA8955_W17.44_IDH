/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/

















#ifndef VPPP_NOISESUPPRESS_ASM_H
#define VPPP_NOISESUPPRESS_ASM_H

#include "cs_types.h"

#ifndef CS_PLATFORM_SIMU

// avoid double declaration in simulation
#define RAM_X_BEGIN_ADDR               0x0000
#define RAM_Y_BEGIN_ADDR               0x4000

#endif

#define VPP_NOISESUPPRESS_MAIN_SIZE               g_vppNoiseSuppressCommonCodeSize
#define VPP_NOISESUPPRESS_MAIN_ENTRY              0
#define VPP_NOISESUPPRESS_CRITICAL_SECTION_MIN    0
#define VPP_NOISESUPPRESS_CRITICAL_SECTION_MAX    0

EXPORT CONST INT32 g_vppNoiseSuppressCommonCode[];
EXPORT CONST INT32 g_vppNoiseSuppressCommonCodeSize;

EXPORT INT32 g_vppNoiseSuppressConstX[];
EXPORT INT32 g_vppNoiseSuppressPreprocessCode[];



#endif  // VPPP_NOISESUPPRESS_ASM_H
