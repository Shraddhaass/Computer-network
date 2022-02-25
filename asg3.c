#include<stdio.h>
void main()
{
int data[30],i,c1,c2,c3,recv[10];
printf("Enter message");
scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[4]);
data[5] = data[0]^data[1]^data[4];
data[6] = data[4]^data[2]^data[0];
data[3] = data[2]^data[1]^data[0];
printf("Encoded bits are...");
for(i=0;i<7;i++)
{
printf("%d",data[i]);
}
printf("Enter the encoded bit....");
for(i=0;i<7;i++);
{
scanf("%d",&recv[i]);
c1 = recv[6]^recv[4]^recv[2]^recv[0];
c2 = recv[5]^recv[4]^recv[1]^recv[0];
c3 = recv[3]^recv[2]^recv[1]^recv[0];
int c=c3*4+c2*2+c1;
if(c==0)
{
printf("there is no error");
}
else
{
printf("Error in position %d",c);
}
}
}
