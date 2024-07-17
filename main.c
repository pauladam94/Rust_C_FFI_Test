#include <stdio.h>

extern void double_twice(int *, int *);

int main() {
  {
    int a = 10;
    int b = 10;

    printf("a: %d, b: %d", a, b);
    double_twice(&a, &b);
    printf("\n > a: %d, b: %d\n", a, b);
  }
  {
    int a = 10;
    int *b = &a;

    printf("a: %d, b: %d", a, *b);
    double_twice(&a, b);
    printf("\n > a: %d, b: %d\n", a, *b);
  }
  return 0;
}
