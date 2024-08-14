#include "simple_shell.h"

void shell_interactive(void)
{
	char *line;
	char **tokens;
	int status = -1;

	line = readline();
	tokens = parse_args(line);

	do
	{
		printf("simple_shell$ ");
		line = readline();
		tokens = parse_args(line);
		status = execute_args(tokens);
		free(line);
		free(tokens);
		if (status >= 0)
			exit(status);
	} while (status == -1);
}
