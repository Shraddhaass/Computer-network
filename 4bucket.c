#include<stdio.h>
void main()
{
int incoming,outgoing,buffsize,n,store=0,bucksize,drp;
printf("Enter no.of packets");
scanf("%d",&n);
printf("Enter buffer size\n");
scanf("%d",&buffsize);
printf("Enter outgoing\n");
scanf("%d",&outgoing);
while(n!=0)
{
printf("Enter number of packets\n");
scanf("%d",&incoming);
if(incoming<=(buffsize-store))
{
store+=incoming;
}
else
{
drp=(incoming-(buffsize-store));
printf("Dropped packets %d\n",drp);
store=buffsize;
}
store=store-outgoing;
n--;
}
}
