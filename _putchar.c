#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: The character written as an unsigned char.
 * On error, it returns EOF.
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

