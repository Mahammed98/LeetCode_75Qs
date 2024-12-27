/*
    i used two pointers method 
*/
#include <stdint.h>
void moveZeroes(int* nums, int numsSize) 
{
    uint32_t p1 = 0, p2 = 1;
    uint32_t temp = 0;
    while(p2 < numsSize)
    {
        if(nums[p1] == 0 && nums[p2] == 0)
        {
            p2++;
        }
        else if(nums[p1] == 0 && nums[p2] != 0)
        {
            temp = nums[p1];
            nums[p1] = nums[p2];
            nums[p2] = temp;
            p1++;
            p2++;
        }
        else   // if both num1 and num2 not equal zero, or num1 != zero but num2 equal zero
        {
            p1++;
            p2++;
        }
    }
}