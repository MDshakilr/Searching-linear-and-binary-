#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int value=6;

    int arr[]= {5,2,10,6,7,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool found =false;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            cout<<"value found:"<<arr[i];
            found=true;
            break;
        }
        if (!found)
        {
            cout << "Value not found\n";
        }
    }
}
/*
#include <iostream>
using namespace std;

bool searchValue(int arr[], int size, int value, int index) {
    // Base case: If index reaches beyond the array size, value not found
    if (index >= size) {
        return false;
    }

    // If the current element matches the value, return true
    if (arr[index] == value) {
        cout << "Value found: " << arr[index] << endl;
        return true;
    }

    // Recursive call to search in the rest of the array
    return searchValue(arr, size, value, index + 1);
}

int main() {
    int value = 6;
    int arr[] = {5, 2, 10, 6, 7, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive function to search for the value
    if (!searchValue(arr, size, value, 0)) {
        cout << "Value not found" << endl;
    }

    return 0;
}*/
