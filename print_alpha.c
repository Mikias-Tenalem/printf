#include "main.h"

/**
 * print_string - loop through a string and prints
 * every character
 * @l: va_list argument from _printf
 * @f: pointer to the struct flag that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
    char *s = va_arg(l, char *);

    (void)f;

    if (!s)
        s = "(null)";
    return (_puts(s));
}

/**
 * print_char - print a character
 * @l: va_list argument from _printf
 * @f: pointer to the struct flag that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
    (void)f;
    _putchar(va_arg(l, int));
    return (1);
}
