#ifndef SHELL_H
#define SHELL_H

#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>


#define DELIM " \t\n"

extern char **environ;
char *reader(void);
char **token(char *line);
int _execute(char **command, char **argv);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void free_array(char **arr);
#endif
