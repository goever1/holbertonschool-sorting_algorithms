#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using Insertion sort
 * @list: Pointer to the head of the linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *temp = current;
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > temp->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			prev->prev = temp;
			temp->next = prev;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);

			prev = temp->prev;
		}

		current = current->next;
	}
}
