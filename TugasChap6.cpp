#include <bits/stdc++.h>
using namespace std;

const double PI = 3.1416;

double radius(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

double circumference(double r){
    return 2 * PI  * r;
}

double area(double r){
    return PI * r * r;
}

int main() {
    double x1, x2, y1, y2;
    
    cout<<"Input Koordinat (x1 y1): ";
    cin>>x1>>y1;
    cout<<"Input Koordinat (x2 y2): ";
    cin>>x2>>y2;

    double r = radius(x1, x2, y1, y2);

    cout<<"Jari-jari: "<<r<<endl;
    cout<<"Diameter : "<< 2 * r << endl;
    cout<<"Keliling: "<<circumference(r)<<endl;
    cout<<"Luas: "<<area(r)<<endl;

    return 0;
}