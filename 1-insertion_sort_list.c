#include "sort.h"

/**
 * swap - function that swaps 2 nodes
 * @node_a: address of first node
 * @node_b: address of second node
 * Return: void
*/
void swap(listint_t *node_a, listint_t *node_b)
{
if (node_a->prev)
node_a->prev->next = node_b;
if (node_b->next)
node_b->next->prev = node_a;
node_a->next = node_b->next;
node_b->prev = node_a->prev;
node_a->prev = node_b;
node_b->next = node_a;
}

/**
 * insertion_sort_list - function that sorts a list by insertion sort
 * @list: address of pointer to head node
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
listint_t *key, *compartion_num;

if (!list || !*list || !(*list)->next)
return;

key = (*list)->next;
while (key)
{
compartion_num = key;
key = key->next;
while (compartion_num && compartion_num->prev)
{
if (compartion_num->prev->n > compartion_num->n)
{
swap(compartion_num->prev, compartion_num);
if (!compartion_num->prev)
{
*list = compartion_num;
}
print_list((const listint_t *)*list);
}
else
compartion_num = compartion_num->prev;
}
}
}
