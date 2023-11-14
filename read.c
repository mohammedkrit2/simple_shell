#include "shell.h"

char *reader(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t t;

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	

	t = getline(&line, &len, stdin);
	if ( t == -1)
	{
		free(line);
		return (NULL);
	}




	return (line);
}