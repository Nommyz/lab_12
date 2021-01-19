#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[])
{
    int i;
    double sum=0,sum2=0,sum3=1,sum4=0,max,min;
   
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
        sum2 = sum2+pow(a[i],2);
        sum3 = sum3*a[i];
        sum4 = sum4+1/a[i];
    }
    b[0] = sum/n;
    b[1] = (sqrt((sum2/n)-pow(b[0],2))); 
    b[2] = pow(sum3,(float)1/n);
    b[3] = n/sum4;
    max = a[0];
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    b[4] = max;
    b[5] = min;

}