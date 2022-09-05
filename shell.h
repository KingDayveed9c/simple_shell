#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void ctrl_C(int);
int _printf(char *, int);
int _strlen(char *);
char *_getline(void);

#define READ_BUF 1000


#endif
