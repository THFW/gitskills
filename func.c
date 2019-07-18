#include "stdio.h"
#include "func.h"

void foo()
{	
	printf("void foo() : %s\n", HELLO);
}

int read_column_numbers(int columns[], int max)
{
	int num = 0;
	int ch;
	
	while( num < max && scanf( "%d", &columns[num] ) == 1 && columns[num] >= 0 )
			num += 1;
	
	if( num % 2 != 0 ){
			puts( "Last column number is not paired." );
			exit( EXIT_FAILURE );
	}
	while( (ch = getchar()) != EOF && ch != '\n' )			
			;
	
	return num;					
}

void rearrange( char *output, char const *input,
		 int n_columns, int const columns[] )
{
	int col;
	int output_col;
	int len;
	
	len = strlen( input );
	output_col = 0;
	
	for( col = 0; col < n_columns; col+=2 ){
			 int nchars = columns[col + 1] -columns[col] + 1;
			 
			 if( columns[col] >= len || output_col == MAX_INPUT - 1 )
			 			break;
			 			
			 if( output_col + nchars > MAX_INPUT - 1 )
			 			nchars = MAX_INPUT - output_col - 1;
			 			
			 strncpy( output + output_col, input + columns[col], nchars );
			 			output_col += nchars;			 					 
			}
			output[output_col] = '\0';
}