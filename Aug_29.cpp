#include <iostream>
using namespace std;

void findValue(int arr[],  int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int findIndex(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i+1;
        }

    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int target = 5;
    findValue(arr, 5, target);
    cout << "\nIndex is : " << findIndex(arr, 5, 5);
}