#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int process_flag(char specifer, va_list args);
int is_flag(char percent, char specifier);
int print_char(va_list args);
int _puts(char *string);
int _puts_digit(int num);
int _print_address(va_list args);

#endif
