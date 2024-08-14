#include "simple_shell.h"

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
		shell_interactive();
	else
		shell_non_interactive();
	return (0);
}
