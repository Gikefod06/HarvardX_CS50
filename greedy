/**
 * greedy.c
 *
 * Michael J. Gulley
 * mgulley.mograph@gmail.com
 *
 * Asks user how much change is due to them, then figures out how to reimburse them using as few coins as possible.
 */
 
#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void)
{
    float change_due = 0;
    int coins_used = 0;
    
    // prompt user for change_due value; will reprompt if given value is non-numeric, or negative.
    do
    {
        printf("How much change are you owed? ");
        
        // multiply user input by 100 to get total cents owed to user
        change_due = round(GetFloat() * 100);
        
    }
    while (change_due <= 0);
    
    // use largest coin possible
    // quarters
    while (change_due >= 25)
    {
        change_due = change_due - 25;
        
        // keep track of coins used
        coins_used++;
    }
    
    // dimes
    while (change_due >= 10)
    {
        change_due = change_due - 10;
        coins_used++;
    }
    
    // nickels
    while (change_due >= 5)
    {
        change_due = change_due - 5;
        coins_used++;
    }
    
    // pennies
    while (change_due >= 1)
    {
        change_due = change_due - 1;
        coins_used++;
    }
 
    // print final amount of coins
    printf("%d\n", coins_used);
}
