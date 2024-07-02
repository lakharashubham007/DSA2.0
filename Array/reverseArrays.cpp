#include<iostream>

void reverseArray(int arr[], int arraylength) {
    int start = 0;
    int end = arraylength - 1;
    
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move indices towards the center
        start++;
        end--;
    }
}


void reverseArrayBitwise(int arr[], int arraylength) {
    int start = 0;
    int end = arraylength - 1;
    
    while (start < end) {
        // Swap elements at start and end indices without extra variable using XOR
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        
        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arraylength = sizeof(arr) / sizeof(arr[0]); // Calculate array length
    
    std::cout << "Original array: ";
    for (int i = 0; i < arraylength; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    reverseArray(arr, arraylength); // Reverse the array
    
    std::cout << "Reversed array: ";
    for (int i = 0; i < arraylength; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}


//time complexity is O(n).
//space complexity is O(1).