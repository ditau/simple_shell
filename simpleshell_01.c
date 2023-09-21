#include "shell.h"

/*
 *
 * @main: displays the standard output
 * reads and executes the command to create a simple_shell.
 * Return: 0.
 *
 *
 */

int main(void)
{
	char command[MAX_COMMAND_LENGTH];

	while (1)
	{
		display_prompt();


		if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
		{
			printf("\n");
			break;
		}


		command[strcspn(command, "\n")] = '\0';


		execute_command(command);
	}

	return (0);
}
