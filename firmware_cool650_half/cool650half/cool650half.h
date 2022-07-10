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
             R01, R02, R03, R04, R05, R06,\
	     R11, R12, R13, R14, R15, R16,\
	     R21, R22, R23, R24, R25, R26,\
	R30, R31, R32, R33, R34, R35, R36 \
	) \
	{ \
    { KC_NO, R01, R02, R03, R04, R05, R06 }, \
    { KC_NO, R11, R12, R13, R14, R15, R16 }, \
    { KC_NO, R21, R22, R23, R24, R25, R26 }, \
    { R30,   R31, R32, R33, R34, R35, R36 }  \
}
