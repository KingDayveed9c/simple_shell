#include "shell.h"

void ctrl_C(int signum)
{
	if (signum == SIGINT)
		_printf("\n $ ", STDIN_FILENO);

}

/*
* _getline - takes input from the user
*
* Return: the string read
*/

char *_getline(void)
{
	int bufSize = READ_BUF;

	char *buffer = malloc(bufSize *sizeof(char);
	char c;

	if (buffer == NULL)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		no_read = read(STDIN_FILENO, &c, 1);
		if (c = EOF || !no_read)
		{
			if (isatty(STDIN_FILENO) == 1)
			{
				_printf("\n", STDIN_FILENO);
				return (NULL);
			}	
		}
		else if (c == "\n" || !no_read)
		{
			return (buffer);
		}

		else
			buffer[position] = c;
			position++;
	}
}
