// Copyright 2021 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
        L06, L05, L04, L03, L02, L01,           R01, R02, R03, R04, R05, R06,\
	L16, L15, L14, L13, L12, L11,           R11, R12, R13, R14, R15, R16,\
	L26, L25, L24, L23, L22, L21,           R21, R22, R23, R24, R25, R26,\
	L36, L35, L34, L33, L32, L31, L30, R30, R31, R32, R33, R34, R35, R36 \
	) \
	{ \
    { L06, L05, L04, L03, L02, L01, KC_NO  }, \
    { L16, L15, L14, L13, L12, L11, KC_NO  }, \
    { L26, L25, L24, L23, L22, L21, KC_NO  }, \
    { L36, L35, L34, L33, L32, L31, L30   }, \
    { KC_NO, R01, R02, R03, R04, R05, R06 }, \
    { KC_NO, R11, R12, R13, R14, R15, R16 }, \
    { KC_NO, R21, R22, R23, R24, R25, R26 }, \
    { R30,   R31, R32, R33, R34, R35, R36 }  \
}
