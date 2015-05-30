#include<stdio.h>
#include<stdlib.h>

main()
{
	char ipstring[16];
	
	char massiv1[4];
	char massiv2[4];
	char massiv3[4];
	char massiv4[4];
	
	int octet1;
	int octet2;
	int octet3;
	int octet4;
	
	unsigned int point_counter = 0;
	unsigned int massiv_counter = 0;
	
	printf("Enter IP adress : ");
	scanf("%s", &ipstring);
	
	for(int i = 0;i < 16;i++)
	{
		
		if(ipstring[i] == '.')
		{
			point_counter++;
			massiv_counter = 0;
			continue;
		}
		
		if(ipstring[i] == '\0')
		{	
			break;
		}
		
		if(point_counter == 0)
		{
			massiv1[massiv_counter] = ipstring[i];
			massiv_counter++;
			continue;
		}
		
		if(point_counter == 1)
		{
			massiv2[massiv_counter] = ipstring[i];
			massiv_counter++;
			continue;
		}
		
		if(point_counter == 2)
		{
			massiv3[massiv_counter] = ipstring[i];
			massiv_counter++;
			continue;
		}
		
		if(point_counter == 3)
		{
			massiv4[massiv_counter] = ipstring[i];
			massiv_counter++;
			continue;
		}
	}
	octet1 = atoi(massiv1);
	octet2 = atoi(massiv2);
	octet3 = atoi(massiv3);
	octet4 = atoi(massiv4);
	printf("\nmassiv1[4]: %d\n", octet1);
	printf("\nmassiv2[4]: %d\n", octet2);
	printf("\nmassiv3[4]: %d\n", octet3);
	printf("\nmassiv4[4]: %d\n", octet4);
}
