#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	printf("enter the character to check");
	scanf("%c",&c);
	if( c=='a' || c=='A' || c =='e' || c=='E' ||c=='i' ||c=='I'||c=='o'||c=='O'||c=='u'||c=='U' )
	printf("it is a vowel");
	else
	printf("it is consonent");
	getch();
}
