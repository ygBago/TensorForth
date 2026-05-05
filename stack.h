#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdbool.h>

define MAX_STACK_SIZE 100

typedef struct stack {
    int top; // indice dell'ultimo elemento inserito nello stack
    int dim; // dimensione dello stack, 1 o 2
    Tensor *tensor_pointers; // array di puntatori a tensor 
} Stack; 

void initiaze_stack(Stack *s); // inizializza lo stack, setta top a -1 e dim a 0
bool is_empty(Stack *s); // restituisce true se lo stack è vuoto, false altrimenti
bool is_full(Stack *s); // restituisce true se lo stack è pieno, false altrimenti
void push(Stack *s, Tensor *t); // inserisce un puntatore a tensor nello stack, se lo stack è pieno non fa nulla
Tensor* pop(Stack *s); // restituisce un puntatore a tensor e lo rimuove, se lo stack è vuoto restituisce NULL 
Tensor* peek(Stack *s); // restituisce un puntatore a tensor senza rimuoverlo

#endif
