/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xfe, 0xaa, 0x0a, 0x2a, 0x9f, 0xff, 0xff, 0xff, 0xfa, 0xea, 0xaa, 0xae, 0xba, 0xff, 0xff,
        0xfb, 0xff, 0xf0, 0xf1, 0x55, 0x05, 0x15, 0x47, 0xff, 0xff, 0xff, 0xf5, 0xd5, 0x55, 0x5f,
        0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xa4, 0xaa, 0x8a, 0x8a, 0xa1, 0xff, 0xff, 0xfb, 0xea,
        0xaa, 0xaa, 0xbe, 0xbf, 0xef, 0xfb, 0xfb, 0xff, 0xf0, 0x54, 0x55, 0x05, 0x45, 0x54, 0xff,
        0xff, 0x7d, 0x55, 0xd5, 0x75, 0x7f, 0x7f, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xae, 0x2a, 0x82,
        0xa0, 0xaa, 0x3f, 0xff, 0xfe, 0xaa, 0xea, 0xbb, 0xfe, 0xbf, 0xff, 0xfb, 0xfb, 0xfe, 0xf0,
        0x5f, 0x55, 0x01, 0x50, 0x54, 0x1f, 0xff, 0x7f, 0x55, 0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xff,
        0xfd, 0xfd, 0xf0, 0x2f, 0xff, 0x20, 0x28, 0x00, 0x0f, 0xff, 0xae, 0xaa, 0xaa, 0xbf, 0xff,
        0xff, 0xeb, 0xfb, 0xff, 0xff, 0xf0, 0x0e, 0x01, 0x50, 0x14, 0x00, 0x3f, 0xff, 0x57, 0x55,
        0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xfd, 0xff, 0xfd, 0xf0, 0x1e, 0x01, 0xa8, 0x0a, 0x00, 0xff,
        0xff, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xaf, 0xfb, 0xff, 0xff, 0xf0, 0x1f, 0xf9, 0x50,
        0x01, 0x03, 0xff, 0xff, 0x57, 0x55, 0xd5, 0x7d, 0xff, 0x7f, 0xdf, 0xfd, 0xff, 0xfd, 0xf0,
        0x9f, 0xf9, 0xa8, 0x00, 0x8f, 0xff, 0xfe, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xfd, 0xbf, 0xfb,
        0xff, 0xfb, 0xf0, 0x5a, 0x01, 0x54, 0x00, 0x3f, 0xff, 0xff, 0x7f, 0x5d, 0xd5, 0xfd, 0xff,
        0xfd, 0xdf, 0xfd, 0xff, 0xfd, 0xf0, 0x8e, 0x01, 0xaa, 0x00, 0x7f, 0xff, 0xfe, 0xbf, 0xae,
        0xef, 0xff, 0xff, 0xfb, 0xef, 0xfb, 0xff, 0xfa, 0xf0, 0xcf, 0xff, 0xf4, 0x00, 0xf7, 0xff,
        0xff, 0x7f, 0x5d, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xff, 0xff, 0xfd, 0xf0, 0xae, 0x01, 0x2a,
        0x00, 0xfb, 0xff, 0xff, 0xbf, 0xae, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfb, 0xff, 0xfa, 0xf0,
        0xde, 0x01, 0x35, 0x01, 0xfb, 0xff, 0xff, 0x7f, 0x5d, 0xfd, 0xbf, 0xff, 0xff, 0xdf, 0xfd,
        0xff, 0xdd, 0xf0, 0xa7, 0xff, 0xea, 0x81, 0xfc, 0xff, 0x7f, 0xbe, 0xbe, 0xff, 0xe3, 0xff,
        0xff, 0xef, 0xff, 0xf9, 0x3e, 0xf0, 0x56, 0x01, 0x55, 0x41, 0xff, 0x7f, 0xff, 0xff, 0xfd,
        0xfd, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x7d, 0xf0, 0xa6, 0x01, 0x2a, 0x88, 0xfe, 0xff,
        0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xfc, 0xfe, 0xf0, 0x52, 0x79, 0x15,
        0x44, 0x7d, 0xff, 0xff, 0xfd, 0x7f, 0xbd, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xf8, 0xfd, 0xf0,
        0x22, 0x69, 0x2a, 0xa0, 0x3d, 0xff, 0xff, 0xfa, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xe2, 0x48,
        0xfa, 0xff, 0xf0, 0x42, 0x59, 0x15, 0x54, 0x1b, 0xff, 0xff, 0xf7, 0xff, 0xbd, 0xf7, 0xff,
        0xff, 0x95, 0x55, 0x37, 0x7d, 0xf0, 0x02, 0x69, 0x0a, 0xa2, 0x1f, 0xfe, 0xff, 0xee, 0xff,
        0xff, 0xfc, 0xff, 0xff, 0x2a, 0x4a, 0x9f, 0xff, 0xf0, 0x03, 0xff, 0x55, 0x11, 0x4f, 0xff,
        0xff, 0x55, 0x7f, 0xfd, 0xff, 0x00, 0xfc, 0x55, 0x55, 0x4f, 0xff, 0xf0, 0x02, 0x01, 0xaa,
        0x88, 0x8f, 0xde, 0xff, 0xaa, 0xbf, 0xfe, 0xff, 0xff, 0x00, 0xa8, 0x02, 0xa7, 0xff, 0xf0,
        0x02, 0x01, 0x55, 0x55, 0x47, 0xff, 0x7f, 0xd5, 0x5f, 0xff, 0xff, 0xff, 0xc8, 0x47, 0x5c,
        0x53, 0xff, 0xf0, 0x82, 0x49, 0xaa, 0x8a, 0xa7, 0xfe, 0xff, 0xea, 0xbf, 0xff, 0xff, 0xff,
        0xb0, 0x3f, 0x5f, 0x89, 0xff, 0xf0, 0xc2, 0x49, 0x55, 0x45, 0x53, 0xff, 0xff, 0xf5, 0x5f,
        0xff, 0xff, 0xfe, 0x70, 0x7f, 0x5f, 0xe5, 0xff, 0xf0, 0xe2, 0x41, 0xa2, 0xa2, 0xab, 0xfe,
        0xfb, 0xfa, 0xaf, 0xef, 0xff, 0xf9, 0xe2, 0xbf, 0x5f, 0xfa, 0xff, 0xf0, 0xe2, 0x41, 0x51,
        0x51, 0x51, 0xff, 0x77, 0xfd, 0x57, 0xf9, 0xff, 0xe7, 0x85, 0x7f, 0x5f, 0xfc, 0xff, 0xf0,
        0xe3, 0xff, 0xf2, 0xa0, 0xa8, 0xff, 0xfb, 0xbe, 0xaf, 0xfe, 0x1e, 0x80, 0x6a, 0x80, 0x00,
        0x7e, 0xff, 0xb0, 0xe2, 0x60, 0x11, 0x50, 0x54, 0x7f, 0xff, 0xfd, 0x57, 0xff, 0xe0, 0x1f,
        0xc4, 0x15, 0x55, 0x06, 0x7f, 0x70, 0xee, 0x60, 0x18, 0xa8, 0x2a, 0x1f, 0xff, 0xfe, 0xaf,
        0xff, 0xe8, 0xf0, 0x00, 0x0a, 0x4a, 0xa8, 0x7f, 0xf0, 0xdf, 0xff, 0xf1, 0x54, 0x15, 0x43,
        0xff, 0xff, 0x5f, 0xff, 0xe8, 0x7b, 0xc0, 0x05, 0x55, 0x55, 0x7f, 0x70, 0xff, 0x81, 0x28,
        0xaa, 0x0a, 0xa1, 0xff, 0xfe, 0xbf, 0xf7, 0xea, 0x09, 0xe0, 0x0a, 0x4a, 0xaa, 0x7f, 0xf0,
        0xff, 0x81, 0x50, 0x54, 0x05, 0x54, 0x7f, 0xff, 0x7f, 0xfc, 0xe8, 0x4b, 0xc0, 0x05, 0x55,
        0x55, 0x7f, 0x70, 0xfe, 0x7f, 0x28, 0xaa, 0x00, 0xa8, 0xff, 0xfe, 0xbf, 0xff, 0x0a, 0xf0,
        0x00, 0x02, 0x4a, 0xa8, 0x7e, 0xb0, 0xfe, 0x7f, 0x14, 0x55, 0x00, 0x03, 0xff, 0xf7, 0x5f,
        0x7f, 0xe0, 0x1f, 0xc4, 0x01, 0x55, 0x06, 0x7f, 0x70, 0xff, 0x81, 0x08, 0x2a, 0x80, 0x07,
        0xff, 0xf6, 0xaf, 0xff, 0xfe, 0x80, 0x6a, 0x80, 0x00, 0x7e, 0xff, 0xb0, 0x7f, 0x81, 0x14,
        0x55, 0x40, 0x0f, 0xff, 0xed, 0x57, 0x7f, 0xff, 0xe7, 0x85, 0x55, 0x5f, 0xfc, 0xff, 0x70,
        0xbf, 0xff, 0xe8, 0x2a, 0xa8, 0x1f, 0xff, 0xf6, 0xae, 0xff, 0xff, 0xf9, 0xea, 0xaa, 0x5f,
        0xfa, 0xff, 0xf0, 0x5e, 0x01, 0x24, 0x15, 0x54, 0x3f, 0xff, 0xf5, 0x57, 0x7f, 0xfb, 0xfe,
        0xf0, 0x55, 0x5f, 0xe5, 0xff, 0x70, 0xbe, 0x01, 0x22, 0x2a, 0xa0, 0xff, 0xff, 0xba, 0xae,
        0xff, 0xfe, 0x1f, 0x30, 0x2a, 0x0f, 0x89, 0xbf, 0xf0, 0x5f, 0xff, 0xe5, 0x15, 0x41, 0xff,
        0xff, 0xd5, 0x57, 0x7f, 0xff, 0xe0, 0x48, 0x05, 0x54, 0x53, 0xff, 0xf0, 0xbe, 0x01, 0xa2,
        0x02, 0x03, 0xff, 0xff, 0xea, 0xaa, 0xbf, 0xff, 0xff, 0x80, 0x00, 0x02, 0xa7, 0xbf, 0xf0,
        0x5e, 0x01, 0x41, 0x00, 0x06, 0xfd, 0xff, 0xd5, 0x55, 0x5f, 0xff, 0xff, 0xfc, 0x00, 0x40,
        0x4f, 0xff, 0xf0, 0xbe, 0x49, 0x20, 0x80, 0x0f, 0x7f, 0xfe, 0xea, 0xaa, 0xbe, 0xff, 0xff,
        0xff, 0x00, 0x00, 0x1f, 0xbf, 0xf0, 0x7e, 0x49, 0x50, 0x00, 0x0f, 0x7f, 0xff, 0xd5, 0x55,
        0x5f, 0x83, 0xff, 0xff, 0x80, 0x40, 0x3f, 0xff, 0xf0, 0xfe, 0x41, 0x28, 0x00, 0x0f, 0xbf,
        0xff, 0xeb, 0xaa, 0xbf, 0xfc, 0x00, 0x03, 0xe0, 0x00, 0xff, 0xbf, 0xf0, 0xfe, 0x41, 0x14,
        0x00, 0x1f, 0xdf, 0xff, 0xd5, 0xd5, 0x57, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xdf, 0xf0,
        0xff, 0xff, 0x08, 0x00, 0x1f, 0x3f, 0xdf, 0xeb, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xbf, 0xf0, 0xfe, 0x01, 0x14, 0x40, 0x3e, 0xff, 0xbf, 0xf5, 0x55, 0x57, 0xdf, 0xff,
        0xf9, 0xff, 0xff, 0xff, 0xdf, 0xf0, 0xfe, 0x01, 0x0a, 0x20, 0x3f, 0xff, 0xdf, 0xfa, 0xaa,
        0xab, 0xbf, 0xff, 0xf3, 0xff, 0xff, 0xdf, 0xbf, 0xf0, 0xde, 0x7f, 0x05, 0x10, 0x7f, 0xff,
        0xff, 0xfd, 0x55, 0x55, 0xdf, 0xff, 0xe4, 0xff, 0xff, 0xbf, 0x7f, 0xf0, 0xee, 0x7e, 0x02,
        0x88, 0x7f, 0xff, 0xff, 0xfa, 0xaa, 0xab, 0xbf, 0xff, 0xe3, 0xff, 0xbf, 0xbf, 0xbf, 0xf0,
        0xde, 0x05, 0x41, 0x54, 0x3f, 0xff, 0xff, 0xdd, 0x55, 0x55, 0xff, 0xff, 0xd7, 0xff, 0xdf,
        0x7f, 0x7f, 0xf0, 0xee, 0x06, 0xa2, 0xaa, 0x3f, 0xff, 0xff, 0xbe, 0xaa, 0xab, 0xbf, 0xff,
        0xf7, 0xff, 0xbf, 0x3f, 0xbf, 0xf0, 0xde, 0x7d, 0x55, 0x55, 0x1f, 0xfb, 0xff, 0xff, 0x55,
        0x55, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xbf, 0xff, 0xf0, 0xfe, 0x7f, 0xaa, 0xaa, 0x8f, 0xff,
        0xff, 0xba, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0xbf, 0xf0, 0xfe, 0x01, 0x55,
        0x55, 0x47, 0xff, 0xff, 0xf7, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
        0xfe, 0x01, 0xaa, 0xaa, 0xa1, 0xff, 0xff, 0xbf, 0xea, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf,
        0xff, 0xff, 0xf0, 0xff, 0xff, 0x55, 0x55, 0x54, 0xff, 0xff, 0x5f, 0xf5, 0x57, 0xff, 0xfd,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xda, 0xaa, 0xaa, 0xaa, 0x7f, 0xff, 0xbf, 0xfa,
        0xab, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x9d, 0x55, 0x55, 0x00, 0xff,
        0xff, 0x7f, 0xfd, 0x57, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xbf, 0xa2,
        0xa8, 0x03, 0xff, 0xfb, 0xbf, 0xfa, 0xaa, 0xbf, 0xfb, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0,
        0xff, 0x3f, 0xc0, 0x00, 0x07, 0xff, 0xff, 0x5f, 0xfd, 0x57, 0x57, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf0, 0xff, 0x3f, 0x80, 0x00, 0x0f, 0xff, 0xfb, 0xaf, 0xfe, 0xae, 0xaa, 0xfb,
        0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0, 0xf6, 0x7f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0x57, 0xfd,
        0x55, 0x55, 0x77, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf0,
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x00, 0x00, 0x00, 0x90, 0x00, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xa0, 0x00, 0x00,
        0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x10, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf4, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0x10, 0x80, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x01, 0xfe, 0x03, 0xe0, 0x0f, 0x9e, 0x01, 0x90,
        0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0x1f,
        0x9e, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x7f,
        0x8f, 0xe0, 0x1f, 0xbe, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
        0x00, 0x00, 0x3f, 0xcf, 0xf0, 0x1f, 0xbc, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xcf, 0xf0, 0x3f, 0xbc, 0x00, 0x90, 0x80, 0x7f, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x1f, 0xe7, 0xf0, 0x7f, 0x3c, 0x00, 0x90,
        0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x0f, 0xe7, 0xf8, 0x7f,
        0x78, 0x01, 0xb0, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x00, 0x00, 0x00, 0x07,
        0xf3, 0xf8, 0x3f, 0x78, 0x03, 0xd0, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xc0, 0x00,
        0x00, 0x00, 0x07, 0xfb, 0xf8, 0x3f, 0xf8, 0x0f, 0x90, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff,
        0xec, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfd, 0xfc, 0x3f, 0xf8, 0x0f, 0x10, 0xc0, 0x1e, 0xff,
        0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x3f, 0xf0, 0x0e, 0x10,
        0xc0, 0x0c, 0x27, 0xff, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x7f,
        0xf0, 0x1e, 0x30, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x7f, 0xfe, 0x7f, 0xf3, 0xfc, 0x50, 0xe0, 0x00, 0x3f, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x7f, 0xfe, 0x7f, 0xf7, 0xf8, 0x90, 0xe0, 0x00, 0x7f, 0xfe, 0xb0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x7f, 0xe7, 0xf1, 0x90, 0xe0, 0x00, 0x7f,
        0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x7f, 0xef, 0xe3, 0x90,
        0xf0, 0x00, 0x7f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7f,
        0xff, 0xe7, 0x90, 0xb0, 0x10, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0xff, 0xbf, 0xff, 0xcf, 0x90, 0xf0, 0x30, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xff, 0xf9, 0xff, 0x9f, 0x90, 0xb0, 0x30, 0xff, 0xff, 0xff, 0xf2,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf6, 0xff, 0x3e, 0x90, 0xf8, 0x70, 0xff,
        0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf6, 0xfe, 0x7c, 0x90,
        0xf8, 0x78, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf9,
        0xfe, 0xf8, 0x90, 0xa8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x03, 0xff, 0xfd, 0xf3, 0x90, 0xdc, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfb, 0xef, 0x90, 0xf5, 0xac, 0xff, 0xff, 0xff, 0xfe,
        0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x90, 0xff, 0xd6, 0x7f,
        0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x90,
        0xff, 0xfa, 0x7f, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
        0xff, 0xff, 0x90, 0xdd, 0xff, 0x7f, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0xea, 0xbf, 0x3f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x10, 0xff, 0x4f, 0xbf, 0xf5, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x10, 0xff, 0xff, 0x9f,
        0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0,
        0xff, 0xb0, 0xcb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
        0xff, 0xff, 0x90, 0xcd, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x1f, 0xff, 0xff, 0x90, 0xb2, 0xe0, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0x90, 0xff, 0xc0, 0x3f, 0x40, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x90, 0xfe, 0xc0, 0x7f,
        0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0xff, 0xff, 0x7c, 0x90,
        0xfd, 0x80, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc3, 0xff,
        0xff, 0xb8, 0x90, 0xff, 0x80, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3f, 0x87, 0xff, 0xff, 0xc8, 0x90, 0x9f, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x7f, 0x1f, 0xff, 0xff, 0xe0, 0x90, 0x86, 0x01, 0xff, 0xff, 0xd0, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xfe, 0x3f, 0xff, 0xff, 0xe0, 0x90, 0x80, 0x01, 0xff,
        0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x83, 0xfe, 0x7f, 0xff, 0xff, 0xf0, 0x90,
        0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xc7, 0xee, 0x7f, 0xff,
        0xff, 0xf8, 0x90, 0x80, 0x1a, 0xbf, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x98, 0xff, 0xff,
        0xc6, 0x7f, 0xff, 0xff, 0xfc, 0x90, 0x80, 0x3f, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
        0xf1, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xfe, 0x90, 0x80, 0x3f, 0xf8, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x07, 0xe3, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0x90, 0x80, 0x7f, 0xfe,
        0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc7, 0xff, 0xfe, 0x18, 0xff, 0xef, 0xff, 0xff, 0x90,
        0x80, 0x7f, 0xff, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0xff, 0xfc, 0x7f, 0xff, 0xef,
        0xfd, 0xff, 0x90, 0x80, 0xff, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x9f, 0xff, 0xf8,
        0xff, 0xff, 0xef, 0xfc, 0xf7, 0x90, 0x80, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x3f,
        0x1f, 0xff, 0xf1, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x90, 0x80, 0xff, 0xff, 0xff, 0xf4, 0x00,
        0x00, 0x00, 0x7f, 0x3f, 0xff, 0xe3, 0xff, 0xff, 0xcf, 0xfe, 0x60, 0x90, 0x81, 0xff, 0xff,
        0xff, 0xfe, 0x80, 0x00, 0x00, 0x7f, 0x3f, 0xff, 0xc7, 0xff, 0xff, 0xdf, 0xfe, 0x40, 0x90,
        0x81, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x01, 0xfe, 0x3f, 0xff, 0xcf, 0xbf, 0xff, 0xdf,
        0xfe, 0x00, 0x90, 0x81, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x07, 0xfe, 0x7f, 0xff, 0x8f,
        0x7f, 0xff, 0x9f, 0xfe, 0x00, 0x90, 0x80, 0xff, 0xff, 0xff, 0xe6, 0x00, 0x00, 0x1f, 0xfe,
        0x7f, 0xff, 0x1e, 0xff, 0xff, 0x91, 0xfe, 0x00, 0x90, 0x80, 0xff, 0xff, 0xfe, 0xc0, 0x00,
        0x00, 0x3f, 0xfc, 0x7f, 0xfe, 0x3c, 0xff, 0xff, 0x81, 0xff, 0x00, 0x90, 0x80, 0x7f, 0xff,
        0xec, 0x00, 0x00, 0x3c, 0xff, 0xf8, 0xff, 0xfc, 0x79, 0xfd, 0xff, 0x80, 0xff, 0x00, 0x90,
        0x80, 0x27, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xff, 0xf9, 0xff, 0xfc, 0xf3, 0xfb, 0xff, 0x00,
        0xff, 0x00, 0x90, 0x80, 0x5f, 0xff, 0xd8, 0x00, 0x00, 0xff, 0xff, 0xf1, 0xff, 0xc8, 0xe7,
        0xf3, 0xff, 0x00, 0x7f, 0x00, 0x90, 0x80, 0xff, 0xff, 0xfd, 0x80, 0x01, 0xff, 0xff, 0xe3,
        0xff, 0x81, 0xcf, 0xf7, 0xff, 0x00, 0x7f, 0x00, 0x90, 0x80, 0xff, 0xff, 0xff, 0xd8, 0x03,
        0xff, 0xff, 0x87, 0xff, 0x03, 0x8f, 0xe7, 0xff, 0x00, 0x3f, 0x81, 0x90, 0x81, 0xff, 0xff,
        0xff, 0xfe, 0x83, 0xff, 0xfe, 0x0f, 0xfe, 0x3f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x10,
        0x80, 0x00, 0x00, 0x00, 0x2f, 0xc6, 0x00, 0x00, 0x38, 0x00, 0x60, 0x00, 0x48, 0x00, 0x00,
        0x00, 0x00, 0x10, 0xc0, 0x00, 0x00, 0x00, 0x17, 0xf4, 0x00, 0x00, 0xe0, 0x00, 0xc0, 0x00,
        0x88, 0x00, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};

