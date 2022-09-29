#include<iostream>
using namespace std;
int main()
{
    int n,i,m,a[10],temp,j,sum,dif,x,y;
     cout<<"Enter the size of an array ";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array of elements = ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nM = ";
    cin>>m;

    cout<<"Maximum Number = "<<a[m];
    x=a[m];
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
