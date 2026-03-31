#include <iostream>
using namespace std;
void fib(int n){
    int a1 = 0; int a2 = 1;
    if (n == 0){
        cout << "Error" << endl;
    }
    if (n == 1){
        cout << a1 << endl;
    }
    if (n >= 2){
        cout << a1 << endl << a2 << endl;
    }
    for (int i = 2; i < n; i++){
        int a = a1 + a2;
        cout << a << endl;
        a1 = a2;
        a2 = a;
    }
}
int main(){
    int n; cout << "Insert your n = "; cin >> n;
    fib(n);
    cout << "Hello world";
    return 0;
}