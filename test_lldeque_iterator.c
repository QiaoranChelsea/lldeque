#include <stdio.h>

#include "lldeque.h"

#define NUM_TEST_ELEMENTS 32

int main(int argc, char** argv) {

  struct lldeque* q = lldeque_create();
  struct lldeque_iterator* iter;

  for (int i = 0; i < NUM_TEST_ELEMENTS; i++) {
    lldeque_add_back(q, i);
  }

  printf("== Deque contents, add back, via iterator: ");
  iter = lldeque_iterator_create(q);
  while (lldeque_iterator_has_next(iter)) {
    printf("%4d,", lldeque_iterator_next(iter));
  }
  printf(" done\n");

}
