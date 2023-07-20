#include <iostream>
using namespace std;

void zigZag(int arr[], int n) {
    bool flag = true; // 'flag' indicates if the current element should be less than or greater than the next element

    for (int i = 0; i < n - 1; i++) {
        if (flag) {
            // If 'i' is even and arr[i] >= arr[i+1], then swap them
            if (arr[i] >= arr[i + 1])
                swap(arr[i], arr[i + 1]);
        } else {
            // If 'i' is odd and arr[i] <= arr[i+1], then swap them
            if (arr[i] <= arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        flag = !flag; // Flip the flag for the next element
    }
}

int main() {
    int N = 7;
    int arr[] = {4, 3, 7, 8, 6, 2, 1};

    cout << "Original array: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    
    zigZag(arr, N);

    cout << "\nZigzag array: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    
    return 0;
}
