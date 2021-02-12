
#include <stdio.h>
#include "color.h" // color!!
    struct player
{   int balance
;   int taxis
;   
}; 

    struct player pla = {100, 5} // Player
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

    void game(void) // game
{   int profit = m * pla.taxis  // profit
;   printf(GRN " Balance: $%d\n", pla.balance) 
;   printf(GRN " Taxis: %d\n", pla.taxis)  
;   printf(GRN " Current Profit: %d\n", profit)
;   // menu
;   printf(RED " [1] End day\n [2] Upgrade Taxi's\n [3] Buy Taxi\n")
;   int x = getin()
;   if (x == 49) // 49 = "1"
{       pla.balance = pla.balance + profit // Add money to player balance
;       game()
;   
}   else if (x == 50)
{       printf(BGRN "upgrade for $100?\n [1] Y [2] N\n" RED)
;       int y = getin()
;       if (y == 49)
{           if (pla.balance >= 100)
{               pla.balance = pla.balance - 100
;               m = m + 5
;               game()
;
}           else 
{               printf(BRED "Not enough money!\n")
;               game()
;
}
;          
}       else 
{           game()
;
}  
}   else if (x == 51)
{       int cost = 1000 * pla.taxis    
;       printf(BGRN "Buy taxi for %d?\n [1] Y [2] N\n", cost)
;       int l = getin()
;       if (l == 49)
{           if (pla.balance >= cost)
{               pla.balance = pla.balance - cost
;               pla.taxis = pla.taxis + 1
;               game()
;
}           else 
{               printf(BRED "Not enough money!\n")
;               game()
;
}
}       else
{           game()
;
}
}
};

    int main(void)  // main
{   game()
;   return 0
;
}
