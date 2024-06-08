#include <iostream>
using namespace std;
int main () {
    int num;
    cin >> num;
    int n = num;
    int d, sum;
    while (num >0){
        d = num % 10;
        sum = sum + (d*d*d);
        num = num/10;

    }
    if (n == sum){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}