#include <iostream>
#include <string>
#include <cctype>
#include <climits>
using namespace std;
//findMax()
int findMax(const int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }

    return max;
}
// is_pallindrome()
bool is_pallindrome(const string &str){
    int start = 0;
    int end = str.length()-1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

void removeAllWhiteSpaces(string &str){
    string s2;
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i])){
            s2 += tolower(str[i]);
        }
        else if(isalpha(str[i])){
            s2 += str[i];
        }
    }
    str = s2;
}

int main()
{
    string str = "  ,mammam";
    cout << boolalpha;
    removeAllWhiteSpaces(str);
    if(is_pallindrome(str)) cout << "It is a palindrome";
    else cout << "It is not a palindrome";
    cout << endl;
    
    int arr[] = {1,2,3,4,5};
    cout << findMax(arr, 5);
}
