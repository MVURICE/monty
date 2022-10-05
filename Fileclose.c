#include "monty.h"

/**
 * m_fs_close - close file stream
 * @status: status passed to exit
 * @arg: pointer to file stream
 *
 * Return: void
 */
void file_close(int status, void *arg)
{
	FILE *fs;

	(void)status;

	fs = (FILE *) arg;
	fclose(fs);
}
