#include "sort.h"

/**
 * insertion_sort_list - Applies insertion sort to the doubly linked list.
 * @list: The list to be sorted
 *
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *node = NULL;

	temp = *list;
	while (temp != NULL)
	{
		if ((*temp).prev != NULL)
			while ((*temp).n < (*(*temp).prev).n)
			{
				node = (*temp).prev;
				if ((*temp).next != NULL)
					(*(*temp).next).prev = node;
				if ((*node).prev != NULL)
					(*(*node).prev).next = temp;
				(*temp).prev = (*node).prev, (*node).next = (*temp).next;
				(*temp).next = node, (*node).prev = temp;
				if ((*temp).prev == NULL)
					*list = temp, temp = node;
				print_list((const listint_t *)*list);
			}
		temp = (*temp).next;
	}
}
