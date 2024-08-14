#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	int i = 0;

	printf("%i\n", argc);

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
