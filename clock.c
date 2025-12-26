#include<stdio.h>
int main(){
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
	int sumtime = (h*3600) + (m*60) + s;
	printf("Next time:");
	int n_time;
	scanf("%d",&n_time);
	
	int hn,mn;
	int sumn = sumtime + (n_time * 60);
	hn = sumn/3600;
	sumn %= 3600;
	mn = sumn/60;
	sumn %= 60;
	printf("hour:%d\nminute:%d\nsecond:%d\n",hn,mn,sumn);
}