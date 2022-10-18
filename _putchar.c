#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: one on suceess
 * on error, minus one is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
