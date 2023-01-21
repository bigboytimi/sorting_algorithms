#include <stdio.h>
#include "sort.h"


/**
 * sortedInsert - insert the sorted element in order
 *
 * @sorted: sorted list
 *
 * @newNode: node to verify for insertion
 *
 * Return: sorted values
 */

void sortedInsert(listint_t **sorted, listint_t *newNode)
{
	listint_t *current;

	if (*sorted == NULL)
		*sorted = newNode;

	else if ((*sorted)->n >= newNode->n)
	{
		newNode->next = *sorted;
		newNode->next->prev = newNode;
		*sorted = newNode;
	}

	else
	{
		current = *sorted;
		while (current->next != NULL && current->next->n < newNode->n)
			current = current->next;

		newNode->next = current->next;

		if (current->next != NULL)
			newNode->next->prev = newNode;

		current->next = newNode;
		newNode->prev = current;
	}
}

/**
 * insertion_sort_list - algorithm to sort list using insertion
 * @list: doubly linked list to be sorted
 *
 * Return: sorted list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;

	listint_t *current = *list;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->prev = current->next = NULL;

		sortedInsert(&sorted, current);
		print_list(*list);

		current = next;
	}

	*list = sorted;
}
