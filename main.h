#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(va_list list);
int print_strng(va_list list);

int print_string(va_list list, int i);
int switcher(const char *format, va_list list, int i);

int _putchar(char character);

#endif
