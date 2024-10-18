#include <iostream>
using namespace std;

int base = 0;
int x; 

void addup(int x){
    srand(time(0));
    for(int i = 0; i < x; ++i){
        int randnum = rand() % 10 + 1;
        if (randnum <= 5){
            cout << randnum << '\n';
            base = base + 0;
        } else if (randnum >= 6 && randnum < 10){
            cout << randnum << '\n';
            base = base + 1;
        } else if (randnum == 10){
            cout << randnum << '\n';
            base = base + 2;
        } else {
            cout << "panic!! rolling error!!";
        }
    }
    cout << base;
}

int main(){
    cout << "How many dice would you like to roll?\n";
    cin >> x;
    addup(x);
    return 0; 
}