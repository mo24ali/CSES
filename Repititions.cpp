#include<iostream>

using namespace std;

int main(){
    string st;
    cin >> st;
    int ans = 1 , c = 0;

    char l = 'A';
    for(char d : st){
        if(d == l){
            ++c;
            ans = max(c,ans);
        }
        else{
            l=d ;
            c = 1;
        }
    }
    cout << " "<< ans<<endl;;

}
