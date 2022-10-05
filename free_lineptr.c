#include "monty.h"

/**
 * free_linepointer - free line pointer returned by getline
 * @status: exit status
 * @arg: pointer to line
 *
 * Return: void
 */
void free_linepointer(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
