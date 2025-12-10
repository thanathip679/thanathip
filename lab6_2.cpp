#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    double y;
    y = x*M_PI/180;
    return y;
}

double rad2deg(double i){
    double j;
    j = i*180/M_PI;
    return j;
}

double findXComponent(double a, double b, double c, double d){
    double xc;
    xc = a*cos(c) + b*cos(d);
    return xc;
}

double findYComponent(double e, double f, double g, double h){
    double yc;
    yc = e*sin(g) + f*sin(h);
    return yc;
}

double pythagoras(double x1, double y1){
    double py;
    py = sqrt(pow(x1,2) + pow(y1,2));
    return py;
}

void showResult(double vl,double vd){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << vl << "\n";
    cout << "Direction of the resultant vector (deg) = " << vd << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}