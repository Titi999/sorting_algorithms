#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listint_s
{
  const int n;
  struct listint_s *prev;
  struct listint_s *next;
} listint_t;

typedef enum kind_e
  {
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
  } kind_t;

typedef struct card_s
{
  const char *value;
  const kind_t kind;
} card_t;
typedef struct deck_node_s
{
  const card_t *card;
  struct deck_node_s *prev;
  struct deck_node_s *next;
} deck_node_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);

#endif
