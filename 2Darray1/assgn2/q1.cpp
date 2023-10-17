#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout<<"Enter rows of matrix: ";
    cin>>m;
    cout<<"Enter columns of matrix: ";
    cin>>n;
    int a[m][n];

    cout<<"enter matrix: "<<endl;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
           cin>>a[i][j];
        }
        
    }

    cout<<"Output: "<<endl;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(i==j || i+j==n-1)
           {
                cout<<a[i][j]<<" ";
           }
           else cout<<" ";
        }
        cout<<endl;
    }
}