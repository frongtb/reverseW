#include<stdio.h>
#include<conio.h>
#include<string.h>
char* reverse(char *);
int main(int argc,char *argv[])
{
	char check;
	char str[80];
	char *str_ptr;
	printf_s("Enter String : ");
	gets_s(str);
	str_ptr = reverse(str);
	printf_s("\nReverse string is ");
	puts(str_ptr);
	_getch();

	printf_s("\nDo you want to reverse word again\n");
	printf_s("Yes(press Y) or No(press any key) : ");
	check = _getche();
	if (check == 'Y')
	{
		while (check != 'E')
		{
			printf_s("\nEnter String : ");
			gets_s(str);
			str_ptr = reverse(str);
			printf_s("\nReverse string is ");
			puts(str_ptr);
			_getch();
			printf_s("Continue(press any key) or Exit(press E) : ");
			check = _getche();
		}
	}
}

char* reverse(char* string)
{
	char ch;
	int x, y;
	for (x=0,y=strlen(string)-1;x<y;x++,y--)
	{
		ch = *(string + y);
		*(string + y) = *(string + x);
		*(string + x) = ch;
	}
	return string;
}

