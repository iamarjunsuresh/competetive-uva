#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int solve();

int main()
{
int t;
scanf("%d",&t);
while(t)
{

solve();
t--;}

return 0;
}


int solve()
{
int s,p;
scanf("%d%d",&p,&s);

float perc[s][p];
int t[s];
int total=0;

for(int i=0;i<s;i++)
{
for(int j=0;j<p;j++)
{
scanf("%f",&perc[i][j]);


}
scanf("%d",&t[i]);
total+=t[i];

}
printf("%d",total);




float rs[p];


float max1=-1.0f,max2=-1.0f;
int id1=0,id2=0;
memset(rs,0,sizeof(float)*p);
for(int j=0;j<p;j++)
{
for(int i=0;i<s;i++)
{

rs[j]+=perc[i][j];
//printf("%f\n",rs[j]);
}

rs[j]/=s;
printf("%f\n",rs[j]);
if(max1<rs[j])
{max2=max1;
id2=id1;
max1=rs[j];
id1=j;
}
else if(max2<rs[j])
{

max2=rs[j];
id2=j;

}
if(max1>=50.1f){
printf("%d %.0f\n",j+1,max1*total/100);
printf("\n");
return 0;}


}

printf("%d %.0f\n",id1+1,(float)max1*total/100);
printf("%d %.0f\n",id2+1,(float)max2*total/100);
printf("\n");




return 0;
}
