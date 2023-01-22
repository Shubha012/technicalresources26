#include<iostream>
using namespace std;
int main(){
    int row,temp,first=0,sec =1;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<0<<"\t";
    cout<<1<<"\n";
    for(int i = 1 ; i<row ; i++){
        for(int j=0 ; j<=i ; j++){
           temp = first+sec;
           cout<<temp<<"\t";
           first = sec;
           sec = temp;
        }cout<<endl;
    }
    return 0 ;
}
