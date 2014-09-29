/**
 * vigenere.c
 *
 * Michael J. Gulley
 * mgulley.mograph@gmail.com
 *
 * Asks user to input a message, then enciphers the message using the vigenere cypher.
 * Vigenere cipher formula: Ci = (Pi + Kj) % 26
 * (Cipher(i) = (Plain text(i) + Key(j)) % 26)
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
 int main(int argc, string argv[])
{
    // check number of arguments
    if (argc != 2)
    {
        printf("Please enter a valid number of agruments.\n");
        return 1;
    }
    
    // declare variables
    string key = argv[1];
    int key_length = strlen(key); // int equal to the number of letters in key
    int key_array[key_length]; // array with number of dimensions/slots equal to key_length
    int key_count = 0; // index position within key_array
    
    string orig_message = "";
    
    // check contents of key
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Please enter a key containing only alphabetic characters.\n");
            return 1;
        }
    }
    
    orig_message = GetString();
    
    for (int j = 0, n = strlen(orig_message); j < n; j++)
    {
        for (int i = 0, o = strlen(key); i < o; i++)
        {
            key_array[i] = toupper(key[i]) - 65;
        }
        
        if (isupper(orig_message[j]))
        {
            int upper = (((orig_message[j] -'A') + key_array[key_count % key_length]) % 26) + 'A';
            printf("%c", upper);
            key_count++;
        }
        
        else if (islower(orig_message[j]))
        {
            int lower = (((orig_message[j] - 'a') + key_array[key_count % key_length]) % 26) + 'a';
            printf("%c", lower);
            key_count++;
        }
        
        else if (!isalpha(orig_message[j]))
        {
            printf("%c", orig_message[j]);
        }
    }
    
    printf("\n");
    return 0;
}
