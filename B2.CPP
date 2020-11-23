#include<string.h>
#include<fstream.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<dos.h>
struct blackjack{
char name[20],username[20],pswd[20];
double bank;
}s;
class BJ
{
public:
void dealer_twocard(char suit[2], char num[2]);
void onecard(char suit, char num);
void fivecard(char suit[5], char num[5]);
void fourcard( char suit[4], char num[4]);
void threecard(char suit[3],char num[3]);
void twocard(char suit[2],char num[2]);
}show;
void BJ::dealer_twocard(char suit[2], char num[2])
{
cout<<"  ____________ \t"<<"  ____________ \n";
 cout<<" |          "<<"*"<<" |\t"<<" |          "<<num[1]<<" |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | | CLOSED | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\n";
 cout<<" | | CLOSED | |\t"<<" | |    "<<suit[1]<<"   | |\n";
 cout<<" | | CLOSED | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | __________ |\t"<<" | __________ |\n";
}
void BJ::onecard(char suit, char num)
{
 cout<<"  ____________ \n";
 cout<<" |          "<<num<<" |\n";
 cout<<" |  --------  |\n";
 cout<<" | | "<<suit<<"    "<<suit<<" | |\n";
 cout<<" | |    "<<suit<<"   | |\n";
 cout<<" | | "<<suit<<"    "<<suit<<" | |\n";
 cout<<" |  --------  |\n";
 cout<<" | __________ |\n";
}
void BJ::fivecard(char suit[5], char num[5])
{
cout<<endl;
 cout<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \n";
 cout<<" |          "<<num[0]<<" |\t"<<" |          "<<num[1]<<" |\t"<<" |          "<<num[2]<<" |\t"<<" |          "<<num[3]<<" |\t"<<" |          "<<num[4]<<" |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\t"<<" | | "<<suit[3]<<"    "<<suit[3]<<" | |\t"<<" | | "<<suit[4]<<"    "<<suit[4]<<" | |\n";
 cout<<" | |    "<<suit[0]<<"   | |\t"<<" | |    "<<suit[1]<<"   | |\t"<<" | |    "<<suit[2]<<"   | |\t"<<" | |    "<<suit[3]<<"   | |\t"<<" | |    "<<suit[4]<<"   | |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\t"<<" | | "<<suit[3]<<"    "<<suit[3]<<" | |\t"<<" | | "<<suit[4]<<"    "<<suit[4]<<" | |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\n";
}
void BJ::fourcard( char suit[4], char num[4])
{
cout<<endl;
 cout<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \n";
 cout<<" |          "<<num[0]<<" |\t"<<" |          "<<num[1]<<" |\t"<<" |          "<<num[2]<<" |\t"<<" |          "<<num[3]<<" |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\t"<<" | | "<<suit[3]<<"    "<<suit[3]<<" | |\n";
 cout<<" | |    "<<suit[0]<<"   | |\t"<<" | |    "<<suit[1]<<"   | |\t"<<" | |    "<<suit[2]<<"   | |\t"<<" | |    "<<suit[3]<<"   | |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\t"<<" | | "<<suit[3]<<"    "<<suit[3]<<" | |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\n";
}
void BJ::threecard(char suit[3],char num[3])
{
cout<<endl;
 cout<<"  ____________ \t"<<"  ____________ \t"<<"  ____________ \n";
 cout<<" |          "<<num[0]<<" |\t"<<" |          "<<num[1]<<" |\t"<<" |          "<<num[2]<<" |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\n";
 cout<<" | |    "<<suit[0]<<"   | |\t"<<" | |    "<<suit[1]<<"   | |\t"<<" | |    "<<suit[2]<<"   | |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\t"<<" | | "<<suit[2]<<"    "<<suit[2]<<" | |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | __________ |\t"<<" | __________ |\t"<<" | __________ |\n";
}
void BJ::twocard(char suit[2],char num[2])
{
cout<<endl;
 cout<<"  ____________ \t"<<"  ____________ \n";
 cout<<" |          "<<num[0]<<" |\t"<<" |          "<<num[1]<<" |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\n";
 cout<<" | |    "<<suit[0]<<"   | |\t"<<" | |    "<<suit[1]<<"   | |\n";
 cout<<" | | "<<suit[0]<<"    "<<suit[0]<<" | |\t"<<" | | "<<suit[1]<<"    "<<suit[1]<<" | |\n";
 cout<<" |  --------  |\t"<<" |  --------  |\n";
 cout<<" | __________ |\t"<<" | __________ |\n";
}
struct player
{
 char suit[5],num[5],playername[20],username[20];
 int status,sum;
};
player p1,dealer;
float bank,money;

