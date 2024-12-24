#include <stdint.h>
char * mergeAlternately(char * word1, char * word2)
{
    static uint8_t Result[201] = {0};
    uint8_t Counter_Word1 = 0, Counter_Word2 = 0;
    uint16_t Counter_Result = 0;

    while(word1[Counter_Word1] != '\0' || word2[Counter_Word2] != '\0')  
    {
        /*
            if first string didn't end, but second ended
        */
        if(word1[Counter_Word1] != '\0' && word2[Counter_Word2] == '\0')
        {
            Result[Counter_Result++] = word1[Counter_Word1++]; 
        }
        /*
            if second string didn't end, but first ended
        */
        else if(word1[Counter_Word1] == '\0' && word2[Counter_Word2] != '\0')
        {
            Result[Counter_Result++] = word2[Counter_Word2++]; 
        }
        else
        {
            Result[Counter_Result++] = word1[Counter_Word1++]; 
            Result[Counter_Result++] = word2[Counter_Word2++]; 
        }
    }// end while loop

    Result[Counter_Result] = '\0'; // terminator 
    return Result;
}