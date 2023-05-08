#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[100];
    int n, i, j, tmp;

    printf("Sort elements of array in ascending order:\n ");
    printf("----------------------------------------------\n");

    printf("\nSize of array:");
    scanf("%d", &n);

    printf("\n%d elements in the array-\n\n",n);

    for(i=0;i<n;i++)
    {
        printf("element-%d=",i);
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d \n", arr1[i]);
    }

    return 0;
}
