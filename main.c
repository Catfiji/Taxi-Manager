
#include <stdio.h>
#include "color.h" // color!!
struct player
{   int balance
;   int taxis
;   
}; 

    struct player pla = {100, 2} // Player
;   int m = 10          // How much taxi's give
;   void game(void)     // THE GAME
;   int getin(void)     // Get input
;

int getin(void)          // Get input
{   unsigned char x     // x?
;   scanf("%c", &x)    // Getchar is overrated
;   getchar()         // Fixes not being able to use scanf twice
;   return x
;
}

void game(void)
{   int profit = m * pla.taxis  // profit
;   printf(GRN " Balance: $%d\n", pla.balance) 
;   printf(GRN " Taxis: %d\n", pla.taxis)  
;   printf(GRN " Current Profit: %d\n", profit)
;   // menu
;   printf(RED " [1] End day\n [2] Upgrade Taxi's\n [3] Buy Taxi\n")
;   if (getin() == 49) // 49 = "1"
{       pla.balance = pla.balance + profit // Add money to player balance
;       game()
;
}
};

int main(void) 
{   game()
;   return 0
;
}
