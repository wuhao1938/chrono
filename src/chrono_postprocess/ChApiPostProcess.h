//
// PROJECT CHRONO - http://projectchrono.org
//
// Copyright (c) 2011-2012 Alessandro Tasora
// All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file at the top level of the distribution
// and at http://projectchrono.org/license-chrono.txt.
//

#ifndef CHAPIPOSTPROCESS_H
#define CHAPIPOSTPROCESS_H

#include "chrono/core/ChPlatform.h"

// Chrono::Engine version
//
// This is an integer, as 0xaabbccdd where
// for example version 1.2.0 is 0x00010200

#define CH_VERSION_POSTPROCESS_MODULE 0x00000100

// When compiling this library, remember to define CH_API_COMPILE_POSTPROCESS
// (so that the symbols with 'ChApiPostProcess' in front of them will be
// marked as exported). Otherwise, just do not define it if you
// link the library to your code, and the symbols will be imported.

#if defined(CH_API_COMPILE_POSTPROCESS)
#define ChApiPostProcess ChApiEXPORT
#else
#define ChApiPostProcess ChApiIMPORT
#endif

/**
    @defgroup postprocess_module POSTPROCESS module
    @brief Postprocessing toos (for POVray animations, GNUplot, etc.)

    This module provides some postprocessing tools that can be used
    to output high quality renderings and other kind of post processed data.

    Currently we support
    - POVray
    - GNUplot

    For additional information, see:
    - the [installation guide](@ref module_postprocess_installation)
    - the [tutorials](@ref tutorial_root)
*/


#endif  // END of header