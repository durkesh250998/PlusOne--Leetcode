#include<stdio.h>
void plusOne(int arr[],int a);
int main(){
      int a;
      scanf("%d",&a);
      int arr[a];
      for(int i=0;i<a;i++){
                   scanf("%d",&arr[i]);
      }
      plusOne(arr,a);
}
void plusOne(int arr[],int a){
                     int i,result=0;;
                     for(i=0;i<a;i++){
                                   result*=10;
                                   result+=arr[i];           // 	1	2	3
              }
                     printf("%d",result+1);
}
                     
