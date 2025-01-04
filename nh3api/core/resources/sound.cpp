//===----------------------------------------------------------------------===//
//
// Part of the NH3API, under the Apache License v2.0.
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//
#include "sound.hpp"

#ifndef NH3API_FLAG_INLINE_HEADERS
soundManager*& gpSoundManager = get_global_var_ref(0x699414, soundManager*);
const uint8_t* giTerrainToMusicTrack = get_global_var_ref(0x678330, const uint8_t*);
#endif