#include "stack.h"
#include "tensor.h"
#include "ops.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
  Stack s = initiaze_stack();
  //printf("var = %d\n", s.dim);
  s.top=15;
  //resize_stack(&s);
  //printf("var = %d\n", s.dim);
  Tensor t;
  t.ndim=10;
  t.size=1;
  push(&s, &t);
  printf("%d\n", peek(&s).ndim);
  printf("stack dim: %d\n", s.dim);
  return EXIT_SUCCESS;
}
