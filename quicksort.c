#include <stdio.h>

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb], start = lb, end = ub;
    int temp, loc;
    while (start < end)
    {
        while (a[start] <= pivot)
            start++;
        while (a[end] > pivot)
            end--;
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end;
}

void quicksort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);
        quicksort(a, loc + 1, ub);
    }
}
void main()
{
    int n, i, j, temp;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("\nSorted array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}