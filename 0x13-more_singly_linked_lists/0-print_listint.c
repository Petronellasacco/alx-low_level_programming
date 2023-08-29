#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: linked list of all type listint_t in print
 *
 * return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (0);
}