#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char b);
void *malloc_checked(unsigned int a);
char *string_nconcat(char *x1, char *x2, unsigned int m);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *x);
int is_digit(char *x);

#endif
