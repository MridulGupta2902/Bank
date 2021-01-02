#include<graphics.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<dos.h>
 #include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
void append();
void view();
void search();
void modify();
void del();
int finish();
class employee
{
private:
int empno;
char name[30];
char address[50];
int salary;


public :
void set()
{
cout<<endl<<"enter empno :-" ;
cin>>empno;
cout<<endl<<"enter name :-"   ;
cin>>name;
cout<<endl<<"enter salary :-"  ;
cin>>salary;
cout<<endl<<"enter address :-" ;
cin>>address;
}
void show()
{
cout<<"\n\temp no is :-"<<empno;
cout<<"\n\tname is :-"  <<name;
cout<<"\n\tsalary is :-"<<salary;
cout<<"\n\taddress is :-"<<address;
}
void change()
{
cout<<"\n\tname is :-";
cin>>name;
cout<< "\n\tsalary is :-";
cin>>salary;
cout<<"\n\taddress is :-";
cin>>address;
}
int getempno()
{
return empno;

}
};
void menu ()
{
 gotoxy(0,0);
while(1)
{
cleardevice();
setbkcolor(5);
cout<<"\n";
cout<<"\n\t*==============================================*";
cout<<"\n\t           EMPLOYEE MANAGMENT SYSTEM            ";
cout<<"\n\t*==============================================*";
cout<<"\n\t*   you have following options:-    *" ;
cout<<"\n\t*        1.APPEND NEW EMPLOYEE          *"  ;
cout<<"\n\t*        2.VIEW EMPLOYEE DETAILS        *" ;
cout<<"\n\t*        3.SEARCH EMPLOYEE RECORD       *";
cout<<"\n\t*        4.MODIFY EXISTING EMPLOYEE     *";
cout<<"\n\t*        5.DELETE EMPLOYEE RECORD       *";
cout<<"\n\t*        6.EXIT                         *";
cout<<"\n\t*****************************************";
cout<<"\n\n\tENTER YOUR CHOICE :-";
int choice;
cin>>choice;
switch(choice)
{
case 1: append(); break;
case 2: view(); break;
case 3: search(); break;
case 4: modify() ;break;
case 5: del(); break;
case 6: finish();  break;
default:cout<<"\n\tINVALID try again....." ;
}
getch();
gotoxy(0,0);
int flag=1,x=0,y=400,kk;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");







}
}
void main()
{
   int x=250,y=200,a=0,d=400,e=0,f=0 ;


 int gd=DETECT,gm,flag=1,xx,yy,kk,v,l,i,j,m,n,t,aa,bb,cc;
 clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");



   while(!kbhit())
 {
      a++;     d--;
 x--;  e=e+20;
 f=f+30;
 putpixel(e,f,4);
 i=getpixel(e,f);

 cleardevice();
circle(70,70,50);
circle(50,60,5);
circle(90,60,5);
line(70,65,70,85);
arc(70,85,180,360,10)  ;
line(70,120,70,180);
line(70,150,120,120);
line(70,150,20,120);
line(70,180,20,220);
line(70,180,120,220);
ellipse(220,120,0,360,100,50);
settextstyle(7,0,5)   ;
outtextxy(200,100,"HIII");
for(j=0;j<40;j++)
    {
    m=random(600);
    n=random(400);
    outtextxy(m,n,"*");


    }




 setcolor(6);
 settextstyle(7,0,7);




 outtextxy(x,y,"welcome");
 settextstyle(7,0,6);
 outtextxy(a,250,"TO");
 outtextxy(0,d,"EMLOYEE MANAGMENT");
 if(x==137 && y==200)
 {
 break;

 }
 delay(14);
 }
 settextstyle(6,0,3);
 outtextxy(400,400,"PRESS ANY KEY TO MOVE");
 getch();
 cleardevice();
      //pasword
      setbkcolor(14);
      char ch1[]="aaaa";
char ch2[5];
int s=0,k;
settextstyle(3,0,4);
outtextxy(100,100,"\n Enter your password:");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t" ;
while(s<4)
{

    ch2[s]=getch();
      cout<<"\t*" ;
    s++;
}
	ch2[4]='\0';
	k=strcmp(ch1,ch2);
	if(k==0)
	   {
	   settextstyle(3,0,4) ;
	outtextxy(100,300,"\n password matched");
	}
	else     {
	printf("\n wrong password");
	exit(0);
		  }

 getch();
 //loading
 l=40;

 for(v=1;v<=100;v++)
 {
 cleardevice();
 setbkcolor(4);
 rectangle(20,250,l,268);
 l=l+5;
 floodfill(31,251,6);
 printf("\t\n\n\n\n\n   L O A D I N G  %d",v) ;
 gotoxy(10,10);
 delay(50) ;
 }
 settextstyle(1,0,3);
 outtextxy(300,350,"LOADING COMPLETED");
 settextstyle(4,0,2);
 outtextxy(10,440,"Press any key to move ...") ;





 getch();
 gotoxy(0,0);

 cleardevice();

  clrscr();





menu();

}
finish()
{
cleardevice();
   int gd=DETECT,gm,cc,t,bb,aa;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");



 for(t=1;t<500;t++)
		  {        cleardevice();
circle(70+t,70,50);
circle(50+t,60,5);
circle(90+t,60,5);
line(70+t,65,70+t,85);
arc(70+t,85,180,360,10)  ;
line(70+t,120,70+t,180);
line(70+t,150,120+t,120);

   if(bb<=121)
   {
line(70+t,150,20+t,120+(t/8));
}
   else
   {
line(70+t,150,20+t,120-(t/8));
   }
line(70+t,180,20+t,220);
line(70+t,180,120+t,220);
ellipse(220+t,120,0,360,100,50);
settextstyle(7,0,5)   ;
outtextxy(200+t,100,"BYE");


 for(cc=0;cc<40;cc++)
    {
    aa=random(600);
    bb=random(400);
    outtextxy(aa,bb,"o");


    }
    settextstyle(3,0,3);
    outtextxy(200,300,"INNOVATED BY:- MRIDUL GUPTA");
   outtextxy(250,350,"SPECIAL THANKS TO PUNEET SIR" );


delay(10);
		   }
getch();
closegraph();
exit(0);

}





