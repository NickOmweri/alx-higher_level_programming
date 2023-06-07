#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Is a singly linked list.
 * @n: Are points to the node.
 * @i: Is an integer.
 */

typedef struct listint_s
{
	int i;
	struct listint_s *n;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int i);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