void update()
{ long p=sizeof(s);
fstream f("blackjack.dat",ios::binary|ios::in|ios::out);
while(f.read((char*)&s,sizeof(s)))
{ if(strcmpi(s.username,p1.username)==0)
  {
  s.bank=bank;
  f.seekp(-p,ios::cur);
  f.write((char*)&s,sizeof(s));
  break;
}
}
}

void clearscreen()
{ 
	clrscr();
}
void loading()
{ clearscreen();
 for(int i=0;i<12;i++)
 cout<<" \n";
 cout<<setw(35)<<""<<"LOADING....";delay(500);
 cout<<"\b ";delay(250);
for(i=0;i<3;i++)
{ cout<<"\b\b ";
 delay(250);
}   cout<<"\b";
for(i=0;i<4;i++)
{ cout<<".";
 delay(250);
}}
void menu()
{ int ch;
  clearscreen();
  cout<<setw(40)<<" MENU \n \n";
   cout<<"\n 1.LOGIN \n 2.SIGN-UP \n 3.EXIT \n";
  cout<<" \n ENTER YOUR CHOICE:";
  cin>>ch;
 if(ch==1)
{  char ch; blackjack t;
  clearscreen();
incpswd:  cout<<" \n\t\t\t LOGIN\n\n";
  cout<<" Username:";
  cin>>t.username;
  cout<<" Password:";
 for(int i=0;i<20;i++)
  {  ch=getch();
     if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
     t.pswd[i]=ch;
     else
     { t.pswd[i]='\0';
     break;
     }
     cout<<" \b *";
 }
 cout<<endl;
 ifstream f("blackjack.dat",ios::binary);
 while(f.read((char*)&s,sizeof(s)))
 {  if(strcmpi(t.username,s.username)==0)
      if(strcmp(t.pswd,s.pswd)==0)
     {  clearscreen();
     cout<<" \n\t\t\t YOU HAVE SUCCESSFULLY LOGGED IN!";
     cout<<"\n\n\n\tYour Details:";
     cout<<" \n NAME:  "<<s.name;
     cout<<" \n PURSE: $"<<s.bank;
     strcpy(p1.playername,s.name);
     strcpy(p1.username,s.username);
     bank=s.bank;
     getch();
 }
      else
   {  cout<<" Incorrect password! Try Again!";
      goto incpswd;
   }
}
f.close();
}
if(ch==2)
{  blackjack t;
clearscreen();
 cout<<"\n\t\t\tREGISTER \n";
 cout<<" \nENTER YOUR NAME:";
 cin>>t.name;
incusername: cout<<" \nENTER A USERNAME FOR YOUR ACOUNT:";
 cin>>t.username;
 ifstream f("blackjack.dat",ios::binary);
 while(f.read((char*)&s,sizeof(s)))
 {  if(strcmpi(t.username,s.username)==0)
    {
    cout<<" \nThis Username is already in use!";
    goto incusername;
    }
 }
f.close();
cout<<" \nENTER A PASSWORD(only alphabets):";
cin>>t.pswd;
t.bank=500;
ofstream f1("blackjack.dat",ios::binary|ios::app);
f1.write((char*)&t,sizeof(t));
clearscreen();
cout<<" \n\t\t\t THANK YOU FOR REGISTERING WITH US!";
cout<<" \n\n\n\t\t\t GENERAL INSTRUCTIONS";
cout<<" \n \n\n * As a token of gratitude, we have provided you with an initial purse of $500 \n   for you to start playing!";
cout<<" \n * Please check out the HOW TO PLAY column from the menu before playing!";
cout<<" \n * By registering with us, you accept our Terms and Conditions.";
getch();
f1.close();
menu();
}
 if(ch==3)
  exit(0);
}
void midscreen()
{
 int pos=(int)(80-8)/2;
 for(int i=0;i<5;i++)
 cout<<endl;
 for(i=0;i<pos;i++)
 cout<<" ";
}
void credits()
{
  midscreen();
  cout<<"BLACKJACK";
   for(int i=0;i<7;i++)
  cout<<endl;
   cout<<setw(53)<<" CHIRAG K PARIKH \n \n \n";
   for(i=0;i<10;i++)
   cout<<endl;
   cout<<setw(78)<<" PRESS ENTER <--| TO CONTINUE";
 getch();
}

