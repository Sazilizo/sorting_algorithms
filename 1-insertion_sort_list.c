#include "sort.h"
/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t *temp;

	if (list == NULL)
		return;
	temp = *list;
	while (temp != NULL)
	{
		while (temp != NULL)
		{
			if (temp->next)
			{
				if (temp->n > temp->next->n)
				{
					i = temp->n;
					*(int *)&temp->n = temp->next->n;
					*(int *)&temp->next->n = i;
					temp = *list;
					print_list(*list);
					break;
				}
			}
			temp = temp->next;
		}
	}
}
