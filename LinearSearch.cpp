
#include <iostream>

using namespace std;


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found in the array
}


int main() {
    int myArray[] = { 4, 2, 9, 7, 1, 5 };
    int targetValue = 4;
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int result = linearSearch(myArray, arraySize, targetValue);

    if (result != -1) {
        cout << targetValue << " found at index " << result << endl;
    }
    else {
        cout << targetValue << " not found in the array" << endl;
    }

    return 0;
}