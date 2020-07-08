/* Sign Flipping */
/* Code Forces Global Round 09 */
/* Practice 06th July 2020 22:11:42 */

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int b[n];
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]>0){
                    b[i]=a[i];
                }
                else{
                    b[i]=-a[i];
                }
            }
            else if(i%2==1){
                if(a[i]>0){
                    b[i]=-a[i];
                }
                else{
                    b[i]=a[i];
                }
            }
            printf("%d ",b[i]);
        }
        printf("\n");

    }
}