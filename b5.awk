BEGIN{
count=0
sent1=0
sent2=0
received=0
}
{
if($1=="d")
{
count++;
}
else if($1=="+" && $3==1 && $4==2)
{
sent1++;
}
else if($1=="+" && $3==0 && $4==2)
{
sent2++;
}
else if($1=="r" && $3==2 && $4==3)
{
received++;
}
}
END{
printf"\nPacket sent from source node 1:%d",sent1;
printf"\nPacket sent from source node 0:%d",sent2;
printf"\nPacket received:%d",received;sent=sent1+sent2;
printf"\nPacket delivery Ratio:%2f\n",(received/sent)*100;
}
