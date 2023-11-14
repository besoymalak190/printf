#include "main.h"
#include <stdio.h>

/**
  *switcher - checks what is the type that comes after the % sign
  *@format: the buffer index
  *@list: the list of arguments
  *@i: the content of the buffer index
  *Return: i
  */
int switcher(const char *format, va_list list, int i)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(list, int));
			i++;
			break;
		case 's':
			i = print_string(list, i);
			break;
		case '%':
			_putchar('%');
			i++;
			break;
		default:
			break;
	}
	return (i);
}
