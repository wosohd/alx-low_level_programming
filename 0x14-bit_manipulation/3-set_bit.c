#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: the pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 60)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
