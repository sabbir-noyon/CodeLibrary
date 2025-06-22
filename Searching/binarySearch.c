#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main ()
{   
    int n;
    scanf("%d ", &n);
    int *arr;
    arr = (int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int key;
    scanf("%d", &key);
    printf("%d", binarySearch(arr, n, key));
    
    return 0;
}