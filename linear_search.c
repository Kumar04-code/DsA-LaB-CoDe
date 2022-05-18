#include<stdio.h>
int main(){
    int i,is_found=0;
  int arr[]={10,20,30,40,50};
  int search=40;
  for(i=0;i<5;i++)
  {

      if(arr[i]==search)
      {
        is_found=1;
        break;
      }
  }
  if(is_found==1)
  {
      printf("no is found at  %d ",i);
  }
  else{
    printf("not found");
  }

}

