#include "lists.h"

/**
 * check_cycle - It checks if a linked list contains a cycle.
 * @l_list: Is the linked list to check.
 *
 * Return: 0 if it doesn't and 1 if the list has a cycle.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *slow = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
