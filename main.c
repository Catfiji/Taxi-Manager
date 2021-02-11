#include <stdio.h>

struct player
{   int balance
;   int taxis
;   
}; 

    struct player pla = {100, 2}
;   int m = 10
;   

int main(void) 
{   int profit = m * pla.taxis
;   printf("Balance: %d\n", pla.balance) 
;   printf("Taxis: %d\n", pla.taxis)  
;   printf("Current Profit: %d\n", profit)
;   return 0
;
}
