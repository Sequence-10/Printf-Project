#include "main.h"

/**
 * _printf - printing whatever is given as an input GIGO
 * @format: handling all the characters
 * Return: success
 */

int _printf(const char *format, ...)
{
	char *str;
	unsigned long int i, count = 0;
	va_list args;

	va_start(args, format);
	if (format)
	{
		for (i = 0; i < strlen(format); i++)
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					putchar(va_arg(args, int));
					count += 1;
				}
				else if (format[i] == 's')
				{
					str = va_arg(args, char *);
					count += print_str(str);
				}
				else if (format[i] == '%')
				{
					putchar('%');
					count += 1;
				}
				else if (format[i] == 'b')
				{
					unsigned int n = va_arg(list, unsigned int);
					int bits = 0;
					unsigned int mask = 1;

					while (mask <= n)
					{
						bits++;
						mask <<= 1;
					}
					if (bits == 0)
					{
						putchar('0');
					}
					else
					{
						mask >>= 1;
						while (mask)
						{
							putchar((n & mask) ? '1' : '0');
							mask >>= 1;
						}
					}
				}
				else if (format[i] == 'd' || format[i] == 'i')
					count += printf("%d", va_arg(args, int));
				else if (format[i] == 'u')
					count += printf("%u", va_arg(args, int));
				else if (format[i] == 'o')
					count += printf("%o", va_arg(args, int));
				else if (format[i] == 'x')
					count += printf("%x", va_arg(args, int));
				else if (format[i] == 'X')
					count += printf("%X", va_arg(args, int));
				else if (format[i] == 'p')
					count += printf("%p", va_arg(args, void *));
				else if (format[i] == 'S')
				{
					str = va_arg(args, char *);
					count += handle_S(str);
				}
				else if(format[i] == 'r')
				{
					str = va_arg(args, char *);
					count += print_rev(str);
				}
				else if (format[i] == '\0')
					return (-1);

				else
				{
					putchar(format[i - 1]);
					putchar(format[i]);
					count += 2;
				}
			}
			else
			{
				putchar(format[i]);
				count += 1;
			}
		}
		va_end(args);
	}
	else
		return (-1);

	return (count);
}
