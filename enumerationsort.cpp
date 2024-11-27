#include <iostream>
#include <vector>

using namespace std;

void enumerationsort(vector<int>& arr);

int main() {
    vector<int> arr = {3, 5, 1, 2, 4};
    cout << "Original Array:\n";
    for (auto& i: arr) {
        cout << i << " ";
    }
    cout << endl;
    enumerationsort(arr);
    cout << "\nSorted Array\n";
    for (auto& i: arr) {
        cout << i << " ";
    }
    cout << endl;
}

void enumerationsort(vector<int>& arr) {
    int n = arr.size();
    vector<int> sortedArr(n, 0);

    for (int i = 0; i < n; i++) {
        int index = 0;
        int value_i = arr[i];
        for (int j = 0; j < n; j++) {
            int value_j = arr[j];
            if (value_j < value_i || (value_j == value_i && j < i))
                index++;
        }
        sortedArr[index] = value_i;
    }
    for (int i = 0; i < n; i++)
        arr[i] = sortedArr[i];
}