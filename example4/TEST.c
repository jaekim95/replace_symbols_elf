#include <stdio.h>
int foo(int, int);
void beef(char*);

int main() {
  int res = 0;

  printf("Calling foo with 100 and 1\n");
  res = foo(100, 1);
  printf("%d\n\n", res);

  printf("\nCalling foo with 200 and 1000\n");
  res = foo(200, 1000);
  printf("%d\n\n", res);

  printf("\nCalling foo with 777 and 888\n");
  res = foo(777, 888);
  printf("%d\n\n", res);

  char cres = 'a';
  beef(&cres);
  printf("beef should be 'c': %c\n", cres);

  return 0;
}