#ifndef LV_ATTRIBUTE_IMG_NUT
#define LV_ATTRIBUTE_IMG_NUT
#endif

/* Nut, large half of face in profile */
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NUT uint8_t NUT_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
  0xf5, 0xaa, 0xa5, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 
  0xda, 0x48, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 
  0xef, 0xaa, 0x90, 0xa0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xc0, 0x00, 
  0xfa, 0x69, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xbb, 0xc0, 0x00, 
  0xdb, 0xaa, 0xa2, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xc0, 0x00, 
  0xed, 0xf5, 0x41, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xdd, 0x80, 0x00, 
  0xaa, 0x56, 0xa8, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xff, 0xc0, 0x00, 
  0x55, 0x29, 0xaa, 0x12, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7b, 0xda, 0x80, 0x00, 
  0x55, 0xac, 0xaa, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x80, 0x00, 
  0xaa, 0xa5, 0x55, 0x10, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xfd, 0x77, 0x00, 0x00, 
  0xa9, 0x55, 0x4a, 0xc5, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xef, 0xbd, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xea, 0x00, 0x00, 
  0x55, 0x54, 0xd5, 0xa6, 0x92, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xfd, 0x7f, 0x00, 0x00, 
  0x4a, 0xaa, 0x52, 0xa5, 0x48, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xdf, 0xd4, 0x00, 0x00, 
  0x55, 0x56, 0xba, 0xb3, 0x55, 0x2a, 0xd2, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xfb, 0x7e, 0x00, 0x00, 
  0xaa, 0xdb, 0x54, 0xd2, 0x92, 0x95, 0x36, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x11, 0x67, 0xef, 0xd0, 0x00, 0x00, 
  0x6d, 0x6b, 0x4e, 0x71, 0xca, 0xdb, 0x5a, 0xab, 0x40, 0x00, 0x00, 0x00, 0x01, 0x56, 0xfa, 0xfe, 0x10, 0x00, 
  0xb6, 0xdd, 0xdb, 0x5b, 0x53, 0x36, 0xa5, 0x54, 0xbf, 0xa0, 0x00, 0x00, 0x8a, 0xaf, 0xf7, 0x50, 0x00, 0x00, 
  0xd6, 0xad, 0x65, 0x29, 0x59, 0x9a, 0x95, 0x24, 0xad, 0xfa, 0x00, 0x00, 0x00, 0x2f, 0xbb, 0xdc, 0x00, 0x00, 
  0xbb, 0xd7, 0xd7, 0x79, 0xca, 0x25, 0x44, 0xaa, 0xbb, 0x5d, 0x00, 0x00, 0x2b, 0x5f, 0xfe, 0xe0, 0x00, 0x00, 
  0xdd, 0x75, 0x73, 0x18, 0xd3, 0x29, 0x2a, 0xa5, 0x5f, 0xef, 0xc0, 0x00, 0x09, 0x4d, 0xb6, 0xb8, 0x00, 0x00, 
  0xb7, 0xad, 0xaa, 0xd4, 0x92, 0x14, 0xa5, 0x2a, 0xed, 0xfa, 0xa0, 0x12, 0x54, 0x9f, 0xfd, 0xc0, 0x00, 0x00, 
  0xba, 0xb6, 0xfd, 0x4c, 0x91, 0x22, 0xaa, 0x95, 0x6f, 0xff, 0xf0, 0x00, 0x4a, 0xaf, 0xed, 0x70, 0x08, 0x00, 
  0xdb, 0xeb, 0x55, 0xd8, 0x8a, 0x2a, 0x55, 0x56, 0xba, 0xb6, 0xd0, 0x08, 0xaa, 0x9d, 0xbb, 0x40, 0x00, 0x00, 
  0xdd, 0x7d, 0x6c, 0xcc, 0x41, 0x0a, 0xaa, 0xaa, 0x97, 0xff, 0xfe, 0x08, 0x2a, 0xbf, 0xef, 0x40, 0x00, 0x00, 
  0xf7, 0x55, 0xb6, 0xca, 0x12, 0x52, 0xaa, 0xaa, 0xaf, 0xaa, 0xd4, 0xb1, 0x55, 0x7f, 0xba, 0x80, 0x00, 0x00, 
  0xbb, 0x7f, 0x5a, 0x60, 0x92, 0x09, 0x5a, 0xaa, 0xd5, 0xf7, 0xf6, 0x1a, 0x4a, 0xbd, 0xfe, 0xc0, 0x00, 0x00, 
  0xef, 0xaa, 0xb6, 0x4a, 0x02, 0xaa, 0xaa, 0x57, 0x57, 0xbd, 0x5a, 0xb1, 0x36, 0xfe, 0xeb, 0x00, 0x00, 0x00, 
  0xfa, 0xff, 0xb7, 0x20, 0x92, 0x4a, 0xb5, 0x5e, 0x91, 0xd7, 0x5a, 0xbc, 0x96, 0xf7, 0x7d, 0x00, 0x10, 0x00, 
  0xdf, 0x55, 0x5a, 0x94, 0x02, 0x25, 0xaa, 0xf5, 0x0b, 0x5b, 0xf5, 0x6a, 0x6f, 0xdf, 0xf4, 0x04, 0x00, 0x00, 
  0xf5, 0xdd, 0xcd, 0x84, 0x91, 0x2a, 0xd2, 0xbc, 0x41, 0x48, 0x5d, 0x7d, 0x2d, 0xea, 0xb6, 0x00, 0x00, 0x00, 
  0xbf, 0x76, 0xa5, 0x22, 0x04, 0x55, 0x56, 0xf5, 0x08, 0x85, 0x56, 0xaa, 0xdf, 0xff, 0xe8, 0x00, 0x00, 0x00, 
  0xef, 0x5b, 0xb2, 0x92, 0x52, 0x4d, 0x93, 0xf8, 0x02, 0xa2, 0x52, 0xfa, 0x57, 0xbd, 0x78, 0x00, 0x00, 0x00, 
  0xfb, 0xd5, 0xa9, 0x42, 0x04, 0x36, 0x5d, 0xd0, 0x97, 0x09, 0x2d, 0x55, 0x7d, 0x6e, 0xd0, 0x00, 0x08, 0x00, 
  0xdd, 0xd6, 0xa4, 0x92, 0x43, 0x1b, 0x47, 0xe8, 0x7f, 0x40, 0xa9, 0xba, 0xad, 0xf6, 0xd8, 0x00, 0x00, 0x00, 
  0xfe, 0xd9, 0xaa, 0x40, 0x54, 0x6a, 0x5d, 0xd1, 0xe1, 0x0a, 0xb6, 0x4d, 0x7b, 0xfe, 0xa0, 0x01, 0x00, 0x00, 
  0xb6, 0xee, 0xa2, 0x4a, 0x03, 0x2d, 0x6f, 0xc9, 0xa0, 0x89, 0x32, 0x6d, 0x57, 0x7f, 0xb0, 0x00, 0x00, 0x00, 
  0xef, 0x29, 0x4a, 0x01, 0x44, 0xaa, 0xbf, 0xa3, 0x82, 0x25, 0x5b, 0x16, 0xdf, 0xea, 0xc0, 0x00, 0x00, 0x00, 
  0xe9, 0xaa, 0x52, 0xa8, 0x52, 0x2b, 0x57, 0xab, 0xc5, 0x0a, 0xa9, 0xab, 0x5b, 0xff, 0x60, 0x80, 0x00, 0x00, 
  0xff, 0xd5, 0x09, 0x01, 0x04, 0xad, 0xff, 0xcf, 0x24, 0x55, 0x56, 0x56, 0xf7, 0xfb, 0x40, 0x00, 0x08, 0x00, 
  0xaa, 0xd2, 0xa4, 0xa8, 0x20, 0x15, 0xaf, 0xa7, 0xd6, 0x36, 0xab, 0x5a, 0x5d, 0xff, 0xa0, 0x00, 0x00, 0x00, 
  0xfd, 0xaa, 0x95, 0x00, 0x44, 0x8e, 0xff, 0x9f, 0x29, 0x55, 0x54, 0xaa, 0xef, 0xfa, 0x80, 0x00, 0x00, 0x00, 
  0x4d, 0xaa, 0x49, 0x44, 0x00, 0xa3, 0x7b, 0xaf, 0xfd, 0x2a, 0xa3, 0x55, 0x7e, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xea, 0xca, 0x94, 0x00, 0x2a, 0x2d, 0xef, 0xaf, 0xf0, 0x90, 0x15, 0x4b, 0xd7, 0xfe, 0x80, 0x04, 0x00, 0x00, 
  0x6a, 0xa2, 0x12, 0xa2, 0x09, 0xb5, 0x7f, 0xdf, 0xfe, 0x55, 0x45, 0x52, 0xfb, 0x6f, 0xc0, 0x00, 0x00, 0x00, 
  0xdd, 0x54, 0x88, 0x00, 0x55, 0xef, 0xfb, 0x2e, 0xe9, 0x08, 0xaa, 0xaf, 0x7e, 0xdb, 0x40, 0x00, 0x00, 0x00, 
  0x6a, 0xa2, 0x45, 0x20, 0x15, 0x7a, 0xbf, 0x5f, 0x75, 0xee, 0xaa, 0x55, 0x6f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x95, 0x55, 0x50, 0x01, 0x75, 0xef, 0xfd, 0x5d, 0xa5, 0x7f, 0xab, 0xaf, 0xfe, 0xab, 0x40, 0x00, 0x20, 0x00, 
  0xd4, 0x90, 0x04, 0x00, 0x2b, 0x7e, 0xde, 0xae, 0xb5, 0xef, 0xfa, 0xf5, 0xff, 0xfb, 0xa0, 0x00, 0x00, 0x00, 
  0x52, 0xa4, 0xa1, 0x11, 0x37, 0xb7, 0xfe, 0x9f, 0xcb, 0xff, 0xd7, 0x2f, 0xdf, 0xdd, 0x40, 0x00, 0x00, 0x00, 
  0xd9, 0x24, 0x08, 0x00, 0x95, 0xd5, 0x76, 0xef, 0x6a, 0xff, 0xfb, 0xeb, 0xef, 0xfd, 0xe0, 0x00, 0x00, 0x00, 
  0x64, 0x90, 0x91, 0x08, 0x53, 0x2b, 0xdf, 0xbf, 0xab, 0xb6, 0xfd, 0x5e, 0xbd, 0xae, 0x80, 0x00, 0x00, 0x00, 
  0x5a, 0x54, 0x00, 0x02, 0x19, 0xaa, 0xff, 0xfc, 0xad, 0xdb, 0x45, 0x5f, 0x7d, 0xf7, 0xe0, 0x00, 0x00, 0x00, 
  0x95, 0x49, 0x10, 0x00, 0xa2, 0x55, 0x77, 0xf0, 0x56, 0xb5, 0x5d, 0xea, 0xdb, 0xfd, 0x40, 0x00, 0x00, 0x00, 
  0xa1, 0x48, 0x89, 0x10, 0x12, 0x25, 0x7f, 0xfa, 0x57, 0xd5, 0x6f, 0x6f, 0x6f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x5a, 0x24, 0x00, 0x00, 0x00, 0x95, 0xfd, 0xa1, 0x7f, 0x6f, 0xfe, 0xa9, 0xf7, 0xfe, 0x80, 0x00, 0x00, 0x00, 
  0x8a, 0x92, 0x40, 0x02, 0x00, 0x15, 0x6f, 0xfa, 0xb7, 0x7f, 0xb7, 0xbd, 0xfb, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x62, 0xa4, 0x00, 0x00, 0x00, 0xd5, 0xfb, 0x6d, 0xff, 0xdf, 0xff, 0xf7, 0x7e, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x2a, 0x52, 0x90, 0x20, 0x00, 0xb6, 0xad, 0xbf, 0xfd, 0xdd, 0xf7, 0xff, 0xab, 0x7f, 0xe0, 0x00, 0x00, 0x00, 
  0xa4, 0x94, 0x01, 0x02, 0x01, 0x2b, 0xea, 0x45, 0x57, 0xff, 0xbf, 0xf5, 0xb7, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x12, 0x4a, 0x80, 0x50, 0x41, 0x84, 0xb5, 0x51, 0x5b, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0xda, 0xa9, 0x00, 0x85, 0x0b, 0x75, 0x5a, 0xaa, 0xb7, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0xdf, 0x64, 0x00, 0x50, 0x0b, 0xdd, 0xaa, 0xaa, 0xdf, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0xff, 0xb5, 0x09, 0x55, 0x7e, 0xf6, 0xd6, 0xab, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0xff, 0xd4, 0x00, 0xb4, 0x63, 0xbb, 0x55, 0xed, 0xff, 0xff, 0xff, 0xf7, 0xf6, 0xaf, 0xc0, 0x00, 0x00, 0x00, 
  0x7f, 0xd5, 0x00, 0x5b, 0xde, 0xf6, 0xd5, 0x77, 0x7d, 0xff, 0xff, 0xff, 0x7b, 0xfb, 0xc0, 0x00, 0x00, 0x00, 
  0x02, 0x68, 0x05, 0x5f, 0xff, 0xbb, 0x55, 0xb7, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t NUT = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = NUT_map,
};

