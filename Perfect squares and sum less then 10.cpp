#include <bits/stdc++.h>
using namespace std;

void perfectSquares(float l, float r)
{
 
    
    int number = ceil(sqrt(l));
 
    
    int n2 = number * number;
 

    number = (number * 2) + 1;
 
    while ((n2 >= l && n2 <= r)) {
 
      
        cout << n2 << " ";
 
       
        n2 = n2 + number;
 
        number += 2;
    }
}
 

int main()
{    int l,r;
    cout<<"Enter lower range:";
    cin>>l;
    cout<<"Enter highest range:";
    cin>>r;
    perfectSquares(l, r);
 
    return 0;
}
