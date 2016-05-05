#include <stdio.h>
#include <stdlib.h>

int main( int argc , char **argv )
{
	int *array = NULL;
	int i = 0;
	//1. allocate memory for 10 int numbers
	array = malloc( sizeof *array * 10); //4 Bytes * 10

	//2. if error then exit
	if( array == NULL )
	{
		printf("Memory allocation error!\n");
		exit(0);
	}

	//3. fill the array with values
	for( i = 0; i < 10; i++ )
	{
		*(array + i) = rand() % 100; //2-digit random number (0-99)
	}

	//4. output
	for( i = 0; i < 10; i++ )
	{
		printf("value:%d, address: %p\n", *(array + i), (array + i));
	}

	//5. free the allocated memory

	free(array);
	return 0;
}