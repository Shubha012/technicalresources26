#include<iostream>
using namespace std;
int main(){
    int row,count=1;
    cout<<"Enter number of rows : ";
    cin>>row;
    for(int i = 1 ; i<=row ; i++){
        for(int j=0 ; j<i ;j++){
            cout<<count<<" ";
            count++;
        }cout<<endl;
    }
    return 0;
}
