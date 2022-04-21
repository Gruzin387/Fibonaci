#include<iostream>
using namespace std;

int main()
{
    int n;
    int f0 = 0, f1 = 1, f;

    cout << "Podaj ile chcesz wypisać wyrazów ciągu fibonacciego: ";
    cin >> n;
    for (int i = 0;i < n;i++) {
        if (i > 1) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
            
        }
        else{
            f = i;
        }
        cout << f << " ";
    }
   

    return 0;
}