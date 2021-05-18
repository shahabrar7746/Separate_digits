#include <iostream>
using namespace std;
int main()
{int n,reversedNumber=0,remainder;

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
               n=reversedNumber%10;
               reversedNumber=reversedNumber/10;

               cout<<n<<",";
    }
    cout<<"\n";
    system("pause");
    return 0;
}
