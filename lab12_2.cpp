#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool a[][M]) 
{
    int i,j;
    for(j=0;j<72;j++)
    {
        cout << '-';
    }
    cout << '\n';
    for(i=0;i<30;i++)
        for(j=0;j<71;j++)
        {
            switch(j)
            {
                case 0:
                    cout << '|';
                    break;
                case 70:
                    cout << '|';
                    cout << '\n';
                    continue;
                    
            }
            if(a[i][j]==0)
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
            }
            
        }
      for(j=0;j<72;j++)
    {
        cout << '-';
    }
   cout << "\n";
}
void updateImage(bool a[][M],int b,int c,int d)
{
    int i,j;
    for(i=0;i<N;i++)
     for(j=0;j<M;j++)
     {
        if(sqrt(pow((i-c),2)+pow((j-d),2)) <= b-1)
        {
            a[i][j] = 1;
        }
      
     }
}
