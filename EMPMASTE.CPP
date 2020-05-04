#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

	class emp
	{
	int empcode,salary;
	char empname[30],grade[5],doj[15];
	public:
	void getemp()
		{
		cout<<"\nEnter Emp code :";
		cin>>empcode;
		cout<<"\nEnter employee name:";
		gets(empname);
		cout<<"\nEnter date of joining:";
		gets(doj);
		cout<<"\nEnter experience & class grade:";
		gets(grade);
		cout<<"\nEnter basic daily salary:";
		cin>>salary;
		cout<<"\n";
		}
		void printemp()
		{
 cout<<"\n+-------------------------+-------------------------+";
 cout<<"\n|  Employee code:         |"<<"  "<<empcode;
 cout<<"\n+-------------------------+-------------------------+";
 cout<<"\n|  Employee name:         |"<<"  "<<empname;
 cout<<"\n+-------------------------+-------------------------+";
 cout<<"\n|  Date of joining:  	  |"<<"  "<<doj;
 cout<<"\n+-------------------------+-------------------------+";
 cout<<"\n|  Grade:            	  |"<<"  "<<grade;
 cout<<"\n+-------------------------+-------------------------+";
 cout<<"\n|  Daily Salary:     	  |"<<"  "<<salary;
 cout<<"\n+-------------------------+-------------------------+";
		}
		int code()
		{
		return empcode;
		}
		int dsalary()
		{
		return salary;
		}
	};
//***************************************************************************
///////////////////////////...ADDING NEW EMPLOYEE.../////////////////////////
//***************************************************************************

  void addemp()
  {
	clrscr (); int b1=0;
	textbackground(13);
	emp s;
	fstream file;
	file.open("employee.txt",ios::in|ios::binary);
	while(file.read((char*)&s,sizeof(s)))
	{
	++b1;
	}
	gotoxy(1,1);
	cprintf("Employee code to be given is: ");
	cout<<b1+1;
	file.close();

	file.open("employee.txt",ios::app|ios::binary);
	s.getemp();
	file.write((char*)&s,sizeof(s));
	file.close();
  }
//***************************************************************************
/////////////////////////...DISPLAY ALL EMPLOYEE...//////////////////////////
//***************************************************************************

  void displayemp()
  {
	int a=0;
	clrscr();
	textbackground(13);
	fstream file1;
	emp s1;
	file1.open("employee.txt",ios::in|ios::binary);
	while(file1.read((char*)&s1,sizeof(s1)))
	{
	a++;
	}
	gotoxy(7,5);
	cout<<"\n Total No. of employee engaged::"<<a;
	file1.close();
  }

//***************************************************************************
////////////////////...DISPLAY SINGLE EMP DETAIL...//////////////////////////
//***************************************************************************

  void search()
  {
		fstream file2;
		clrscr();
		textbackground(13);
		emp s2;
		int c1,f=0;
		file2.open("employee.txt",ios::in|ios::binary);
		cout<<"Enter employee code  to search:";
		cin>>c1;
		file2.read((char*)&s2,sizeof(s2));
		while(!file2.eof())
			{
			 if(s2.code()==c1)
				{
				s2.printemp();
				f++;
				}
			 file2.read((char*)&s2,sizeof(s2));
			}
			if(f==0)
			{
			gotoxy(4,4);
			cout<<"Record "<<c1<<" Not found";
			}
		file2.close();

  }
//***************************************************************************
////////////////////////////////...MODIFY.../////////////////////////////////
//***************************************************************************

	   void modify()
	   {
		fstream file3;
		clrscr();
		textbackground(13);
		emp s3;
		int r1;
		int pos;
		file3.open("employee.txt",ios::in|ios::out|ios::binary);
		cout<<"Enter employee code to modify:";
		cin>>r1;
		file3.read((char*)&s3,sizeof(s3));
		while(!file3.eof())
			{
			 if(s3.code()==r1)
				{
				s3.printemp();
				s3.getemp();
				pos=file3.tellg();
				file3.seekp(pos-sizeof(s3),ios::beg);
				file3.write((char*)&s3,sizeof(s3));
				}
			file3.read((char*)&s3,sizeof(s3));
			}
		file3.close();
	  }
//***************************************************************************
 /////////////////////////////...DELETE...///////////////////////////////////
//***************************************************************************
	   void del()
	   {
		fstream file4,file5;
		char ch;
		clrscr();
		textbackground(13);
		emp s4;
		int r2;
		file4.open("employee.txt",ios::in|ios::binary);
		file5.open("nemployee.txt",ios::out,ios::binary);
		cout<<"Enter emp code to cut from the dept:";
		cin>>r2;
		while(file4.read((char*)&s4,sizeof(s4)))
		{
			if(s4.code()==r2)
			{
			cout<<"\n";
			s4.printemp();
			cout<<"\n\nAre you confirm to delete ? (y/n):";
			cin>>ch;
			  if(ch=='Y'||ch=='y')
			   {
			   gotoxy(24,26);
			   cout<<"..RECORD DELETED..";
			   continue;
			   }
			  else
			    cout<<"\nYour docs are kept safe..Good Luck..";
			}
		file5.write((char*)&s4,sizeof(s4));
		}
		file4.close();
		file5.close();
		remove("employee.txt");
		rename("nemployee.txt","employee.txt");
		getch();
	 }






