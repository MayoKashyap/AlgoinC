#include<stdio.h>
int main(void){ 
    int groupiden, prefix, publisher, item, checkdigit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &groupiden, &publisher, &item, &checkdigit);

  printf("G21 prefix: %d\n", prefix);
  printf("Group identifier: %d\n", groupiden);
  printf("publisher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("check digit: %d\n", checkdigit);





}