#include<iostream>
using namespace std;

int main(){
    
    int n = 1, E = 0 , O = 0;
    while (n != 0){
    cout << "Enter an integer: ";
    cin >> n;
    if (n != 0){
    if (n%2 == 0){
        E++;
    }else{
        O++;
    }
    }
    }
    
    
    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O;
    return 0;
}