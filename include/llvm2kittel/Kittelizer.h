// This file is part of llvm2KITTeL
//
// Copyright 2010-2014 Stephan Falke
//
// Licensed under the University of Illinois/NCSA Open Source License.
// See LICENSE for details.

#ifndef KITTELIZER_H
#define KITTELIZER_H

// C++ includes
#include <list>

class Rule;

std::list<Rule*> kittelize(std::list<Rule*> rules);

#endif // KITTELIZER_H