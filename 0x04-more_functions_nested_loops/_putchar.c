#include "main.h"
#include <stdio.h>

/**
 * _putchar - wrte the character c to stdout
 * @c the character to print
 *
 * return: on success 1.
 * on error, -1 is return, and error is set appropriately
 */

int _putchar(char c)
{
        return (fwrite(1, &c, 1));
}
