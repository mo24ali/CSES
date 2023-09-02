#include<stdio.h>
#include<stdlib.h>

int main(){
    char st[100];
    scanf("%s",st);
    int i;
    int ans = 1 , c=0;
    char l='A';
    char d;
    for(i = 0 ; st[i] != '\0' ; i++){
        d = st[i];
        if(d == l){
            ++c;
            ans = (c > ans) ? c : ans;
        }else{
            l = d;
            c = 1;
        }
    }
    printf("%d",ans);
}
