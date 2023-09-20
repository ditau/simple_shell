#include "shell.h"

/**
 * _isaplha- cheks for  an aplhabetic character
 * @c: is the input character
 * Return: 1 if aphabetic, otherwise 0
 */

int _isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
