/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef INCLUDED_ORCUS_CSS_TYPES_HPP
#define INCLUDED_ORCUS_CSS_TYPES_HPP

#include "orcus/env.hpp"

namespace orcus {

enum css_combinator_t
{
    css_combinator_descendant,   /// 'E F' where F is a descendant of E.
    css_combinator_child,        /// 'E > F' where F is a direct child of E.
    css_combinator_next_sibling  /// 'E + F' where F is a direct sibling of E where E precedes F.
};

typedef unsigned int css_pseudo_element_t;

ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_after;
ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_before;
ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_first_letter;
ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_first_line;
ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_selection;
ORCUS_PSR_DLLPUBLIC extern const css_pseudo_element_t css_pseudo_element_backdrop;

}

#endif

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
