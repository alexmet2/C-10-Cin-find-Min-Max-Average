#include <iostream>

using namespace std;

int main()
{
    int min = 0, max = 0;
    float ave = 0;
    int a[10]{};

    for (int i = 0; i < 10; i++) {
        cout << "Put a number in the spot of " << i + 1 << endl;
        cin >> a[i];
    }
    min = a[0];
    max = a[0];
    /*This is for the min*/
    for (int i = 1; i < 10; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    
    }
    /*This is for the max*/
    for (int o = 1; o < 10; o++) {
        if (a[o] > max) {
            max = a[o];
        }
    }
    /*This is for the average*/
    for (int x = 0; x < 10; x++) {
        ave += a[x];
    }
    ave /= 10;
    cout << "Your minimum is " << min << endl;
    cout << "Your maximum is " << max << endl;
    cout << "Your average is " << ave << endl;
}