void playerwon()
{
 bank=bank+money;
cout<<" CONGRATULATIONS! YOU WON! YOU HAVE GOT $"<<money<<endl;
cout<<"PURSE REMAINING: "<<bank;
update();
}
int norepeat(char suit, char num, int d=0)
{
if(d==1)
{
   if(suit==p1.suit[0])
    if(num==p1.num[0])
     return 0;

   if(suit==dealer.suit[0])
   if(num==dealer.num[0])
    return 0;

return 1;
}
for(int i=0;i<p1.status;i++)
    { if(suit==p1.suit[i])
       {	if(num==p1.num[i])
	  return 0;
    }
   } for(i=0;i<dealer.status;i++)
    { if(suit==dealer.suit[i])
       {	if(num==dealer.num[i])
	  return 0;
    }
 }
 return 1;
}
void playerlost()
{
 bank=bank-money;
 cout<<" OOPS! THE DEALER WON.  You have lost$"<<money<<endl;
 cout<<"PURSE REMAINING:"<<bank;
 update();
}

void dealer_newcard()
{
ch: dealer.suit[dealer.status]=random(4)+3;
 dealer.num[dealer.status]=random(12)+49;
 dealer.sum+=(dealer.num[dealer.status]-48);
if(dealer.num[dealer.status]==57)
{
  dealer.num[dealer.status]='T';
  dealer.sum+=1;
}
else if(dealer.num[dealer.status]==58)
{
  dealer.num[dealer.status]='J';
}
else if(dealer.num[dealer.status]==59)
{
  dealer.num[dealer.status]='Q';
  dealer.sum-=1;
}
else if(dealer.num[dealer.status]==60)
{
  dealer.num[dealer.status]='K';
  dealer.sum-=2;
}
 if(norepeat(dealer.suit[dealer.status],dealer.num[dealer.status])==0)
 goto ch;
}

