#include <iostream>
using namespace std;
int main()
{int n,r,reversedNumber=0,remainder;

    cout<<"Enter Your Number:";
    cin>>n;
    cout<<"The Digits are ";
	while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
   
    while(reversedNumber!=0)
    {
               r=reversedNumber%10;
               reversedNumber=reversedNumber/10;

               cout<<r<<",";
    }
    cout<<"\n";
    system("pause");
    return 0;
}