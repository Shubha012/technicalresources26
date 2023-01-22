#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows : ";
    cin>>row;
    for(int i =1 ; i<=row ; i++){
        for(int j = 0 ; j<=row ; j++){
            if((row-j)<i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    return 0;
}
