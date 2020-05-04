
#include<iostream.h>
#include<conio.h>
  void dus()
  {
   textbackground(9);
   clrscr();
   int x1=1,y1=2,x2=80,y2=24,i,j,k,l;
   textbackground(1223);   //{ For printing the upper part
   cprintf("  ");
   textcolor(4);
   cprintf("ð");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("F");
   textcolor(0);
   cprintf("orum");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("E");
   textcolor(400);
   cprintf("mployee");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("S");
   textcolor(0);
   cprintf("tatistics");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("R");
   textcolor(0);
   cprintf("un");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("C");
   textcolor(0);
   cprintf("oonection");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("D");
   textcolor(0);
   cprintf("epartment");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("P");
   textcolor(0);
   cprintf("roject");
   textbackground(1223);
   cprintf("  ");
   textcolor(4);
   cprintf("M");
   textcolor(0);
   cprintf("edia");
	textbackground(1223);
   cprintf("  ");
   textcolor(4);
  cprintf("ð");

  //For printing the lower part.
   gotoxy(1,25) ;
   textcolor(4)  ;
   cprintf(" F1") ;
   textcolor(0)  ;
   cprintf("  Help") ;
   textcolor(4)  ;
   cprintf("  Alt-F8") ;
   textcolor(0)  ;
   cprintf(" Next Msg") ;
   textcolor(4)  ;
   cprintf("  Alt-F7") ;
   textcolor(0)  ;
   cprintf(" Prev Msg") ;
   textcolor(4)  ;
   cprintf("  Alt-F9") ;
   textcolor(0)  ;
   cprintf(" Compact") ;
   textcolor(4)  ;
   cprintf("  F9") ;
   textcolor(0)  ;
   cprintf(" MNCs") ;
   textcolor(4)  ;
   cprintf("  F10") ;
   textcolor(0)  ;
   cprintf(" Menu ");
   //Lower part end..}

  /////////////////////////Making box...///////////////////////
	gotoxy(x1,y1);
	textcolor(15);
	cprintf("É");
	gotoxy(x1,y2);
	textcolor(15);
	cprintf( "È");
	gotoxy(x2,y1);
	textcolor(15);
	cprintf("»");

	for(i=x1+1;i<x2;i++)
	{
	gotoxy(i,y1);
	textcolor(15);
	cprintf("Í");
	}
	gotoxy(x1+28,y1);
	textcolor(15);
	cprintf(" ZICK && CO.P.LTD ");
	gotoxy(x1+1,y1);
	textcolor(15);
	cprintf("Í[");
	textbackground(1);
	textcolor(2);
	cprintf("þ");
	textcolor(15);
	cprintf("]");
	gotoxy(x2-2,y1);
	textcolor(15);
	cprintf("]");
	gotoxy(x2-3,y1);
	cprintf("%c",18);
	gotoxy(x2-4,y1);
	textcolor(15);
	cprintf("[");
	gotoxy(x2-5,y1);
	cout<<"1";
	for(j=y1+1;j<y2;j++)
	{
	gotoxy(x1,j);
	textcolor(15);
	cprintf("º");
	}
	 {
	 gotoxy(x1,y2);
	 textcolor(15);
	 cprintf("ÈÍ");
	 cout<<char(15);
	 textcolor(15);
	 cprintf("ÍÍÍ      ÍÍÍ");
	 }
	  gotoxy(18,24);
	  textbackground(3) ;
	  textcolor(1);
	  cprintf("") ;
	  cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
	  textbackground(1) ;
	  textcolor(2);
	  cprintf("ÄÙ") ;
	  gotoxy(20,24);
	  textbackground(3);
	  textcolor(465);
	  cprintf("þ");
	 ////////////////////////////////////
	for(l=y1+1;l<y2;l++)
	 {
	 gotoxy(x2,l);
	 cout<<"±";
	 }
	 textbackground(3);
	 textcolor(3);
	 gotoxy(x2,y1+1);
	 textcolor(1);
	 cprintf("");
	 gotoxy(x2,y1+3);
	 textcolor(465);
	 cprintf("þ");
	 textbackground(3);
	 textcolor(3);
	 gotoxy(x2,y2-1);
	 textcolor(1);
	 cprintf("");     //Box making completed..}
 }