#ifndef FUNC_H
#define FUNC_H

#include "define.h"

void foo();
int read_column_numbers(int columns[], int max);
void rearrange( char *output, char const *input,
		int n_columns, int const columns[] );

#endif
