#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *token;
	int j;

	if (argc < 2) {
		fprintf(stderr, "Usage: %s string delim\n",
				argv[0]);
		exit(EXIT_FAILURE);
	}

	token = strtok(argv[1], " ");
	j = 1;
	while (token != NULL) {
		printf("%d: %s\n", j, token);
		
		token = strtok(NULL, " ");
		j++;
	}

	exit(EXIT_SUCCESS);
}
