#include "main.h"

int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;


	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(line);
			perror("error while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
	}

	printf("%s\n", line);
	free(line);
	return (0);
}
