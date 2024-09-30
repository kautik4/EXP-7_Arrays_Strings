#include<iostream>
using namespace std;
int main(){
    int x[5],sum=0,avg;
    cout<<"Enter five elements ";
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+x[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<sum/5;

}
/*
Enter five elements 1
2
3
4 
Sum is: 15
Average is: 3
*/