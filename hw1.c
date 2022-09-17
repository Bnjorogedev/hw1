//2169C5
#include <stdio.h>
#include "stdlib.h"

int main(void) {
     int menuChoice;
     int totalCola = 5;
     int totalCandybar = 5;
     int totalPopcorn = 5;
     double userAmount;
     double costCola = 0.75;
     double costCandybar = 1.25;
     double costPopcorn = 0.50;
     double MoneyMade = 0.00;
     printf("Welcome to the Vending Machine!\n");

     
     
     //printf("your choice is %d \n", menuChoice);
     //scanf("Enter your choice by %d\n", &menuChoice);
     printf("Enter your choice by \n");
     printf("[0] %d cola left: cost is $%.2f\n", totalCola, costCola);
     printf("[1] %d candybar left: cost is $%.2f\n",totalCandybar, costCandybar);
     printf("[2] %d popcorn left: cost is $%.2f\n",totalPopcorn, costPopcorn);
     printf("Money made so far is $%.2f \n", userAmount);
     
     
     while (scanf("%d %lf", &menuChoice, &userAmount) == 2) {
          
          //printf("your choice is %d", menuChoice);
          //printf("your amount is %f", userAmount);
          if (menuChoice == 0) {
               if (totalCola > 0) {
                    if (userAmount >= costCola && userAmount >= 0) {
                         totalCola--;
                         printf("cola is dispensed and %.2f returned !\n", userAmount - costCola);
                         userAmount -= costCola;
                         MoneyMade += costCola;
                    }
                    else {
                         printf("not enough money.\n");
                    }
               }
               else {
                    printf("invalid item\n");
                    return 2;
               }
          }
          else if (menuChoice == 1 && userAmount >= 0) {
               if (totalCandybar > 0) {
                    if (userAmount >= costCandybar) {
                         totalCandybar--;
                         printf("candybar is dispensed and %.2f returned \n", userAmount - costCandybar);
                         userAmount -= costCandybar;
                         MoneyMade += costCandybar;
                         
                    }
                    else {
                         printf("not enough money \n");
                         return 2;
                    }
               }
               else {
                    printf("invalid item \n");
                    return 2;
               }
          }
          else if (menuChoice == 2 && userAmount >= 0) {
               if (totalPopcorn > 0) {
                    if (userAmount >= costPopcorn) {
                         totalPopcorn--;
                         printf("popcorn is dispensed and $%.2f returned \n", userAmount - costPopcorn);
                         userAmount -= costPopcorn;
                         MoneyMade += costPopcorn;
                         
                    }
                    else {
                         printf("Not enough money\n");
                         return 2;
                    }
               }
               else {
                    printf("invalid item \n");
                    return 2;
               }
          }
          else if (menuChoice < 0 || userAmount < 0) {
               printf("malformed expression \n");
               return 1;
          }
          else {
               printf("Invalid item.\n");
               return 2;
          }
          printf("[0] %d cola left: cost is $%.2f\n", totalCola, costCola);
          printf("[1] %d candybar left: cost is $%.2f\n",totalCandybar, costCandybar);
          printf("[2] %d popcorn left: cost is $%.2f\n",totalPopcorn, costPopcorn);
          printf("Money made so far is $%.2f \n", MoneyMade);
          //printf("Enter your choice by %d%f \n", &menuChoice, &userAmount);
     }
     if (scanf("%d %lf", &menuChoice, &userAmount) != 2){
          printf("malformed expression \n");
          return 1;
     }
     else {
     printf("Thank you for your patronage!\n");
     return 0;
     }
}
