#include <iostream>
using namespace std;

int main(){

int num;
int num1=1;
int num2=1;
int sum=0;

cout<<"Enter till what number you want to find fibonaci sequence: ";
cin>>num;

//cout<<num2<<endl;

for(int i=0 ; i<num ; i++){

sum=num1+num2;

cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

num1=num2;

num2=sum;

//i++;

}


return 0;

}
