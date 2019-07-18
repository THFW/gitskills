#include <stdio.h>
//#include <string.h>
#include "func.h"
  
int main()
{
	//foo();
	
	int n_columns;
	int columns[MAX_COLS];
	char input[MAX_INPUT];
	char output[MAX_INPUT];
	
	n_columns = read_column_numbers( columns, MAX_COLS );
	
	while( gets( input ) != NULL){
			printf("Original input : %s\n", input );
			rearrange( output, input, n_columns, columns );
			printf("Rearranged line: %s\n", output);
	}
	
	return EXIT_SUCCESS;	
}
