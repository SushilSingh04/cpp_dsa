#include <iostream>
#include <string>
using namespace std;

int stringLength(const string &str){
    int length{0};
    for(auto c: str){
        if(c != '\0') length++;
    }

    return length;
}

int countCharacter(const string &str, char ch){
    int count{0};
    for(auto c: str){
        if(c == ch) count++;
    }

    return count;
}

string concatenateStrings(string &str1, string &str2){
    string concat = str1+str2;
    return concat;
}

int main(){
    string test1 = "Hello, World!";
    cout << stringLength(test1) << endl;

    char ch = 'l';
    cout << countCharacter(test1, ch) << endl;

    string test2 = "Hello, ";
    string test3 = "World!";
    cout << concatenateStrings(test2, test3);
}