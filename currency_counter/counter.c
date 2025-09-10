#include <stdio.h>
#define PRICE_COUNT_MAX 10

int product_prices[] = {13, 140, 900, 2};

int main(void) {
  for (int i = 0; i < PRICE_COUNT_MAX; ++i)
	  printf("%d : %3d DKK \n", i,product_prices[i]);
}