#include <iostream>
using namespace std;

int main()
{

    int n=0, a=1, b=1, c=1;
    cin>> n;
    if (n>=1) {

    cout<<a<< endl;

    for(;c<=n;){

        cout<<c<<endl;
        c=a+b;
        a=b;
        b=c;

    }
    }



    return 0;
}
