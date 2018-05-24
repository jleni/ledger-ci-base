/*******************************************************************************
*   (c) 2018 ZondaX GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#pragma once
#include "inttypes.h"

// Based on ISO7816

#define APDU_CODE_OK                        0x9000
#define APDU_CODE_EXECUTION_ERROR           0x6400
#define APDU_CODE_EMPTY_BUFFER              0x6982
#define APDU_CODE_OUTPUT_BUFFER_TOO_SMALL   0x6983
#define APDU_CODE_COMMAND_NOT_ALLOWED       0x6986
#define APDU_CODE_INS_NOT_SUPPORTED         0x6D00
#define APDU_CODE_CLA_NOT_SUPPORTED         0x6E00
#define APDU_CODE_UNKNOWN                   0x6F00

inline void set_code(uint8_t *buffer, uint8_t offset, uint16_t value)
{
    *(buffer + offset) = (uint8_t)(value >> 8);
    *(buffer + offset + 1) = (uint8_t)(value & 0xFF);
}