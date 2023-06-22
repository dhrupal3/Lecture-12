#include<stdio.h>

struct distance
{
	int feet,inch;
};

main()
{
	struct distance a,b,s;
	int f,i;
	
	a.feet;
	a.inch;
	b.inch;
	b.feet;
	
	printf("Enter Your First Feet Value = ");
	scanf("%d",&a.feet);
	
	printf("Enter Your First Inch Value = ");
	scanf("%d",&a.inch);
	
	printf("\n");
	
	printf("Enter Your Second Feet Value = ");
	scanf("%d",&b.feet);
	
	printf("Enter Your Second Inch Value = ");
	scanf("%d",&b.inch);
	
	s.feet=a.feet+b.feet;
	s.inch=b.inch+a.inch;
	
	while(s.inch>12)
	{
		s.feet++;
		s.inch-=12;
	}

	printf("Your Feet = %d\n",s.feet);
	printf("Your Inch = %d",s.inch);
}
