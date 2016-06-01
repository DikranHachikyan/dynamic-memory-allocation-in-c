#include <stdio.h>
#include <stdlib.h>

void show( int *array, int size)
{
	if( array == NULL ) return;
	
	for( int i = 0; i < size ; i++ )
	{
		printf("array[%d]=%d\n", i, array[i]);
	}
}
