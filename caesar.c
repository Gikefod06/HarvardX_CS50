/**
 * caesar.c
 *
 * Michael J. Gulley
 * mgulley.mograph@gmail.com
 *
 * Asks user to input a message, then enciphers the message using the caesar cypher.
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{
    // check arguments
    if (argc != 2)
    {
        printf("Please enter a valid number of agruments.\n");
        return 1;
    }
    
    if (argv[1] <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 2;
    }
    
    // get the key
    int key = atoi(argv[1]);
    
    // get the plaintext
    string orig_message = GetString();
    
    // encipher
    for (int i = 0, n = strlen(orig_message); i < n; i++)
    {
        if (isupper(orig_message[i]))
        {
            int upper = ((orig_message[i] -'A' + key) % 26) + 'A';
            printf("%c", upper);
        }
        
        else if (islower(orig_message[i]))
        {
            int lower = ((orig_message[i] - 'a' + key) % 26) + 'a';
            printf("%c", lower);
        }
        else
        {
            printf("%c", orig_message[i]);
        }
    }
    
    // print ciphertext
    printf("\n");
    return 0;
}
