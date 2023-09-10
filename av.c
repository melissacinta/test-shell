#include <stdio.h>
/**
* main - function to print out program name
* @ac: count of arguemts
* @av: array of arguement of length argc
* Return: return 0 success exit code
*/

int main(int ac, char **av)
{
	(void) ac;
	int i;

	i = 0;
	while (av[i] != NULL)
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
