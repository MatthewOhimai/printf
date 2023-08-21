#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct pf_specifier - Structure for specifiers
 * @s: String to compare
 * @f: Function to execute
 */
typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_s;

/* Specifier verification */
int (*verify_format(const char *s))();

/* Printf function */
int _printf(const char *format, ...);
int _putchar(char *buffer, char s);
