#include <stdio.h> 
#include "data_model.h"


Transaction abc;

int main() {

  abc.date[11] = "2025/08/05";
  abc.type[] = "Income"; 
  abc.category[] = "Groceries";
  abc.amount = 225.0;
  abc.description[] = "Bought a bunc of stuff";

  printf("This is the closest amount: %f\n", abc.amount);
  return 0;
}


