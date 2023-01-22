#include<iostream>
using namespace std;
/*
***     ***
**       **
*         *
**       **
***     ***
*/
int main(){
    int row;
    cout<<"row : ";
    cin>>row;
    //int counter = 0;
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<row-i ; j++){
            cout<<"*";
            //counter++;
        }
        for(int k=0;k<=i ; k++){
            cout<<" ";
        } 
        cout<<"\t";
        for(int k=0;k<=i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j<row-i ; j++){
            cout<<"*";
            //counter++;
        }cout<<endl;
    }
    for(int i = row-1 ; i>0;i--){
        for(int j = 0 ; j<row-i ; j++){
            cout<<"*";
            //counter++;
        }
        for(int k=0;k<=i ; k++){
            cout<<" ";
        } 
        cout<<"\t";
        for(int k=0;k<=i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j<row-i ; j++){
            cout<<"*";
            //counter++;
        }cout<<endl;
    
    }
    return 0;
}
