#include "lists.h"
/**
 * add_dnodeint_end - puts in a new node at end of a dlistint_t list
 *
 * @head: head of list
 * @n: val of element
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	p = *head;

	if (p != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = p;

	return (new);
}
