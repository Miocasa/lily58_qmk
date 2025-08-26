// Copyright 2021 Nicolas Druoton (druotoni)
// Copyright 2012 Jun Wako <wakojun@gmail.com>
// Copyright 2015 Jack Humbert
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
// #define VIAL_UNLOCK_COMBO_ROWS {0, 0}
// #define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define HOLD_ON_OTHER_KEY_PRESS
#define OLED_DRIVER_ENABLE

// choose IS_LEFT or IS_RIGHT for compilation and flash firmware
// #define IS_LEFT 1
// #define IS_RIGHT 1

// logo glitch
#define WITH_GLITCH
// boot sequence
#define WITH_BOOT
#define USE_SERIAL_PD2

// #define IS_LEFT

// custom font
#ifdef OLED_FONT_H
#    undef OLED_FONT_H
#endif
#define OLED_FONT_H "navi_font.c"
#undef OLED_FONT_END
#define OLED_FONT_END 125
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
// more space
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION
// #define NO_ACTION_ONESHOT
// #define DISABLE_LEADER

// ???
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// small layer state
// #define LAYER_STATE_8BIT

// no debug or trace
#ifndef NO_DEBUG
#    define NO_DEBUG
#endif
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif
