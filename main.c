#include "shell.h"

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void) ac;

	do
	{
		line = reader();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			return (status);
		}


		command = token(line);
		if (!command)
		{
			continue;
		}


		status = _execute(command, argv);

	} while (1);
	
}

