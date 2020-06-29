#include<iostream>
using namespace std;
int Isprime(int n);
int main()
{
	int n;              //getting input num from user
	cout<<"Enter a number";
	cin>>n;
	int i,flag=0;   
	for(i=2;i<=n/2;++i)
	{
		if(Isprime(i)==1)     //x+y=num....checking whether i and num-i are prime
		{
			if(Isprime(n-i)==1)
			{
				cout<<n<<"is the sum of"<<i<<"+"<<(n-i)<<"\n";
				flag=1;
			}
		}	
	}
	if(flag==0)
	{
		cout<<"The num can't be expressed as sum of two prime";
	}
	return 0;
}
//func. to check whether a num is prime or not (its checked from 2 till num/2 inorder to avoid repetition of the combination of prime nums).
int Isprime(int n)
{
	int i,flag1=1;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag1=0;
			break;
		}
	}
	return flag1;
}
