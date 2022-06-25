#include <REGX51.H>
#define but1 P1_0
#define but2 P1_5

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<125;j++);
	}
}



void main()
{
	char  so[11]= {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
	int i=0;
	while(1)
	{
		//tang khi nhan but 1
		if (but1==0)
		{
			P2=so[i+1];
			i++;
			delay(500);
			if(i>8){i=-1;}
		}
		

		//giam khi nhan but2
		if (but2==0)
		{	
			P2=so[i-1];
			i--;
			delay(500);
			if(i<1){i=10;}
		
		}
		

	}
	
}
