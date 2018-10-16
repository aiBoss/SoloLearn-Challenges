#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int z);

int main(){
 int a;
 cout<<"Enter a Number:";
 cin>>a;
 if(a>1 && is_prime(a)){
   cout<<endl<<a<<" is a prime number."<<endl;
   int i,j=a,sum=0;
   while(a>0){
    i=a%10;
    sum+=i;
    a=a/10;
   }
   if(is_prime(sum))
    cout<<j<<" is a howling prime."<<endl;
   else
    cout<<j<<" is not a howling prime."<<endl;
 }
 else if(a==1)
  cout<<a<<" is neither prime nor composite."<<endl;
 else
  cout<<a<<" is not a prime number."<<endl;
 return 0;
}

bool is_prime(int z){
 int p=0;
 if(z%2==0)
  return false;
 for(int i=3; i<=(int)sqrt(z); i+=2){
  if(z%i==0)
   retun false;
 }
 return true;
}
