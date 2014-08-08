/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef ORCUS_SPREADSHEET_AUTO_FILTER_HPP
#define ORCUS_SPREADSHEET_AUTO_FILTER_HPP

#include "types.hpp"
#include "orcus/pstring.hpp"
#include "../env.hpp"

#include <map>

#include <boost/unordered_set.hpp>

#include <ixion/address.hpp>

namespace orcus { namespace spreadsheet {

/**
 * Data for a single column inside autofilter range.
 */
struct ORCUS_DLLPUBLIC auto_filter_column_t
{
    typedef boost::unordered_set<pstring, pstring::hash> match_values_type;
    match_values_type match_values;

    void reset();
};

/**
 * Data for a single autofilter entry.  An autofilter can belong to either a
 * sheet or a table.
 */
struct ORCUS_DLLPUBLIC auto_filter_t
{
    typedef std::map<col_t, auto_filter_column_t> columns_type;

    ixion::abs_range_t range;

    columns_type columns;

    auto_filter_t();

    void reset();
    void swap(auto_filter_t& r);
};

/**
 * Single column entry in table.
 */
struct ORCUS_DLLPUBLIC table_column_t
{
    size_t identifier;
    pstring name;
    pstring totals_row_label;
    totals_row_function_t totals_row_function;

    table_column_t();

    void reset();
};

/**
 * Table style information.
 */
struct ORCUS_DLLPUBLIC table_style_t
{
    pstring name;

    bool show_first_column:1;
    bool show_last_column:1;
    bool show_row_stripes:1;
    bool show_column_stripes:1;

    table_style_t();

    void reset();
};

/**
 * Single table entry.  A table is a range in a spreadsheet that represents
 * a single set of data that can be used as a data source.
 */
struct ORCUS_DLLPUBLIC table_t
{
    typedef std::vector<table_column_t> columns_type;

    size_t identifier;

    pstring name;
    pstring display_name;

    ixion::abs_range_t range;

    size_t totals_row_count;

    auto_filter_t filter;
    columns_type columns;
    table_style_t style;

    table_t();

    void reset();
};

}}

#endif

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
