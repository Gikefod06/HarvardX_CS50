/**
 * mario.c
 *
 * Michael J. Gulley
 * mgulley.mograph@gmail.com
 *
 * Creates a Mario-style pyramid based on user-defined height value.
 */
 
#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    int height;
 
    //Prompts user for height value. Will reprompt if given value is non-numeric, negative, or greater than 23. 
    do
    {
        printf("Desired Pyramid Height: ");
        height = GetInt();
    }
    while (height > 23 || height < 0);
    
    //Prints half-pyramid based on user-defined height value.
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < height - (i + 1); j++)
        {
            printf(" ");
        }
        
        // print hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        
        printf("#");
        
        // print new line
        printf("\n");
    }
}
