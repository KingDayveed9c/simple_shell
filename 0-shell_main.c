#include "shell.h"

/*
* main - entry point
* @ac: parameter
* @av: parameter
*
* Return: sucess
*/

int main(int argc __attribute__((unused)), char **argv)

{
	char *line;
	(void) argv;
	signal(SIGINT, ctrl_C);

	printf(" $ " STDOUT_FILENO);
	while (1)
	{
		/*printf(" $ ");*/
		line = _getline();
	}

return (0);
}
