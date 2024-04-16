// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == value)
                count++;
        }
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
    int count = 0;
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == value)
        {
            count++;
            left++;
            right--;
        }
        else if (sum < value)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int countPairs3(int *arr, int len, int value)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int complement = value - arr[i];
        int index = binarySearch(arr, i + 1, len - 1, complement);
        if (index != -1)
            count++;
    }
    return count;
}
