// Copyright 2021 Nicolas Druoton (druotoni)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// layer name : must be 3 chars
#define LAYER_NAME_0 "ABC"
#define LAYER_NAME_1 "SYM"
#define LAYER_NAME_2 "MSE"
#define LAYER_NAME_3 "MED"
#define LAYER_NAME_4 "NUM"
#define LAYER_NAME_5 "SYM"
#define LAYER_NAME_6 "FUN"

enum layer_number { _BASE = 0, _NAV, _MOUSE, _MEDIA, _NUMBER, _SYMBOL, _FUNCTION };

void render_gears(void);
void render_layer_frame(gui_state_t t);
void update_layer_frame(layer_state_t state);
