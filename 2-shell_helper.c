#include "shell.h"

int _printf(char *var, int fd)
{
	return (write(fd, var, _strlen(var)));

}
