#include<stdio.h>
char c[1010][1010];
char a[13]={'.',',','-','=','+','*','?','&','%','A','0','#','@'};
int main()
{
	FILE*in=fopen("input.bmp","rb");
	FILE*out=fopen("output.txt","w");
	int i,j;
	for(i=0;i<54;i++)getc(in);
	for(i=0;i<210;++i)fgets(c[i],sizeof c,in);
	for(i=209;i>=0;i--)
	{
		for(j=0;j<210;j++)
		{
		    int b=c[i][j*3];
		    int g=c[i][j*3+1];
		    int r=c[i][j*3+2];
			int gray=(int)(r*0.3)+(int)(g*0.59)+(int)(b*0.11);
			fprintf(out,"%c",a[12-gray/20]);
		}
		fprintf(out,"\n");
	}
	return 0;
}
