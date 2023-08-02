#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *string);
int _puts_digit(int num);
int _print_address(va_list args);
int print_rev(char *s);
int print_str(char *str);
int handle_S(char *str);

#endif
