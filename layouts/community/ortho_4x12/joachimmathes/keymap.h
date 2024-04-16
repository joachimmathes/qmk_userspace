/* Copyright 2022 Joachim Mathes joachim_mathes@web.de @joachimmathes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include QMK_KEYBOARD_H

/* The variable argument is completely macro-expanded before it is inserted
 * into the macro expansion.
 * That is what we need here. Otherwise LAYOUT_split_3x5_3_to_ortho_4x12
 * will receive a single argument instead of 36.
 */
#define LAYOUT_split_3x5_3_to_ortho_4x12_wrapper(...) LAYOUT_split_3x5_3_to_ortho_4x12(__VA_ARGS__)
#define LAYOUT_split_3x5_3_to_ortho_4x12( \
    L00, L01, L02, L03, L04, R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, \
              L32, L33, L34, R30, R31, R32 \
    ) \
    LAYOUT_ortho_4x12( \
        KC_NO, L00, L01, L02, L03, L04, R00, R01, R02, R03, R04, KC_NO, \
        KC_NO, L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, KC_NO, \
        KC_NO, L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, KC_NO, \
        KC_NO, KC_NO, KC_NO, L32, L33, L34, R30, R31, R32, KC_NO, KC_NO, KC_NO \
        )
