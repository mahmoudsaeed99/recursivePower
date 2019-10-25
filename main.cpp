#include <iostream>

using namespace std;
int pow(int a,int n){
if (n==0)
  return 1;
else
    return a * pow (a, n-1);
}
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
void main_(){
	int a;
    int n,z;
    cout<<" a^n"<<endl;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"which equation you want to use"<<endl;
    cout<<"1-by: a * pow (a, n-1)"<<endl;
    cout<<"2-by: power(x, y / 2) * power(x, y / 2)"<<endl;
    cin>>z;
    if(z==1){
    cout<<pow(a,n);
    }
    else{
        cout<<power(a,n)<<endl;
    }
}
int main()
{
    main_();

    return 0;
}
