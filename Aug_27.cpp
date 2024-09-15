#include <iostream>
using namespace std;
//Ques1
int main()
{
    int x = 5;
    int *ptr = &x;
    cout << x << endl;
    cout << *ptr << endl;

//Ques2
    int arr[] = {1,2,3,4};
    int *ptra = arr;
    for(auto val: arr){
        cout << val<< endl;
    }

//Ques3
    int a = 5;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << *ptr2 << endl;
    cout <<  ptr1 << endl;
}
