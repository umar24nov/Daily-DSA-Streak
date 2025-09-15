#include <iostream>
using namespace std;

string replaceChar(string str, char ch, char x){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ch)
            str[i] = x;
    }
    return str;
}

int main (){
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    char ch;
    cout << "Char to replace: ";
    cin >> ch;
    char x;
    cout << "Char to replace with: ";
    cin >> x;
    cout << (replaceChar(str,ch, x));
    return 0;
}