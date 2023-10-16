#include<iostream>
using namespace std;
//Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns
int main()
{
    int m=5;
    int n=5;
    int arr[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j] = 10;
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}
