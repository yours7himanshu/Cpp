#include<iostream>
using namespace std;


int main(){

cout<<"Enter the value/n";
int n;
cin>>n;

int i = 1;
while(i<=n){
    char ch = 'A'+i-1;
    int j = 1;
   while(j<=n){
    cout<<ch<<" ";
    j=j+1;
   }
   cout<<endl;
   i=i+1;
    
}


}