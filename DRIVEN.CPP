
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include "empscree.cpp"
#include "empsalary.cpp"
int scan;
int ascii;
/////////////////////Main/////////////////

void main()
  {
  dus();
  void getkey(void);
	int m1;
	int r=8;
	while(1)
   {
   textbackground(3);
	gotoxy(61,24);textcolor(15);  cprintf("Esc to Quit");
  ///Menu///
   gotoxy(30,5);textcolor(560); cprintf("EMPLOYEE   MANAGER");
   gotoxy(30,6); cprintf("------------------");
   if(r==8)
   {
   textbackground(3);
   gotoxy(30,8);
   textcolor(0);
   cprintf("ADD EMP..         ");
   textbackground(6);
   //////
   if (ascii==13)
   {
   addemp();
   getch();
   ascii=65;
   main();
   }
   }
   else { gotoxy(30,8);textcolor(15); cprintf("   ADD EMP..      ");}
   if(r==9)
   {
   textbackground(12); gotoxy(30,9);
		  textcolor(0);
		   cprintf("VIEW EMP..   ");         textbackground(6);
		  ///  Pattern of calling function in the  page..
		  if(ascii==13)
		  ///   Area to return in the same page....
		  {
		  displayemp();
		  getch();
		  ascii=65;
		  main();
		  }   /////
		  textbackground(6);
		}
		  else { gotoxy(30,9);textcolor(15);

		  cprintf("   VIEW EMP..     "); }

		  if(r==10) { textbackground(13); gotoxy(30,10);
		  textcolor(0);
		  cprintf("SEARCH EMP..   "); textbackground(6);
	////////////////////////
		  if(ascii==13)
		  {
		  search();
		  getch();
		  ascii=65;
		  main();
		  }
		}
		else { gotoxy(30,10);textcolor(15);  cprintf("   SEARCH EMP..   ");}
		if(r==11) { textbackground(12); gotoxy(30,11);
		  textcolor(0);
		  cprintf("MODIFY EMP..    "); gotoxy(30,11);textbackground(6);
		  ////////////////////
		  if(ascii==13)
		  {
		  modify();
		  getch();
		  ascii=65;
		  main();
		  }
		}
		else {gotoxy(30,11);textcolor(15);  cprintf("   MODIFY EMP..   "); }

		if(r==12) { textbackground(18); gotoxy(30,12);
		 textcolor(0);
		 cprintf("DELETE EMP..     "); textbackground(6);
		 //////////////////////////////////

		 if(ascii==13)
		 {
		 del();
		 getch();
		 ascii=65;
		 main();
		 }
		}
		else {gotoxy(30,12);textcolor(15);  cprintf("   DELETE EMP..   "); }

		 if(r==13) { textbackground(15); gotoxy(30,13);
		 textcolor(0);
		 cprintf("SALARY OF EMP..   ");   	 textbackground(6);
		 if(ascii==13)
		 {
		 salary();
		 getch();
		 ascii=65;
		 main();
		 }
		// textbackground(6);
		}
		else {gotoxy(30,13);textcolor(15);  cprintf("   SALARY OF EMP..");}

	gotoxy(60,3);
	textbackground(3);
	getkey();

	switch(scan)
	   {
	   case 80:  //down arrow key
		  if(r==13)
			r=8;
			else r++;
			break;

	   case 72:  //up arrow key
		  if(r==8)
		   r=13;
		   else r--;
		break;

	   case 1 :
		 exit(1);
		 } //switch
	  }//while
	} //main

//GETKEY ////////////////////////////////////////

	void getkey()
	  {
	  union REGS ii,oo;
	  // wait till a key is hit
	  while(!kbhit());

	  ii.h.ah = 0; //service number

	  int86(22,&ii, &oo); //issue interrupt

	  scan = oo.h.ah;

	  ascii = oo.h.al;
	  }

