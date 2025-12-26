#include<stdio.h>
int main()
{
    int arr[5] = {5,8,4,6,2};
    for(int i = 1; i <= 5; i++)
    {
        int j = i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }

    }
     for(int k = 0; k < 5; k++)
        printf("%d  ",arr[k]);

}
