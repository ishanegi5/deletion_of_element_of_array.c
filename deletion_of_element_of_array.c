#include<stdio.h>
void main()
{ int arr[5];
printf("Enter 5 numbers: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

for(int j=0;j<5;j++){
   if(j==2||j==4){
       continue;
   }
   printf("%d ",arr[j]);
}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
