#include "main.h"
#include <stdio.h>
/**
  *print_string - supplementary with _printf to print strings
  *@list: list of arguments passed
  *@i: the charchters to be printed
  *Return: i
  */
int print_string(va_list list, int i)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = NULL;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	return (i);
}
