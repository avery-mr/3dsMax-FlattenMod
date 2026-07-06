#pragma once

//**************************************************************************/
// Copyright (c) 1998-2018 Autodesk, Inc.
// All rights reserved.
// 
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.
//**************************************************************************/
// DESCRIPTION: Includes for Plugins
// AUTHOR: 
//***************************************************************************/

#include "3dsmaxsdk_preinclude.h"
#include "resource.h"
#include <istdplug.h>
#include <iparamb2.h>
#include <iparamm2.h>
#include <modstack.h>
#include <polyobj.h>
#include <mnmesh.h>
#include <triobj.h>
#include <mesh.h>
#include <maxtypes.h>

//SIMPLE TYPE


#include <meshadj.h>
#include <XTCObject.h>


extern TCHAR* GetString(int id);

extern HINSTANCE hInstance;

enum { flattenmod_params };


// TODO: Add enums for various parameters
enum {
    pb_axis,            // 0=X, 1=Y, 2=Z
    pb_flatten_mode,    // 0=ToValue, 1=ToAverage
    pb_flatten_value,   // world-space target position
    pb_weight,          // 0.0 - 1.0
};


