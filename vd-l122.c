#include<stdio.h>

struct student{
	int r_n,c_m,m_m,p_m;
	char name[100];
};

main()
{
	int sum,per;
	struct student a;
	
	a.c_m;
	a.m_m;
	a.p_m;
	a.r_n;
	
	printf("Enter Roll No = ");
	scanf("%d",&a.r_n);
	
	printf("Enter Name = ");
	scanf("%s",&a.name);
	
	printf("Enter Physics Marks = ");
	scanf("%d",&a.p_m);
	
	printf("Enter Chemistry Marks = ");
	scanf("%d",&a.c_m);
	
	printf("Enter Maths Marks = ");
	scanf("%d",&a.m_m);
	
	sum=a.c_m+a.m_m+a.p_m;
	
	per=sum%3;
	
	printf("Your Percentage = %d",per);
}
