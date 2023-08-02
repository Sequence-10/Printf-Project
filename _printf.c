#include "main.h"

/**
 * _printf - printing whatever is given as an input GIGO
 * @format: handling all the characters
 * Return: success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;

	if (format == 0)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			j += process_flag(format[i + 1], args);
		if (!is_flag(format[i], format[i + 1]))
		{
			j += _putchar(format[i]);
			i++;
		}
		else
			i += 2;
	}

	va_end(args);
	return (j);

}
