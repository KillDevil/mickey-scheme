/*
 * Mickey Scheme
 *
 * Copyright (C) 2011 Christian Stigen Larsen <csl@sublevel3.org>
 * http://csl.sublevel3.org                              _
 *                                                        \
 * Distributed under the LGPL 2.1; see LICENSE            /\
 * Please post bugfixes and suggestions to the author.   /  \_
 *                                                          
 */

#ifndef INC_MICKEY_TOKENIZER_H
#define INC_MICKEY_TOKENIZER_H

void set_source(const char* program);
const char* get_token();
bool fold_case();

#endif
