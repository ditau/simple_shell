#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/*_bettychks.c */

int _isaplha(int);

/*simpleshell_01.c */

#define MAX_COMMAND_LENGTH 100

void execute_command(const char * command)
{
	pid_t cpid = fork();
	if  (cpid == 1)
	{
		perror ("fork");
		exit (EXIT_FAILURE);
	}
	else if (cpid < 0)
	{
		perror("Fork failed");
	}
	else
	{
		wait(NULL);
	}
}

void display_prompt()
{
	printf("simple_shell$");
	fflush(stdout);
}

#endif
