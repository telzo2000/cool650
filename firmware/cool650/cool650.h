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
    L00, L01, L02, L03, L04, L05,           R01, R02, R03, R04, R05, R06,\
	L10, L11, L12, L13, L14, L15,           R11, R12, R13, R14, R15, R16,\
	L20, L21, L22, L23, L24, L25,           R21, R22, R23, R24, R25, R26,\
	L30, L31, L32, L33, L34, L35, L36, R30, R31, R32, R33, R34, R35, R36 \
	) \
	{ \
    { L00, L01, L02, L03, L04, L05, KC_NO }, \
    { L10, L11, L12, L13, L14, L15, KC_NO }, \
    { L20, L21, L22, L23, L24, L25, KC_NO }, \
    { L30, L31, L32, L33, L34, L35, L36   }, \
    { KC_NO, R01, R02, R03, R04, R05, R06 }, \
    { KC_NO, R11, R12, R13, R14, R15, R16 }, \
    { KC_NO, R21, R22, R23, R24, R25, R26 }, \
    { R30,   R31, R32, R33, R34, R35, R36 }  \
}
