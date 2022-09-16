#include "main.h"

/**
 * _isdigit - determine if digit or not
 *
 * @c: tested character
 *
 * Return: return 1 if it is, and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);

	}

	return (0);
}
