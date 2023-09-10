#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork + wait + execve exercise
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t child_pid;
	char *av[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i = 5, status;

	while (i)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		else if (child_pid == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
				perror("Error:");
				exit(-1);
			}
		}
		else
		{
			wait(&status);
		}
		i--;
	}
	return (0);
}
