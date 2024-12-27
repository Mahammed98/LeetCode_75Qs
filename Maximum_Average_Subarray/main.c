#include <stdint.h>
double findMaxAverage(int* nums, int numsSize, int k) 
{
    double Average =  0.0, Maximum = 0.0;
    int32_t Sum = 0;
    uint32_t Start = 0;
    uint32_t End = k-1;
    /*
        calculate the initial sum 
    */
    for(uint16_t i = 0; i < k; i++)
    {
        Sum += nums[i];
    }
    Maximum = (double)Sum/k;
    
    while(End < numsSize-1)
    {
        Sum -= nums[Start];
        Sum += nums[End+1];
        Average = (double)Sum / k;
        if(Maximum < Average)
        {
            Maximum = Average;
        } 
        Start++;
        End++;
    }

    return Maximum;
}