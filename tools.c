#include "shell.h"


/**
 * free_array - fun that free a 2D array
 * @arr: The array
 */
void free_array(char **arr)
{
	int i;

	if (!arr)
		return;
	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr), arr = NULL;
}
