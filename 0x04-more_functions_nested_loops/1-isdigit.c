#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
			{
			   return (1);
			}
        return (0);
}
