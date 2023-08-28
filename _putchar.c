#include "main.h"
#include <unistd.h>

/**
 * _putchar- function
 * Return:char
 * @c:char
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
