#include "stack.h"
#include "tensor.h"
#include <stdlib.h>

//struct normale = . | puntatore a struct si usa ->
Stack* initiaze_stack(){

  Stack s;
  s.top=-1;
  s.dim=16;
  s.tensor_pointers = malloc(sizeof(tensor *) * s->dim);

};
