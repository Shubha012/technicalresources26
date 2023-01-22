#include<iostream>
using namespace std;
int main(){
    int row ;
    cout<<"Enter number of rows : ";
    cin>>row;
    for(int i = 1; i<= row ; i++){
        for(int j = 0 ; j<=row-i ; j++){
            cout<<"  ";
        }
        for(int k=1 ; k<= 2*i-1 ; k++ ){
            if((k==1) || (k==2*i-1) ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    for(int i = row-1 ; i>0 ; i--){
        for(int j = 0 ; j<=row-i ; j++){
            cout<<"  ";
        }
        for(int k=1 ; k<= 2*i-1 ; k++ ){
            if((k==1) || (k==2*i-1) ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;   
    }
    return 0;
}
