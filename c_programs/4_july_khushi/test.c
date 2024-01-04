// Import neccessary library
#include <stdio.h>

// define main
int main(void)
{
  // define a variable of type int.
  int n;
  // print on screen
  printf("input an integer:");

  // take an input from user of int type and store it in n, &n gives the address of n.
  scanf("%d", &n);

  // ! if number is even print even or else odd
  // * If computes on boolean, True and False. 0 -> false, 1 or positive -> true.

  if (n % 2 == 1)
  {
    puts("that number is odd.");
  }
  else
  {
    puts("that number is even");
  }
  // return 0
  return 0;
}
