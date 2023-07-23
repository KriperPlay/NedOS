#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void Soc()
{
	cout << "Git-https://github.com/KriperPlay" << endl;
	cout << "YT-https://www.youtube.com/channel/UCdnuUUfZ3dGg9pCaQCQHIzQ" << endl;
}


void Calc()
{
	printf("1 - Minus, 2 - +, 3 - *, 4 - /\n");
	int func;
	cin >> func;
	int a;
	int b;
	//printf("-,+,*,/?\n");
	cin >> a;
	cin >> b;

	if (func == 1)
	{
		int res = a - b;
		printf("Result:\n");
		printf("%d\n", res);
	}
	if (func == 2)
	{
		int res = a + b;
		printf("Result:\n");
		printf("%d\n", res);
	}
	if (func == 3)
	{
		int res = a * b;
		printf("Result:\n");
		printf("%d\n", res);
	}
	if (func == 4)
	{
		int res = a / b;
		printf("Result:\n");
		printf("%d\n", res);
	}
}

void Info()
{
	printf("commands:\n");
	printf("info, calculator, date, dir-Files in directories, InfoOS\n");
	printf("logo, clear, kalendar(does not work), SN-Social networks\n");
	printf("exit\n");


}

void INFOOS()
{
	printf("OSINFO:\n");
	printf("NedoOS v1\n");
	printf("Programming language: C++\n");
	printf("Deloveper: N1ne\n");

}

void Logo2()
{
    char L1[130] = "███╗░░██╗███████╗██████╗░░█████╗░░██████╗";
    char L2[130] = "████╗░██║██╔════╝██╔══██╗██╔══██╗██╔════╝";
    char L3[130] = "██╔██╗██║█████╗░░██║░░██║██║░░██║╚█████╗░";
    char L4[130] = "██║╚████║██╔══╝░░██║░░██║██║░░██║░╚═══██╗";
    char L5[130] = "██║░╚███║███████╗██████╔╝╚█████╔╝██████╔╝";
    char L6[130] = "╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░╚═════╝░";
    printf("%s\n", L1);
    printf("%s\n", L2);
    printf("%s\n", L3);
    printf("%s\n", L4);
    printf("%s\n", L5);
    printf("%s\n", L6);

}

void Secret()
{
	printf("You found secret\n");
	printf("███╗░░██╗░░███╗░░███╗░░██╗███████╗\n");
	printf("████╗░██║░████║░░████╗░██║██╔════╝\n");
	printf("██╔██╗██║██╔██║░░██╔██╗██║█████╗░░\n");
	printf("██║╚████║╚═╝██║░░██║╚████║██╔══╝░░\n");
	printf("██║░╚███║███████╗██║░╚███║███████╗\n");
	printf("╚═╝░░╚══╝╚══════╝╚═╝░░╚══╝╚══════╝\n");

}

int main()
{
	string key;

	printf("Hello User! I NedoOS, enter info\n");
	do
	{
		cout << "User: ";
		cin >> key;
		if (key == "info") Info();
		if (key == "dir") system("dir");
		if (key == "clear") system("clear");
		if (key == "999") Secret();
		if (key == "calculator") Calc();
		if (key == "InfoOS") INFOOS();
		if (key == "date") system("date");
		if (key == "kalendar"){
			cout << "In Deloveping!!!" << endl;

		}
		if (key == "logo") Logo2();
		if (key == "SN") Soc();
	} while (key != "exit");
	
	return 0;
}
