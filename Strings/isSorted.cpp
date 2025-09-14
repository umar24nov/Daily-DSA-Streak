#include <iostream>
using namespace std;

void isSorted(string str){
    bool flag = true;
    for(int i = 0; i < str.size()-1; i++){
        if(str[i] > str[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Sorted!";
    }
    else cout << "Not Sorted!";
    return;
}

int main (){
    string str;
    cout << "Enter a String : ";
    getline(cin, str);
    isSorted(str);
    return 0;
}