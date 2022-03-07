#include<stdio.h>
void main()
{
int incoming,outgoing,bucksize,n,store=0;
printf("Enter bucketsize,outgoing rate and no of inputs");
scanf("%d%d%d",&bucksize,&outgoing,&n);
while(n!=0)
{
printf("Enter number of incoming packet size\n");
scanf("%d",&incoming);
printf("incoming packet size %d\n",incoming);
if(incoming<=(bucksize-store))
{
store+=incoming;
printf("Buket buffer size %d out of %d\n",store,bucksize);
}
else
{
printf("dropped %d no of packets\n",incoming-(bucksize-store));
printf("Bucket buffer size %d out of %d\n",store,bucksize);
store=bucksize;
printf("store value is %d\n",store);
}
store=store-outgoing;
printf("After outgoing %d packet left out of %d in buffer\n",store,bucksize);
n--;
}
}
