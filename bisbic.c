#include <stdio.h>

int bis(int x, int m);

int bool_xor(int x, int y);
int bool_or(int x, int y);

int bic(int x, int m);

int main() {
  int a = 0x3A01;
  int m = 0xFF;

  printf("bis: %.8x\n", bis(a, m));
  printf("bic: %.8x\n", bic(a, m));
}

int bis(int x, int m) { return x | m; }

int bic(int x, int m) { return x & ~m; }
