#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int x = 0;
    int xx = n - 1;

    while (x < xx)
    {
        int a = (x + xx) / 2;


        if (nums[a] < nums[xx])
        {
            xx = a;
        }
        else
        {
            x = a + 1;
        }
    }

    return nums[x];
}
