#include <unistd.h>
#include <stdio.h>
/**
 * main - function to execute another program
 * @ac: argument count
 * @av: argument vector
 * Return: 0 always;
 */

int main (int ac, char *argv[])
{
	(void) ac;

    printf("Before execve\n");
    if (execve(argv[1], &argv[1], NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
