/*
Given a real number n, find the square root of n. For example, given n = 9, return 3.
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double n=25;
    double tol=0.00001;

    double step=0.5;
    double b=0;
    double e=n;
    double c=(b+n)*step;


    int i=0;

    double err=c*c-n;

    while(fabs(err)>tol){

        if( err>tol ){
            e=c;
            c=(b+c)*step;
        }else if( err<-tol ){
            b=c;
            c=(c+e)*step;
        }
        cout << i<< " : " << c << endl;
        err=c*c-n;

        ++i;
        if(i>200){
            break;
        }
    }
    cout << "res : "<< c << endl;
    cout << "sqr : "<< sqrt(n) << endl;
}
