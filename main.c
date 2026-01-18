#include <stdio.h>
#include <string.h>
int main() {
  // Shoping cart
  char item[50] = "";
  float price = 0.0f;
  int quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("what item would you like to buy? :\n");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("What is the price of each item ? :\n");
  scanf("%f", &price);
  printf("How many you would like to buy ? :\n");
  scanf("%d", &quantity);

  total = price * quantity;
  printf("\nYou have bought %d %s(s)\n", quantity, item);
  printf("THE TOTAL IS : %.2f%c\n", total, currency);

  return 0;
}
