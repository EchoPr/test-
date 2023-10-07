#include <iostream>
#include "vector2d.h"

using namespace std;


int main(){
    Vector2D a;
    cout << a.x << endl;

    a += Vector2D(1, 2);
    cout << a.x << endl;

    Vector2D b(1, 2);
    cout << b << endl;   

    cin >> a;
    cout << a;

    // Vector2D c = a + b;
    // cout << c << endl;
}