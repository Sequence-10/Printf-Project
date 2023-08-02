#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *string);
int _puts_digit(int num);
int process_flag(char specifier, va_list all_parameters);
int is_flag(char percent, char specifier);

#endif
