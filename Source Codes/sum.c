/* C Program to find sum of digits of a given number*/
/* 03rd July 2020 23:49:43 */
#include<stdio.h>
int sum(int n){
    int Sum=0;
    while(n!=0){
        Sum=Sum+n%10;
        n=n/10;
    }
    return Sum;
}
/*
// By recursion
int sumd(int n){
    
}
*/

int main(){
    int t;
    scanf("%s",&t);
    printf("%d",sum(t));
    return 0;
}