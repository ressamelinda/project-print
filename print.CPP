#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<fstream.h>

main()
{
ofstream file;
file.open("test.doc");
file<<"Hello Printer...";
file.open("test.db");
file.close();
printf("Silahkan Tekan Enter..");
getch();
system("winword/p test.doc");
printf("\nPrinting....");
getch();
}
