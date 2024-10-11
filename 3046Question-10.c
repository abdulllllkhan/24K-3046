#include<stdio.h>
main(){
int n;
printf("enter size of array: ");
scanf("%d",&n);	
char a[n];
int i,k=0,j=n-1;
for( i=0;i<n;i++){
printf("enter character for index %d: ",i);
scanf(" %c",&a[i]);	
}
	

for(i=0;i<n;i++){
if(a[i]==a[j]){
	j--;
	k+=1;
}		
}	
if(k==n){
printf("is a palaindrome.");	
}	
else{
	printf("not a palindrome.");
}	
	
	
	
}
