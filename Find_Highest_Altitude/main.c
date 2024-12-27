#include <stdint.h>
int largestAltitude(int* gain, int gainSize) 
{
    int32_t Sum = 0;
    int32_t Max = 0;
    for(uint8_t i = 0; i < gainSize; i++)
    {
        Sum += gain[i];
        if(Max < Sum)
        {
            Max = Sum;
        }
    }
    return Max;
}