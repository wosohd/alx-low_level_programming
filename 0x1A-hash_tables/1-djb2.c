#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing djb2 algorithm.
 * @str: string to hash.
 *
 * Return: hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int j;

	hash = 5381;
	while ((j = *str++))
		hash = ((hash << 5) + hash) + j; /* hash * 33 + j */

	return (hash);
}
