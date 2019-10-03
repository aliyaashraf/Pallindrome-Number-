#include<stdio.h>
void main(){
int ans;
ans=palindromeTest();
printf("%d",ans);
}
int palindromeTest()
{
int m,rem,t,i,c=0,*ptr;

scanf("%d",&t);
ptr=(int *)malloc(t*sizeof(int));
for(i=0;i<t;i++){
int rev=0;
scanf("%d",ptr+i);
m=*(ptr+i);
while (m>0){
    rem=m%10;
    rev=(rev*10)+rem;
    m=m/10;

}


if(*(ptr+i)==rev){
    c++;
}

}
return c;
}


