#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    cout << "Pattern 1" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cout << "*";

        }
        cout << endl;
    }
    cout << "Pattern 2" << endl;
    int num = 1;
    for (int i =1; i  <= n; i++){
        for (int j = 1; j <=i; j++){
            cout << num << " ";
            num += 1;

        }
        cout << endl;
    }
}