/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
    const char SCENE_MODE_TEXT[] = "text";  \
    const char KEY_SMILEINFO_BYFACE_SUPPORTED[] = "smileinfo-byface-supported";  \
    const char KEY_CONTI_BURST_STATE[] = "contiburst-state";  \
    const char CONTI_BURST_CAPTURING[] = "contiburst-capturing";  \
    const char CONTI_BURST_CAPTURE_DONE[] = "contiburst-done";  \
    const char KEY_FORCE_USE_AUDIO_ENABLED[] = "forceuseaudio";  \
\

#define CAMERA_PARAMETERS_EXTRA_H \
    static char SCENE_MODE_TEXT[];  \
    static char KEY_SMILEINFO_BYFACE_SUPPORTED[];  \
    static char KEY_CONTI_BURST_STATE[];  \
    static char CONTI_BURST_CAPTURING[];  \
    static char CONTI_BURST_CAPTURE_DONE[];  \
    static char KEY_FORCE_USE_AUDIO_ENABLED[];  \
    \
