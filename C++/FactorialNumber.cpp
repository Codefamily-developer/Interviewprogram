#include<iostream>
using namespace std;

int Factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n * Factorial(n-1);
}

int main()
{
    int n;
    cout<<"\nEnter the you want factorial of : ";
    cin>>n;
    int f = Factorial(n);
    cout<<"\nThe factorial of "<<n<<" = "<<f<<endl<<endl;
    return 0;
}