#include<iostream.h>
#include<conio.h>
#include "empmaste.cpp";
#include<fstream.h>
//void main()
void salary()
{
clrscr();
int a,b;
gotoxy(0,4);
textcolor(2);
cprintf("Enter emp code of employeer:");
cin>>a;
emp s12;
fstream file12;
file12.open("employee.txt",ios::in|ios::binary);
file12.read((char*)&s12,sizeof(s12));
while(!file12.eof())
	{
	if(s12.code()==a)
		{
		clrscr();
		gotoxy(5,4);
		cprintf("\nEmployee details:\n");
		s12.printemp();
		gotoxy(1,19);
		cprintf("Enter days of attendance:");
		cin>>b;
		gotoxy(28,19);
		cprintf(" ||");
		gotoxy(33,19);
		cprintf("Basic salary::");
		cout<<s12.dsalary()*b;
	float sal=s12.dsalary()*b;

  gotoxy(3,21);
  cprintf("BASIC");
  gotoxy(3,22);
  cout<<sal;

  gotoxy(12,21);
  cprintf("DA");
  gotoxy(12,22);
  cout<<sal*0.05;

  gotoxy(21,21);
  cprintf("TA");
  gotoxy(21,22);
  cout<<"800";

  gotoxy(30,21);
  cprintf("DAonTA");
  gotoxy(30,22);
  cout<<0.05*800;

  gotoxy(39,21);
  cprintf("RA");
  gotoxy(39,22);
  cout<<0.1*sal;

  gotoxy(48,21);
  cprintf("GROSS");
  gotoxy(48,22);
  cout<<sal+5/100*sal+800+5/100*sal+10/100*sal;
  int t_tax=sal+5/100*sal+800+5/100*sal+10/100*sal;

  gotoxy(57,21);
  cprintf("P-TAX");
  gotoxy(57,22);
  cout<<"200";

  gotoxy(65,21);
  cprintf("INC TAX");
  gotoxy(65,22);
  cout<<0.1*t_tax;
  gotoxy(30,24);

  cprintf("NET SALARY:: ");
  gotoxy(45,24);
  cout<<t_tax-10/100*t_tax-200;
		}
  file12.read((char*)&s12,sizeof(s12));
  }
  file12.close();
  getch();
 }
