#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main(int argc, char **argv)
{
	int *array = NULL, *tmp = NULL;
	int numItems = 0;
	int count = 0;
	size_t itemSize = sizeof *array;

	while(1)
	{
		printf("How many items to add/remove:");
		scanf("%d", &numItems );

		if( numItems == 0 ) break; //exit loop

		if( numItems < 0 && abs(numItems) >= count )
		{
			printf("Too many items to remove!\n");
		}
		else // numItems < 0 or numItems > 0
		{
			tmp = realloc( array , (numItems + count) * itemSize);

			if( tmp != NULL )
			{
				for( int i=0; i < numItems ; i++ )
				{
					*(tmp + count + i)  = rand() % 100;
				}

				array = tmp;
				count += numItems;

				show( array , count );
			}
			else
			{
				printf("Out of memory or realloc error!\n");
			}
		}
	} // while

	if( array != NULL ) free( array );

	return 0;
}