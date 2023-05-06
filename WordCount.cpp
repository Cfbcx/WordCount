#include<stdio.h>
#include<string.h>
int main(int argc,char *str []){

	int countc = 0;
	int countw = 0;
	char str2[2][10000];
	
	FILE *fp,*fp2;
	fp = fopen(str[2],"r");
	
	fgets(str2[0],10000,fp);

	int sum = strlen(str2[0]);
	if(sum != 0)
	{
		countw++;
	}
	for(int i = 0; i < sum; i++)
	{
		if(str2[0][i] == ',')
		{
			countw++;
		}
		if(str2[0][i] != ' ')
		{
			countc++;
		}
		else
		{
			countw++;
		}
	}
	if(str[1][1] == 'c')
	{
		printf("%d",countc);
	}
	else if (str[1][1] == 'w')
	{
	printf("%d",countw);
	}
	fclose(fp);
	return 0;
}
