/*
 * ===========================================================================
 * Loom SDK
 * Copyright 2011, 2012, 2013
 * The Game Engine Company, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================
 */

#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "loom/common/platform/platform.h"

#if LOOM_PLATFORM == LOOM_PLATFORM_LINUX
#include <stdarg.h>
#endif

#include "loom/common/platform/platformThread.h"
#include "loom/common/platform/platformTime.h" // Needed to generate fake accelerometer data

#include "loom/common/core/performance.h"
#include "loom/common/core/log.h"

#include "loom/engine/services/platformDisplay.h"

#if LOOM_PLATFORM == LOOM_PLATFORM_LINUX || LOOM_PLATFORM == LOOM_PLATFORM_WIN32 || LOOM_PLATFORM == LOOM_PLATFORM_OSX

display_profile display_getProfile()
{
    return PROFILE_DESKTOP;
}


float display_getDPI()
{
    return 200;
}
#endif