#ifndef LV_ATTRIBUTE_IMG_HANNAH
#define LV_ATTRIBUTE_IMG_HANNAH
#endif

/* Hannah, large half of face in profile */
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_HANNAH uint8_t hannah_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0xff, 0xb4, 0x92, 0x4a, 0xd4, 0x80, 0x00, 0x0a, 0xbf, 0xf5, 0xa0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xef, 0xf0, 
  0xfd, 0xb4, 0x92, 0xaa, 0xb6, 0x54, 0x00, 0x55, 0x7f, 0xfa, 0xe0, 0x00, 0x00, 0x00, 0x09, 0xff, 0xef, 0xd0, 
  0xb7, 0xd2, 0x04, 0x96, 0xaa, 0xa1, 0x02, 0x16, 0xff, 0xeb, 0x48, 0x00, 0x00, 0x00, 0x03, 0xff, 0xdf, 0xe0, 
  0xfe, 0xe8, 0xa2, 0x52, 0xdb, 0x29, 0x20, 0x15, 0x3f, 0xf5, 0xe0, 0x00, 0x40, 0x00, 0x41, 0xff, 0xd7, 0xf0, 
  0xdf, 0xa4, 0x09, 0x17, 0xaa, 0xc8, 0x41, 0x2b, 0x7f, 0xf6, 0xa0, 0x88, 0x04, 0x04, 0x0b, 0xff, 0xff, 0x50, 
  0xfb, 0xe2, 0x40, 0x91, 0xeb, 0x6a, 0x20, 0x0b, 0x6f, 0xfb, 0xe8, 0x02, 0x00, 0x80, 0x00, 0xff, 0xdb, 0xd0, 
  0xee, 0x90, 0x12, 0x4f, 0xd5, 0x54, 0x80, 0x55, 0xf3, 0xd6, 0xd0, 0x00, 0x40, 0x00, 0x8b, 0xff, 0xff, 0x70, 
  0x7f, 0x90, 0x00, 0x45, 0xd2, 0xda, 0x24, 0x0a, 0xbb, 0xfb, 0xe4, 0x40, 0x00, 0x08, 0x01, 0xff, 0x7f, 0x50, 
  0xfe, 0x84, 0x89, 0x2b, 0xe5, 0x2d, 0x40, 0x26, 0xdf, 0xea, 0xd0, 0x09, 0x12, 0x40, 0x45, 0xff, 0xff, 0xd0, 
  0xb7, 0x40, 0x40, 0x17, 0x64, 0xa5, 0x28, 0x13, 0x77, 0xee, 0xe2, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 
  0xfc, 0x00, 0x09, 0x4d, 0xa2, 0xad, 0x42, 0x0a, 0xdf, 0xf7, 0x88, 0x42, 0x40, 0x12, 0x13, 0xff, 0xbf, 0x50, 
  0xfe, 0x92, 0x40, 0x16, 0xd0, 0x2a, 0xa0, 0x85, 0x7f, 0xb5, 0xe0, 0x10, 0x09, 0x00, 0x00, 0x7f, 0xff, 0xa0, 
  0xe8, 0x00, 0x08, 0xad, 0x4a, 0x95, 0x48, 0x12, 0xdf, 0xd6, 0x89, 0x02, 0x40, 0x01, 0x12, 0xff, 0xff, 0xc0, 
  0xfa, 0x42, 0x44, 0x14, 0x60, 0x45, 0x60, 0x02, 0xd6, 0xf5, 0xa0, 0x00, 0x20, 0x20, 0x01, 0x7f, 0xff, 0xe0, 
  0xf4, 0x10, 0x01, 0x50, 0x4a, 0x95, 0x90, 0x08, 0xb7, 0xad, 0x49, 0x24, 0x0a, 0x00, 0x88, 0xff, 0xfb, 0x10, 
  0xf2, 0x81, 0x28, 0x54, 0x60, 0x24, 0x4a, 0x02, 0x55, 0xb5, 0x48, 0x02, 0x81, 0x08, 0x02, 0x7f, 0xff, 0xe0, 
  0xe8, 0x00, 0x41, 0x39, 0x49, 0x50, 0x00, 0x04, 0xaf, 0x55, 0x02, 0x40, 0x20, 0x00, 0x89, 0xff, 0xff, 0x50, 
  0xf5, 0x48, 0x28, 0x94, 0x21, 0x10, 0x00, 0x02, 0x55, 0xd5, 0x50, 0x09, 0x08, 0x44, 0x04, 0xff, 0xfb, 0xb0, 
  0xe8, 0x01, 0x0a, 0x50, 0xc8, 0xa0, 0x04, 0x00, 0x96, 0x49, 0x25, 0x40, 0x42, 0x00, 0x93, 0xff, 0xfe, 0xe0, 
  0xea, 0xa0, 0xa1, 0x38, 0x60, 0xb0, 0x00, 0x00, 0x92, 0xa4, 0x80, 0x24, 0x21, 0x10, 0x00, 0xff, 0xfd, 0x30, 
  0xe8, 0x08, 0x2a, 0x62, 0x90, 0x40, 0x00, 0x00, 0x25, 0x29, 0x29, 0x01, 0x08, 0x44, 0x97, 0xff, 0xfe, 0xd0, 
  0xf5, 0x42, 0x89, 0x20, 0x55, 0x28, 0x00, 0x00, 0x10, 0x44, 0x08, 0x10, 0x82, 0x00, 0x01, 0xff, 0xfe, 0xd0, 
  0xd4, 0x90, 0x55, 0x60, 0xa0, 0xd0, 0x00, 0x00, 0x05, 0x22, 0x82, 0x84, 0x20, 0xa5, 0x57, 0xff, 0xfd, 0x60, 
  0xea, 0x4a, 0x52, 0xb0, 0x2a, 0x40, 0x00, 0x00, 0x01, 0x10, 0x50, 0x21, 0x14, 0x10, 0x11, 0xff, 0xfd, 0xb0, 
  0xe9, 0x11, 0x2a, 0xa1, 0x6a, 0xa0, 0x00, 0x00, 0x10, 0x44, 0x05, 0x08, 0x41, 0x25, 0x4f, 0xff, 0xf6, 0xd0, 
  0xf5, 0x49, 0x25, 0x78, 0x55, 0x48, 0x00, 0x00, 0x09, 0x12, 0xa0, 0x45, 0x09, 0x12, 0x22, 0xff, 0xfe, 0xd0, 
  0xe4, 0x92, 0x95, 0x42, 0xaa, 0x80, 0x00, 0x00, 0x02, 0x44, 0x0a, 0x10, 0x52, 0x49, 0x57, 0xff, 0xeb, 0xb0, 
  0xf2, 0x48, 0xa5, 0x70, 0xae, 0x40, 0x00, 0x00, 0x09, 0x50, 0xa0, 0x85, 0x12, 0x49, 0x29, 0xff, 0xfd, 0xd0, 
  0xea, 0xaa, 0x55, 0x60, 0x6b, 0x10, 0x00, 0x02, 0xa5, 0x2a, 0x0a, 0x20, 0x89, 0x24, 0x97, 0xff, 0xeb, 0x50, 
  0xfa, 0x95, 0x2a, 0xb4, 0x5a, 0x89, 0x00, 0x10, 0x95, 0x49, 0x41, 0x2a, 0x49, 0x15, 0x55, 0xff, 0xfd, 0xe0, 
  0xf4, 0xaa, 0xa5, 0x79, 0x6f, 0x20, 0x22, 0x45, 0x7f, 0xa4, 0x54, 0x01, 0x24, 0x44, 0xab, 0xff, 0xaf, 0x50, 
  0xfd, 0x55, 0x55, 0x5c, 0x35, 0x89, 0x12, 0x25, 0x5f, 0xf6, 0x81, 0x54, 0x92, 0x52, 0xaf, 0xff, 0xbb, 0xe0, 
  0xfe, 0xaa, 0xab, 0x7a, 0xaf, 0x42, 0x44, 0xab, 0xfd, 0xaa, 0xa8, 0x09, 0x25, 0x14, 0xab, 0xff, 0x6e, 0xb0, 
  0xff, 0x6e, 0xd5, 0x5c, 0xb5, 0xd1, 0x25, 0x5a, 0x5f, 0xfa, 0xa5, 0x49, 0x28, 0x92, 0x5f, 0xff, 0x77, 0xd0, 
  0xff, 0xb5, 0x55, 0xfa, 0x57, 0x6a, 0x55, 0x6a, 0xff, 0xde, 0xa8, 0x22, 0x45, 0x4a, 0xaf, 0xfd, 0xdd, 0xe0, 
  0xff, 0xdb, 0x7a, 0x5f, 0xb5, 0xe9, 0x56, 0xaa, 0x5f, 0xeb, 0xa5, 0x12, 0x52, 0x55, 0x6f, 0xfc, 0xef, 0x70, 
  0xff, 0xed, 0xad, 0xb7, 0xfa, 0xb6, 0xa9, 0x55, 0xbf, 0xfa, 0xd2, 0x49, 0x29, 0x2a, 0xbf, 0xf7, 0xfa, 0xe0, 
  0xff, 0xfd, 0x56, 0xad, 0xfe, 0xf5, 0x55, 0x24, 0xdf, 0xff, 0x72, 0x24, 0x8a, 0x95, 0xdf, 0xf5, 0x5f, 0x70, 
  0xff, 0xff, 0x55, 0x57, 0x7a, 0xaa, 0xa8, 0xab, 0x6f, 0xea, 0xd4, 0x92, 0xa4, 0xaa, 0xbf, 0xfb, 0xf7, 0xd0, 
  0xff, 0xff, 0xd5, 0x51, 0x7e, 0xb5, 0x65, 0x22, 0xbf, 0xfe, 0xf4, 0x8a, 0x52, 0xad, 0xff, 0xed, 0xba, 0xd0, 
  0xff, 0xff, 0xd5, 0x55, 0xb5, 0x4b, 0x49, 0x55, 0x5f, 0xf5, 0xb5, 0x25, 0x55, 0x56, 0xdf, 0xab, 0x6e, 0x80, 
  0xff, 0xff, 0xea, 0x94, 0x9d, 0x55, 0x49, 0x12, 0xdf, 0xfa, 0xf9, 0x52, 0x55, 0x6a, 0xfd, 0xad, 0x6a, 0x40, 
  0xff, 0xff, 0xfa, 0x4a, 0xa5, 0x55, 0x12, 0x4a, 0xbf, 0xf5, 0xb4, 0x95, 0x55, 0x5b, 0xfe, 0x92, 0xa8, 0x00, 
  0xff, 0xff, 0xfe, 0xa0, 0xb5, 0x54, 0x82, 0x25, 0x54, 0xfd, 0x7e, 0x55, 0x55, 0x6a, 0xd5, 0x48, 0xaa, 0x00, 
  0xff, 0xff, 0xff, 0x54, 0x2a, 0xaa, 0x28, 0x95, 0x5d, 0xf2, 0xf9, 0xaa, 0xaa, 0xaf, 0xd4, 0x02, 0xa0, 0xa0, 
  0xff, 0xff, 0xbf, 0xd5, 0x05, 0x51, 0x04, 0x8a, 0xae, 0xf4, 0x5c, 0xa5, 0x5b, 0x76, 0xd5, 0x41, 0x00, 0x00, 
  0xff, 0xfb, 0xff, 0xea, 0x52, 0x84, 0x40, 0x52, 0xbf, 0xfa, 0xbd, 0x5a, 0xad, 0xbf, 0xe0, 0x40, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xfd, 0x48, 0xa0, 0x0a, 0x12, 0x8f, 0xf4, 0xad, 0x55, 0x6d, 0xfb, 0xb4, 0x52, 0x22, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0x52, 0x4a, 0xa1, 0x44, 0xef, 0xd5, 0x5a, 0xaf, 0xb7, 0xfe, 0xa9, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xd5, 0x20, 0x04, 0x12, 0x57, 0xea, 0x56, 0xea, 0xff, 0xee, 0x84, 0x28, 0x00, 0x00, 
  0xff, 0xfb, 0xef, 0xef, 0xfa, 0x95, 0x29, 0x49, 0x2e, 0xa9, 0x7b, 0x7f, 0xfe, 0xf4, 0x21, 0x02, 0x42, 0x40, 
  0xfe, 0xff, 0xfd, 0xfa, 0xfa, 0xe8, 0x81, 0x24, 0x97, 0x55, 0x5f, 0xff, 0xff, 0x51, 0x14, 0x90, 0x10, 0x00, 
  0xff, 0xfe, 0xff, 0xf7, 0xb5, 0xf6, 0x54, 0x95, 0x55, 0x55, 0x7f, 0xff, 0xfa, 0x04, 0x40, 0x25, 0x01, 0x50, 
  0xff, 0xff, 0xff, 0xfd, 0xfd, 0x7f, 0xaa, 0xa4, 0x92, 0xab, 0xff, 0xfe, 0xac, 0x02, 0x01, 0x00, 0x81, 0x50, 
  0xff, 0xff, 0xff, 0xff, 0xbf, 0xfd, 0xd5, 0x52, 0x49, 0x4a, 0xdd, 0xa5, 0x10, 0x20, 0x48, 0x24, 0x05, 0x50, 
  0xde, 0xff, 0xff, 0xff, 0xff, 0xee, 0xba, 0xaa, 0x55, 0x52, 0xaa, 0xaa, 0x80, 0x08, 0x01, 0x00, 0x05, 0x50, 
  0xff, 0xff, 0x7e, 0xef, 0xfe, 0xb5, 0x4a, 0xaa, 0xa9, 0x2a, 0xa4, 0x21, 0x02, 0x20, 0x08, 0x52, 0x15, 0xa0, 
  0xff, 0xef, 0xef, 0xff, 0xff, 0xaa, 0xb5, 0x55, 0x54, 0xaa, 0xb5, 0x08, 0x91, 0x00, 0x82, 0x00, 0x15, 0x50, 
  0xff, 0xff, 0xff, 0xfd, 0xff, 0xd5, 0x55, 0x55, 0x4a, 0x95, 0xac, 0x00, 0x00, 0x08, 0x01, 0x51, 0x2a, 0xa0, 
  0xee, 0xfe, 0xff, 0xff, 0xff, 0xf6, 0xad, 0x6a, 0xaa, 0x84, 0xb5, 0x04, 0x48, 0x00, 0x48, 0x09, 0x25, 0x50, 
  0xff, 0xdf, 0xdd, 0xde, 0xdf, 0xea, 0xaa, 0xaa, 0xa0, 0x41, 0x68, 0x01, 0x01, 0x00, 0x05, 0x40, 0x95, 0x60, 
  0xff, 0xf7, 0xff, 0xf5, 0x6b, 0x7a, 0xa5, 0x55, 0x54, 0x01, 0x2a, 0x48, 0x80, 0x09, 0x20, 0x2a, 0x55, 0x50, 
  0xed, 0xfd, 0xff, 0xea, 0xbf, 0xd5, 0x12, 0x55, 0x28, 0x40, 0x80, 0x12, 0x10, 0x40, 0x8a, 0x81, 0x56, 0xd0, 
  0xff, 0x7f, 0xff, 0x68, 0xaa, 0xfc, 0x49, 0x44, 0x94, 0x00, 0x2a, 0x94, 0x00, 0x04, 0x40, 0x54, 0xaa, 0xd0, 
  0xff, 0xff, 0xf5, 0xab, 0x7f, 0xaa, 0x92, 0x29, 0x38, 0x50, 0x04, 0x92, 0x92, 0x21, 0x15, 0x09, 0x5f, 0x70, 
  0x6f, 0xff, 0xfd, 0x55, 0xad, 0xfe, 0x4a, 0x88, 0x9e, 0x02, 0x52, 0x12, 0x81, 0x08, 0x40, 0xa5, 0x55, 0xd0, 
  0xff, 0xff, 0xaa, 0xaa, 0xf7, 0xb7, 0x50, 0x52, 0xad, 0x54, 0x94, 0x88, 0x28, 0xa2, 0x15, 0x5a, 0xdb, 0x70, 
  0xff, 0xff, 0xd5, 0x5b, 0x5d, 0xfe, 0x88, 0x15, 0x75, 0x50, 0x42, 0x45, 0x05, 0x50, 0x10, 0x4a, 0xad, 0xd0, 
};

const lv_img_dsc_t hannah = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = hannah_map,
};

