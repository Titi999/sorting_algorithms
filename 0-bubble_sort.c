#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size)
{
size_t tmp, traverse, j;

if (array == NULL || size < 2)
{
return;
}

/** loop then traverseerse an array */
for (traverse = 1; traverse < size; traverse++)
{
/** loop index the element */
for (j = 0; j < size - 1; j++)
{
/** freater element */
if (array[j] > array[j + 1])
{
/** the swap of elements */
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}
}