void append()
 {
 int i,n;
 employee e;
 fstream fs;
 fs.open("c:\\binary.dat",ios::app|ios::binary);
 if(!fs)
 {
 cout<<"\n\tfile creation has failed";
 getch();
 exit(0);
 }
 cout<<"\n\tenter the no. of employee you want to save:-";
 cin>>n;
 for(i=1;i<=n;i++)
 {
 e.set();
 fs.write((char*)&e,sizeof(e));
 cout<<"\n==============================================";
 }
 fs.close();
 cout<<"\n\n\t  *DATA SAVED SUCCESSFULLY*";

 }
 void view()
 {

  cleardevice();
  clrscr();
  cleardevice();
  employee e;
  fstream fs;
  fs.open("c:\\binary.dat",ios::in|ios::binary);
  if(!fs)
  {
  cout<<"\n\tfile opening failed ";
  getch();
  exit(0);
  }
  int record =0;
  fs.read((char*)&e,sizeof(e));
  while(!fs.eof())
  {  gotoxy(0,0);
  e.show();
  cout<<"\n\t=============================================";
  record++;
  fs.read((char*)&e,sizeof(e));
  }
  fs.close();
  cout<<"\n\tTotal no. of record:-"<<record;
  }

  void search()
  {
  employee e;
  fstream fs;
  fs.open("c:\\binary.dat",ios::in|ios::binary);
  if(!fs)
  {
  cout<<"\n\tfile opening failed" ;
  getch();
  exit(0);
  }
  int empno,flag=0;
  cout<<"\n\tEnter the empno you want to saerch;-";
  cin>>empno;
  fs.read((char*)&e,sizeof(e));
  while(!fs.eof())
  {
  if(e.getempno()==empno)
  {
  cout<<"*SEARCH IS SUCCESSFULL*";
  e.show();
  flag=1;
  break;
  }
  fs.read((char*)&e,sizeof(e));
  }
  if(flag==0)
  {
  cout<<"\n\trecord with empno"<<empno<<"is not available";
  }
  fs.close();
  }



 void modify()
 {
 employee e;
 fstream fs ;
 fs.open("c:\\binary.dat",ios::in|ios::out|ios::binary);
 if(!fs)
 {
 cout<<"\n\tfile opening failed";
 getch();
 exit(0);
 }
 int empno,record=0,flag=0;
 cout<<"\n\tenter the empno you want to modify:-" ;
 cin>>empno;
 fs.read((char*)&e,sizeof(e));
 while(!fs.eof())
 {
 record++;
 if(e.getempno()==empno)
 {
 e.show();
 cout<<"\n\tDo you want to modify this record";
 cout<<"\n\t press Y for yes:-";
 char ch;
 cin>>ch;
 flag=1;
 if(ch=='y'||ch=='Y')
 {
 e.change();
 fs.seekp(fs.tellg()-sizeof(e));
 fs.write((char*)&e,sizeof(e));
 cout<<"\n\t  *MODIFACTION SUCCESSFULL*";
 break;
 }
 else
 {

 cout<<"\n\t  no modifaction made ";
 }
 }
 fs.read((char*)&e,sizeof(e));
 }
 if (flag==0)
 {
 cout<<"\n NO Record is avialable";
 }
 fs.close();
 }
 void del()
 {
 employee e;
 fstream fs;
 fstream o;
 o.open("c:\\new.dat",ios::out|ios::binary);
 fs.open("c:\\binary.dat",ios::in|ios::binary);
 int empno,flag=0 ;
 char ch ;
 cout<<"\n\tEnter the employee number you want to delete:-";
 cin>>empno;
 fs.read((char*)&e,sizeof(e));
 while(!fs.eof())
 {
 if(e.getempno()==empno)
 {
 cout<<"\n\tRECORD:-";
 cout<<"\n\t========";
 e.show();
 cout<<"\n\n\t->DO YOU WANT TON DELETE ThIS RECORD";
 cout<<"\n\t->PRESS Y for yes:-";
 flag=1;
 }
 fs.read((char*)&e,sizeof(e));
 }
 fs.close();
 if(flag==0)
 {
 cout<<"\n\tThere's no record with empno"<<empno;
 cout<<"\n\tSO NO DELETION IS POSSIBLE";
 }
 if (flag==1)
 {
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
 fs.open("c:\\binary.dat",ios::in|ios::binary);
 fs.read((char*)&e,sizeof(e));
 while(!fs.eof())
 {
 if(e.getempno()!=empno)
 {
 o.write((char*)&e,sizeof(e));
 }
fs.read((char*)&e,sizeof(e));
}
fs.close();
o.close();
remove("c:\\binary.dat");
rename("c:\\new.dat","c:\\binary.dat");
cleardevice();
cout<<"\n\n\t**DELETION SUCCESSFULL**";
}
else
{
cout<<"\n\tNO RECORD DELETED";
}
   }


}


