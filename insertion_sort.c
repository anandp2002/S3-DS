#include <stdio.h>
void main()
{
    int n, i, j, temp;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\nSorted array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}