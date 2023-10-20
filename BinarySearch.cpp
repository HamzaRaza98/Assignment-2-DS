#include <iostream>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found, return the index.
        }
        if (arr[mid] < target) {
            left = mid + 1; // Adjust the left boundary.
        }
        else {
            right = mid - 1; // Adjust the right boundary.
        }
    }

    return -1; // Target not found in the array.
}

int main() {
    int myArray[] = { 1, 2, 4, 7, 9, 10, 15 };
    int targetValue = 7;
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int result = binarySearch(myArray, arraySize, targetValue);

    if (result != -1) {
        std::cout << targetValue << " found at index " << result << std::endl;
    }
    else {
        std::cout << targetValue << " not found in the array" << std::endl;
    }

    return 0;
}
