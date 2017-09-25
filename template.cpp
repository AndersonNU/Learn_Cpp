#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a+b;
}

template <class T, class U>
T smaller(T a, U b) {
    return (a < b ? a : b);
}


int main () {
    int x=7, y=15;
    cout << sum(x, y) << endl;

    x=72;
    double z=15.34;
    cout << smaller(x, z) << endl;

}