void newcard()
{
ch: p1.suit[p1.status]=random(4)+3;
 p1.num[p1.status]=random(12)+49;
 p1.sum+=(p1.num[p1.status]-48);
if(p1.num[p1.status]==57)
{
  p1.num[p1.status]='T';
  p1.sum+=1;
}
else if(p1.num[p1.status]==58)
{
  p1.num[p1.status]='J';
}
else if(p1.num[p1.status]==59)
{
  p1.num[p1.status]='Q';
  p1.sum-=1;
}
else if(p1.num[p1.status]==60)
{
  p1.num[p1.status]='K';
  p1.sum-=2;
}
if(norepeat(p1.suit[p1.status],p1.num[p1.status])==0)
 goto ch;
}
void main()
{ randomize();
 clearscreen();
 credits();
 menu();
 start:
p1.status=1,dealer.sum=0,p1.sum=0;
loading();
 char ch,flag=0;
 clearscreen();
 cout<<" YOU HAVE $"<<bank<<" IN YOUR PURSE \n \n";
cout<<" ENTER YOUR BET?: $";
cin>>money;
ab: clearscreen();
cout<<" Dealer: \n";
if(flag==0)
{
  if(p1.status==1)
{  dealer.suit[0]=random(4)+3;
  dealer.num[0]=random(12)+49;
  dealer.sum+=(dealer.num[0]-48);
if(dealer.num[0]==57)
{
  dealer.num[0]='T';
  dealer.sum+=1;
}
else if(dealer.num[0]==58)
{
  dealer.num[0]='J';
}
else if(dealer.num[0]==59)
{
  dealer.num[0]='Q';
  dealer.sum-=1;
}
else if(dealer.num[0]==60)
{
  dealer.num[0]='K';
  dealer.sum-=2;
}

ch2: dealer.suit[1]=random(4)+3;
  dealer.num[1]=random(12)+49;
  dealer.sum+=(dealer.num[1]-48);
  if(dealer.num[1]==57)
{
  dealer.num[1]='T';
  dealer.sum+=1;
}
else if(dealer.num[1]==58)
{
  dealer.num[1]='J';
}
else if(dealer.num[1]==59)
{
  dealer.num[1]='Q';
  dealer.sum-=1;
}
else if(dealer.num[1]==60)
{
  dealer.num[1]='K';
  dealer.sum-=2;
}
if(norepeat(dealer.suit[1],dealer.num[1],1)==0)
 goto ch2;
}
show.dealer_twocard(dealer.suit,dealer.num);
}
else if(flag==1)
{ dealer_newcard();
  show.threecard(dealer.suit,dealer.num);
}
else if(flag==2&&dealer.sum<17)
{
  dealer_newcard();
  show.fourcard(dealer.suit,dealer.num);

}
else if(flag==3&&dealer.sum<17)
{
  dealer_newcard();
  show.fivecard(dealer.suit,dealer.num);

}
cout<<" Player: \n";
if(p1.status==1&&flag==0)
{
 p1.suit[0]=random(4)+3;
  p1.num[0]=random(12)+49;
  p1.sum+=(p1.num[0]-48);
if(p1.num[0]==57)
{
  p1.num[0]='T';
  p1.sum+=1;
}
else if(p1.num[0]==58)
{
  p1.num[0]='J';
}
else if(p1.num[0]==59)
{
  p1.num[0]='Q';
  p1.sum-=1;
}
else if(p1.num[0]==60)
{
  p1.num[0]='K';
  p1.sum-=2;
}
ch1:  p1.suit[1]=random(4)+3;
  p1.num[1]=random(12)+49;
  p1.sum+=(p1.num[1]-48);
if(p1.num[1]==57)
{
  p1.num[1]='T';
  p1.sum+=1;
}
else if(p1.num[1]==58)
{
  p1.num[1]='J';
}
else if(p1.num[1]==59)
{
  p1.num[1]='Q';
  p1.sum-=1;
}
else if(p1.num[1]==60)
{
  p1.num[1]='K';
  p1.sum-=2;
}
if(norepeat(p1.suit[1],p1.num[1],1)==0)
 goto ch1;
}
if(p1.status==1)
show.twocard(p1.suit,p1.num);
if(p1.status==2)
{ if(flag==0)
  newcard();
 show.threecard(p1.suit,p1.num);
}
if(p1.status==3)
{ if(flag==0)
 newcard();
 show.fourcard(p1.suit,p1.num);
}
if(p1.status==4)
{ if(flag==0)
 newcard();
 show.fivecard(p1.suit,p1.num);
}
delay(800);
if(p1.sum>21)
{
 playerlost();
 goto end;
}
if(dealer.sum>=17&&flag!=0)
{  delay(800);
   if((dealer.sum<p1.sum)||(dealer.sum>21))
   playerwon();
   else
   playerlost();
  goto end;
}
if(flag!=0&&dealer.sum<17)
{  delay(800);
   goto bc;
}
cout<<" Hit or Stay?(H/S)";
  ch=getch();
if(ch=='h')
{
if(flag==0)
p1.status++;
goto ab;
}
else if(ch=='s')
{ bc:  flag++;
 if(flag==1)
 dealer.status=2;
 else dealer.status++;
 goto ab;
}
end:
char choice;
cout<<" DO YOU WANT TO PLAY AGAIN?(y/n)";
cin>>choice;
if(choice=='y')
goto start;
else exit(0);
}