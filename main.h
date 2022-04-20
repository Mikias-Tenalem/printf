#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
 {
            p++;
            if (*p == '%')
            {
                count += _putchar('%');
                continue;
            }
            while (get_flag(*p, &flags))
                p++;
            pfunc = get_print(*p);
            count += (pfunc)
                         ? pfunc(arguments, &flags)
                         : _printf("%%%c", *p);
        }
