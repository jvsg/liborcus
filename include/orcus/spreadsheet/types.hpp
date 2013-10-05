/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef ORCUS_SPREADSHEET_GLOBAL_HPP
#define ORCUS_SPREADSHEET_GLOBAL_HPP

#include "../env.hpp"

namespace orcus { namespace spreadsheet {

typedef int row_t;
typedef int col_t;
typedef int sheet_t;
typedef unsigned char color_elem_t;
typedef unsigned short col_width_t;
typedef unsigned short row_height_t;

ORCUS_DLLPUBLIC extern const col_width_t default_column_width;
ORCUS_DLLPUBLIC extern const row_height_t default_row_height;

enum border_direction_t
{
    border_top,
    border_bottom,
    border_left,
    border_right,
    border_diagonal
};

enum formula_grammar_t
{
    xlsx_2007,
    xlsx_2010,
    ods,
    gnumeric
};

enum underline_t
{
    underline_none,
    underline_single,
    underline_single_accounting, // unique to xlsx
    underline_double,
    underline_double_accounting // unique to xlsx
};

}}

#endif
/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
