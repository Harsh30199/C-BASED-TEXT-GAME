#include<iostream>
using namespace std ;
#include<conio.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include<strings.h>
#include<fstream>
void SetColor(int);
#include<ctime>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
void modify(int);
void file_write();
int remove_player();
int loadprofile();
int price[2];
int draw_line()
{
for(int i=0;i<50;i++)
cout<<"-";
}
int GAME_MENU();
int snlc = 0 ;
class snakeandladder
{

public:


int snlmain()
{
int player1=0,player2=0,lastposition;
char player1name[80],player2name[80];


draw_line();
cout<<"\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
draw_line();
cout<<"\n\n\nEnter Name of player 1 :";
fflush(stdin);
gets(player1name);
cout<<"\n\n\Enter Name of player 2 :";
gets(player2name);
char ch ;
while(player1<100 && player2<100)
{
    system("cls");
board();
gamescore(player1name,player2name,player1,player2);
cout<<"\n\n--->" <<player1name<<" Now your Turn >> Press any key to play ";
ch = getch();
if(ch=='q'||ch=='Q')
{
    SetColor(5);
    cout <<"\nYOU HAVE DECIDED TO QUIT "<<endl;
    SetColor(15);
    getch();


return 0 ;

}

lastposition=player1;
play_dice(player1);
if(player1<lastposition)
    {
    SetColor(12);
cout<<"\n\n\aOops!! Snake found !! You are at position "<<player1<<"\n";
getch();
SetColor(15);

    }
else if(player1>lastposition+6)
{
    SetColor(10);
cout<<"\n\nGreat!! you got a ladder !! You are at position "<<player1<<"\n";
SetColor(15);

}
cout<<"\n\n--->"<<player2name<<" Now your Turn >> Press any key to play ";

ch = getch();
if(ch=='q'||ch=='Q')
{
    SetColor(5);
    cout <<"\nYOU HAVE DECIDED TO QUIT "<<endl;
    SetColor(15);
    getch();


return 0 ;

}
lastposition=player2;
play_dice(player2);
if(player2<lastposition)
{
SetColor(12);
cout<<"\n\n\aOops!! Snake found !! You are at position "<<player2<<"\n";

SetColor(15);
}
else if(player2>lastposition+6)
{

SetColor(10);
cout<<"\n\nGreat!! you got a ladder !! You are at position "<<player2<<"\n";
SetColor(15);


}getch();
}

cout<<"\n\n\n";
draw_line();
cout<<"\n\n\t\tRESULT\n\n";
draw_line();
cout<<endl;
gamescore(player1name,player2name,player1,player2);
cout<<"\n\n\n";
SetColor(11);
if(player1>player2)
cout<<player1name<<" !! You are the winner of the game\n\n";
else
cout<<player2name<<" !! You are the winner of the game\n\n";
draw_line();
SetColor(15);
getch();
}

void board()
{
SetColor(14);
cout<<"PRESS Q ON YOUR CHANCE TO QUIT THE GAME"<<endl;
SetColor(15);
cout<<"\n\n";
draw_line();
cout<<"\n\t\tSNAKE AT POSITION\n";
draw_line();
cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
draw_line();
cout<<"\n\t\t LADDER AT POSITION\n";
draw_line();
cout<<"\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
draw_line();
cout<<endl;
}
void gamescore(char name1[],char name2[],int p1, int p2)
{
cout<<"\n";
draw_line();
cout<<"\n\t\tGAME STATUS\n";
draw_line();
cout<<"\n\t--->"<<name1<<" is at position "<<p1<<endl;
cout<<"\t--->"<<name2<<" is at position "<<p2<<endl;
draw_line();
cout<<endl;
}
void play_dice(int &score)
{
int dice;
srand(time(0));
dice=(rand()%6)+1;
cout<<"\nYou got "<<dice<<" Point !! ";
score=score+dice;
if(score>100)
{
    score = score - dice ;
}
cout<<"Now you are at position "<<score;
switch(score)
{
case 98 :score=28;break;
case 95 :score=24;break;
case 92 :score=51;break;
case 83 :score=19;break;
case 73 :score=1;break;
case 69 :score=33;break;
case 64 :score=36;break;
case 59 :score=17;break;
case 55 :score=7;break;
case 52 :score=11;break;
case 48 :score=9;break;
case 46 :score=5;break;
case 44 :score=22;break;
case 8  :score=26;break;
case 21 :score=82;break;
case 43 :score=77;break;
case 50 :score=91;break;
case 54 :score=93;break;
case 62 :score=96;break;
case 66 :score=87;break;
case 80 :score=100;
}
}
};
class tictactoe
{
    char sq[10] = {'o','1','2','3','4','5','6','7','8','9'};
public:


int tttmain()
{
    char player1name[100],player2name[100];
	int player = 1,i,c;
cout<<"\n\n\nEnter Name of player 1 :";
fflush(stdin);
gets(player1name);
cout<<"\n\n\Enter Name of player 2 :";
gets(player2name);

	char mark;
	do
	{
	    cout << player1name<<  " (X)  -  "<<player2name<<" (O)" << endl << endl;
		getch();
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> c;

		mark=(player == 1) ? 'X' : 'O';

		if (c == 1 && sq[1] == '1')
            {
            choosecolor(mark);
			sq[1] = mark;
            }
		else if (c == 2 && sq[2] == '2')
        {
            choosecolor(mark);
			sq[2] = mark;
        }
		else if (c == 3 && sq[3] == '3')
 {
            choosecolor(mark);
			sq[3] = mark;
}
		else if (c == 4 && sq[4] == '4')
            {
            choosecolor(mark);
			sq[4] = mark;
            }
		else if (c == 5 && sq[5] == '5')
            {
            choosecolor(mark);
			sq[5] = mark;
            }
		else if (c == 6 && sq[6] == '6')
{           choosecolor(mark);
			sq[6] = mark;
}
		else if (c == 7 && sq[7] == '7')
            {
            choosecolor(mark);
			sq[7] = mark;
            }
		else if (c == 8 && sq[8] == '8')
            {
            choosecolor(mark);
			sq[8] = mark;
            }
		else if (c == 9 && sq[9] == '9')
{           choosecolor(mark);
			sq[9] = mark;
}
		else
		{
			cout<<"Invalid move "<<endl;
            getch();
			player--;

		}
		i=checkwin();

		player++;
	}while(i==-1);
	board();
SetColor(11);
	if(i==1)
{
    if(--player==1)

		cout<<"==>\aPlayer "<<player1name<<" win ";
else
	cout<<"==>\aPlayer "<<player2name<<" win ";
}
	else
		cout<<"==>\aGame draw";
getch();
SetColor(15);
	return 0;
}
void choosecolor(char mark)
{
    if(mark=='X')
    {
        SetColor(10);
    }
    else
    {
        SetColor(12);
    }
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (sq[1] == sq[2] && sq[2] == sq[3])

		return 1;
	else if (sq[4] == sq[5] && sq[5] == sq[6])

		return 1;
	else if (sq[7] == sq[8] && sq[8] == sq[9])

		return 1;
	else if (sq[1] == sq[4] && sq[4] == sq[7])

		return 1;
	else if (sq[2] == sq[5] && sq[5] == sq[8])

		return 1;
	else if (sq[3] == sq[6] && sq[6] == sq[9])

		return 1;
	else if (sq[1] == sq[5] && sq[5] == sq[9])

		return 1;
	else if (sq[3] == sq[5] && sq[5] == sq[7])

		return 1;
	else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3'
                    && sq[4] != '4' && sq[5] != '5' && sq[6] != '6'
                  && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{


system("cls");

	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;

	cout << "     |     |     " << endl << endl;


}
};
struct playerprofile
{
    int balance;
    char username[100];
char password[100];
}player[100];

int no_of_players ;
void read_no_of_players()
{
    fstream file2 ;
    file2.open("pnumber.dat");


   file2 >> no_of_players ;


    file2.close();


}
int a ;
void file_write()
{
    fstream file ;
    fstream file2;

    file2.open("pnumber.dat");
    int n ;
    file2 >> n ;
    file.open("player.dat",ios::out | ios::trunc);
    for(int i = 0;i <= n-1 ; i++)
    {
        file << player[i].username;
        file << endl;
        file << player[i].password;
        file << endl;
        file << player[i].balance;
        file << endl;

    }

}
void load_price()
{
    fstream file ;
    file.open("gameprice.dat");
    int i = 0 ,c;
    while(i<3)
    {
       file >> price[i];
       i++;

    }
}
void number_generate();
class   roulette
{

int guess ;
    int   bet;
public:
    static int number ;
    void getdata(int g , int b)
    {
        guess  = g ;
        bet = b ;
    }

int  betcheck()
{
    if (bet > player[a].balance)
    {
        SetColor(4);
    cout<<"INVALID BET AMOUNT AS BET AMOUNT IS GREATER THAN AVAILABLE BALANCE"<<endl;
    SetColor(15);
    return 1 ;
    }
    else
    {
    player[a].balance = player[a].balance - bet ;
    }
}
void rules()
{
    system("cls");
    cout<<"ALL EVEN NUMBERS ARE ";
    SetColor(12);
    cout<<"RED";
    SetColor(15);
    cout<<endl;
    cout<<"ALL ODD NUMBERS ARE ";
    SetColor(11);
    cout<<"CYAN";
    SetColor(15);
    cout<<endl;
    cout<<"IF RIGHT GUESS      :    WIN AMOUNT = BET * 10" <<endl;
    cout<<"IF GUESS +3 OR -3   :    WIN AMOUNT = BET * 5"  <<endl;
    cout<<"IF GUESS +7 OR -7   :    WIN AMOUNT = BET * 4"  <<endl;
    cout<<"IF GUESS +10 OR -10 :    WIN AMOUNT = BET * 2"  <<endl;
    cout<<"RIGHT COLOUR GUESS  :    WIN AMOUNT = BET * 1.5"<<endl;
    cout<<"IN ALL OTHER CASES  :    WIN AMOUNT = 0"        <<endl;
    cout<<"PRESS ENTER "<<endl;
}
void checkwin()
{
    SetColor(10);
    cout<<"NUMBER GENERATED : "<<number<<endl;
    SetColor(15);
    SetColor(11);
    cout<<"NUMBER GUESSED :"<<guess<<endl;
    SetColor(15);
    if(guess == number)
    {
        SetColor(11);
        cout<<"WIN AMOUNT : "<<bet * 10 <<endl;
        SetColor(15);
        player[a].balance = player[a].balance + (bet*10);
        SetColor(12);
        cout << "NEW BALANCE : "<<player[a].balance<<endl;
        SetColor(12);
    }

   else if((number <=(guess+3)&&number>guess)|| (number >=(guess - 3)&&number<guess))
    {
        SetColor(11);
        cout<<"WIN AMOUNT : "<<bet * 5 <<endl;
        SetColor(15);
        player[a].balance = player[a].balance + (bet*5);
        SetColor(12);
        cout << "NEW BALANCE : "<<player[a].balance<<endl;
        SetColor(15);
    }

   else if((number <=(guess+7)&&number>guess)|| (number >=(guess - 7)&&number<guess))
    {
        SetColor(11);
        cout<<"WIN AMOUNT : "<<bet * 4 <<endl;
        SetColor(15);
        player[a].balance = player[a].balance + (bet*4);
        SetColor(12);
        cout << "NEW BALANCE : "<<player[a].balance<<endl;
        SetColor(15);
    }

   else if((number <=(guess+10)&&number>guess)|| (number >=(guess - 10)&&number<guess))
    {
        SetColor(11);
        cout<<"WIN AMOUNT : "<<bet * 2 <<endl;
        SetColor(15);
        player[a].balance = player[a].balance + (bet*2);
        SetColor(12);
        cout << "NEW BALANCE : "<<player[a].balance<<endl;
        SetColor(15);
    }
    else
        {
        SetColor(10);
        cout<<"BAD LUCK "<<endl;
        SetColor(11);
        cout<<"BETTER LUCK NEXTIME"<<endl;
        SetColor(12);
        cout<<"AVAILABLE BALANCE :"<<player[a].balance<<endl;
        SetColor(15);
        }
}

};
class number_bet : public roulette
{
public:
    int guess2 ,bet2;
    void bets()
    {
        system("cls");
    b2:
        SetColor(12);
    cout<<"AVAILABLE BALANCE :"<<player[a].balance<<endl;
    SetColor(15);

        cout<<"GUESS NUMBER SHOULD BE FROM 1 TO 50 "<<endl;
    cout<<"ENTER GUESS NUMBER :"<<endl;
    cin >> guess2 ;
    if(guess2>50||guess2<1)
       {
        cout<<"INVALID NUMBER"<<endl;
        goto b2 ;
       }
    B1:
        SetColor(1);
    cout<<"BET SHOULD BE IN MULTIPLES OF 100"<<endl;
    SetColor(15);
    cout<<"ENTER BET AMOUNT :"<<endl;
    cin >> bet2 ;
    getdata(guess2 , bet2);
  int check =  betcheck();
  if(check==1)
  {
      goto B1 ;
  }



    }
};
class colour_bet : public roulette
{
    int guess2 ,bet2 ;
public:
    void bets()
    {
        int choice2;
        m:
    system("cls");
    cout<<"1.RED"<<endl;
    cout<<"2.CYAN"<<endl;
    cout<<"ENTER CHOICE:"<<endl;
    cin >> guess2;
    if((guess2==1&&guess2==2))
    {
        cout<<"INVALID CHOICE"<<endl;
        goto m;
    }
    B1:
        SetColor(1);
        SetColor(14);
        cout<<"BALANCE :"<<player[a].balance<<endl;
        SetColor(15);
    cout<<"BET SHOULD BE IN MULTIPLES OF 100"<<endl;
    SetColor(15);
    cout<<"ENTER BET AMOUNT :"<<endl;
    cin >> bet2 ;
    getdata(guess2 , bet2);
  int check =  betcheck();
  if(check==1)
  {
      goto B1 ;
  }

    }
    void colour_wincheck()
    {

        int n = ((number%2)==0)?1:2;
        int m = (n==1)?12:11;
        if(n==guess2)
        {
            cout<<"NUMBER GENERATED:";
            SetColor(m);
            cout<<number<<endl;
            SetColor(15);
            cout<<"YOUR CHOICE:";
            if(guess2==1)
            {
                SetColor(4);
                cout<<"RED"<<endl;
                SetColor(15);
            }
            else
            {
                SetColor(11);
                cout<<"CYAN"<<endl;
                SetColor(15);

            }
            int winamount = bet2*1.5;
            //Setcolor(SetColor())
            cout<<"WIN AMOUNT :"<<winamount<<endl;
            player[a].balance += winamount;
            cout<<"NEW BALANCE :"<<player[a].balance<<endl;
        }
        else
        {

            cout<<"NUMBER GENERATED:";
            SetColor(m);
            cout<<number<<endl;
            SetColor(15);
            cout<<"YOUR CHOICE:";
            if(guess2==1)
            {
                SetColor(4);
                cout<<"RED"<<endl;
                SetColor(15);
            }
            else
            {
                SetColor(11);
                cout<<"CYAN"<<endl;
                SetColor(15);

            }
            cout<<"BAD LUCK"<<endl;
            cout<<"BETTER LUCK NEXT TIME"<<endl;
        }
    }
};
int roulette_main()
{
    roulette r ;
    system("cls");
     int choice ;
    int guess ,ans ,ans2 , bet ;
    number_bet *p[20];
    colour_bet *q[20];
     int number_i = 0;
     int colour_i = 0;
    cout<<"WELCOME TO ROULETTE:"<<endl;
    cout<<"PRESS ENTER "<<endl;
    getch();
    system("cls");
    do
    {
    r.rules();
    getch();
    number_i = 0;
    colour_i = 0;

    do
    {
        system("cls");
     cout<<"1.COLOUR GUESS"<<endl;
    cout<<"2.NUMBER GUESS"<<endl;
    cout<<"ENTER CHOICE :"<<endl;
    cin >> choice ;
    switch(choice)
    {
case 1:
    q[colour_i] = new colour_bet ;
    (*q[colour_i]).bets();
    colour_i++;
    break;
    case 2:
    p[number_i] = new number_bet ;
    (*p[number_i]).bets();
    number_i++;
   break;
    }
cout<<"DO YOU WANT TO PLACE MORE BETS :"<<endl;
cout<<"1.YES"<<endl;
cout<<"2.NO"<<endl;
cin >> ans2;

}while(ans2==1);
number_generate();
int number_counter = 0 ;
if(number_i!=0)
    {
cout<<"NUMBER BETS :"<<endl;
for(number_counter = 0 ;number_counter < number_i;number_counter++)
{
    (*p[number_counter]).checkwin();
}
    }
    if(colour_i!=0)
    {



cout<<"FOR COLOUR BETS:"<<endl;
for(int colour_counter = 0 ;colour_counter < colour_i ; colour_counter++)
{

    (*q[colour_counter]).colour_wincheck();
}
    }
cout<<"DO YOU WANT TO CONTINUE :"<<endl;
cout<<"1.YES"<<endl;
cout<<"2.NO"<<endl;
cin >> ans;
}while(ans==1);
file_write();
SetColor(9);
cout <<"THANK YOU"<<endl;
SetColor(15);
getch();
}

int roulette::number = 0;
void number_generate()
{
srand(time(0));
 roulette::number=(rand()%50)+1;

}
int GAME_MENU()
{
    int choice, ans,cho = 1;
    Q:
    do
    {

load_price();
SetColor(12);
    cout<<"AVAILABLE BALANCE: "<<player[a].balance<<endl;
SetColor(15);
    cout<<"1.SNAKE AND LADDERS"<<endl;
    cout<<"PRICE :"<<price[0]<<endl;
    cout<<"2.TIC TAC TOE"<<endl;
    cout<<"PRICE :"<<price[1]<<endl;
    cout<<"3.ROULETTE"<<endl;
    cout<<"PRICE :"<<price[2]<<endl;
    cout<<"4.EXIT"<<endl;
    cout<<"Which game you want to play  ?"<<endl;
    cout<<"Enter choice :";
    cin>>choice;
switch(choice)
{
    case 1 :
    player[a].balance -= price[0];
    if(player[a].balance>=0)
    {
    SetColor(6);
    cout<<"AVAILABLE BALANCE: "<<player[a].balance<<endl;
    SetColor(15);
    file_write();
    snakeandladder obj;
    obj.snlmain();
    }
    else
    {
        SetColor(12);
    cout<<"INSUFFICENT BALANCE"<<endl;
    getch();
    player[a].balance+=price[0];
    SetColor(15);
    }
    break;
    case 2:
    if(player[a].balance>=price[1])
    {
    player[a].balance -= price[1];
    SetColor(6);
    cout<<"AVAILABLE BALANCE: "<<player[a].balance<<endl;
    SetColor(15);
    file_write();
    tictactoe obj1;
    obj1.tttmain();
    }


    else
        {
        SetColor(12);
        cout<<"INSUFFICENT BALANCE"<<endl;
        getch();
        SetColor(15);
        }
    break;
    case 3 :

    if(player[a].balance>=price[2])
    {
    player[a].balance -= price[2];
    SetColor(6);
    cout<<"AVAILABLE BALANCE: "<<player[a].balance<<endl;
    SetColor(15);
    file_write();
    getch();
    //roulette obj1;
    roulette_main();
    }


    else
        {
        SetColor(12);
        cout<<"INSUFFICENT BALANCE"<<endl;
        getch();
        SetColor(15);
        }
    break;
    case 4:
        cout<<"YOU HAVE DECIDED TO QUIT "<<endl;
        cho = 0 ;
        break;
    default:
        cout<<"Invalid choice"<<endl;
        getch();
        system("cls");

}
    system("cls");
    if(cho==1)
        {
    cout<<"\n\nDo you want to continue as current player"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cout<<"Enter choice (1 or 2 )";
    cin>>ans;
        }
    }while(ans==1);
SetColor(14);
cout<<"THANK YOU"<<endl;
cout<<"YOU ARE BEING REDIRECTED TO LOGIN SECTION"<<endl;
getch();
SetColor(15);
system("cls");

return 0 ;
}

class admin
{
    string password ="";
public:
    void login()
    {

        char ch ;
        password="";
    cout<<"Password:"<<endl;
    ch = getch();
    while(ch!=13)
    {
        password.push_back(ch);
        cout<<"*";
        ch = getch();

    }
    cout<<password<<endl;
    cout<<endl;
char m[50] ;
ifstream infile;
infile.open("a.dat");
infile >> m;
cout<<m<<endl;

if(password==m)

    {
    cout<<"\nWelcome";
    operations();
    }
else
{


    cout<<"\nInvalid password"<<endl;
    cout<<"TRY AGAIN"<<endl;
    getch();
}
    }
void operations()
{
    int c , ans , cho = 1;
    A:
        do
        {


    system("cls");
    cout<<"1.ADD PLAYER"<<endl;
    cout<<"2.REMOVE PLAYER"<<endl;
    cout<<"3.CHANGE GAME PRICE"<<endl;
    cout<<"4.UPDATE PLAYER PROFILE"<<endl;
    cout<<"5.DISPLAY ALL PLAYER PROFILE "<<endl;
    cout<<"6.EXIT"<<endl;
    cout<<"ENTER CHOICE :";
    cin>>c;
    switch(c)
    {
        case 1 : addplayer();
        break;
        case 2 : remove_player();
        break;
        case 3 : changeprice();
        break;
        case 4 : update_profile();
        break;
        case 5: display_playerprofile();
        break;
        case 6:
            cout<<"YOU HAVE DECIDED TO QUIT"<<endl;
            getch();
            cho = 0 ;
            ans=0;
            break;
        default:cout<<"Invalid Entry!!!!!!!!!!!!!"<<endl<<"TRY AGAIN";
        getch();
        goto A;
    }
    system("cls");
    if(cho==1)
    {
    cout<<"Do you want to continue as ADMIN"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cout<<"Enter choice (1 or 2 ):"<<endl;
    cin>>ans;
    }
}while(ans==1);
SetColor(10);
cout<<"THANK YOU"<<endl;
cout<<"YOU ARE BEING REDIRECTED TO LOGIN PAGE"<<endl;
getch();
SetColor(15);

}
void addplayer()
{
    int ans , balance;
    char m[100];
    fstream file ,file2 ;
    no_of_players++;
    file.open("player.dat",ios::app |ios::out);
    file2.open("pnumber.dat");
    file2 << no_of_players ;
    file2.close();
    cout<<"ENTER USERNAME IN CAPS ONLY"<<endl;
    cout<<"USERNAME SHOULD CONTAIN ONLY 2 WORDS"<<endl;
    cout<<"Enter username :"<<endl;
    fflush(stdin);
    gets(m);
    file << endl;
    file << m ;
    cout<<"Enter Password :"<<endl;
    file << endl;
    fflush(stdin);
    gets(m);
    file << m;
    cout<<"Enter balance amount:"<<endl;
    cin>>balance;
    file << endl;
    file << balance;
file2<<no_of_players;
}
int changeprice()
{
    fstream file ;
    file.open("gameprice.dat");
    int i = 0 ,c , check1  = 0;
    while(i<2)
    {
       file >> price[i];
       i++;

    }
    cout<<"CHANGE GAME PRICE OF "<<endl;
    cout<<"1.SNAKE AND LADDERS"<<endl;
    cout<<"2.TIC TAC TOE"<<endl;
    cout<<"3.ROULETTE"<<endl;
    cout<<"ENTER CHOICE "<<endl;
    cin >> c ;
    switch(c)
    {
    case 1 :
        int new_price ;
        cout<<"ENTER NEW PRICE :"<<endl;
        cin >> new_price;
        price[0]= new_price;
        break;
    case 2:

        int new_price2 ;
        cout<<"ENTER NEW PRICE :"<<endl;
        cin >> new_price2;
        price[1]= new_price2;
        break;
    case 3 :
    int new_price3 ;
        cout<<"ENTER NEW PRICE :"<<endl;
        cin >> new_price3;
        price[2]= new_price3;
        break;
        default : cout << "INVALID ENTRY"<<endl;
        check1 = 100;
    }
SetColor(13);
if(check1!=100)
cout<<"GAME PRICE CHANGED"<<endl;
SetColor(15);
getch();
file.seekg(0);
i = 0 ;
while(i<3)
{
  file << price[i];
  file << endl;
  i++;
}
}

int remove_player()
{
    char username[100];
    fstream file ;
    fstream file2;
int i = 0 ;
    file2.open("pnumber.dat");
    int n , m = 0;
file2 >> n ;
    loadprofile();

    cout<<"Enter username"<<endl;;
    fflush(stdin);
    gets(username);
    fflush(stdin);

    while(i<n&m==0)
    {
        int c ;

    c=strcmp(player[i].username,username);
    if(c==0)
    {
        m = 1 ;

        modify(i);
        n--;

        file2.seekg(0);
        file2 << n ;
        break;
    }
    else
        i++;
    }
if (m==0)
{
    cout<<"\n\nPLAYER NOT REGISTERED\n\n";
getch();
}
else
{
    cout<<"PLAYER REMOVED SUCCESSFULLY"<<endl;
    getch();
}
}
void modify(int a)
{

    fstream file2;

    file2.open("pnumber.dat");
    int n ;
    file2 >> n ;

    for(;a<=n-1;a++)
    {
        strcpy(player[a].username , player[a+1].username);

        strcpy(player[a].password , player[a+1].password);

        player[a].balance  = player[a+1].balance;

    }

file_write();
}
void update_profile()
{
    char username[100];
    fstream file ;
    fstream file2;
int i = 0 ;
    file2.open("pnumber.dat");
    int n , m = 0;
file2 >> n ;
    loadprofile();

    cout<<"Enter username"<<endl;;
    fflush(stdin);
    gets(username);
    fflush(stdin);

    while(i<n&m==0)
    {
        int c ;

    c=strcmp(player[i].username,username);
    if(c==0)
    {
        m = 1 ;
int choice ;
        cout<<"UPDATE :"<<endl;
        cout<<"1.PASSWORD"<<endl;
        cout<<"2.BALANCE"<<endl;
        cout<<"ENTER CHOICE:"<<endl;
        cin >> choice ;
        switch(choice)
        {
        case 1 :
            cout<<"ENTER NEW PASSWORD:"<<endl;
            fflush(stdin);
            gets(player[i].password);
            file_write();
            break;
        case 2 :
            cout<<"ENTER NEW BALANCE:"<<endl;
            fflush(stdin);

            cin >>player[i].balance;
            file_write();
            break;
        default:cout<<"INVALID CHOICE";

                getch();
        }
        break;
    }
    else
        i++;
    }
if (m==0)
{
    cout<<"\n\nPLAYER NOT REGISTERED\n\n";
getch();
}
else
{
    cout<<"PLAYER PROFILE UPDATED SUCCESSFULLY"<<endl;
    getch();
}
}
void display_playerprofile()
{
    loadprofile();

    int i = 0;
    while(i<no_of_players)
    {
        SetColor(10);
        cout<<"USERNAME :"<<player[i].username<<endl;
        SetColor(12);
        cout<<"PASSWORD :"<<player[i].password<<endl;
        SetColor(11);
        cout<<"BALANCE :"<<player[i].balance<<endl;
        i++;

        SetColor(15);
        cout<<"PRESS ANY KEY"<<endl;
        getch();
    }

}
};

int loadprofile()
{
    read_no_of_players();
    system("cls");
int i = 0 ;
ifstream b;
char m[100] ;
b.open("player.dat");
while(b.eof()!=1)
{




b >> m ;

strcpy(player[i].username , m) ;
int n ;
b >> m ;

strcat(player[i].username," ");
strcat(player[i].username,m);

b >> m ;

strcpy(player[i].password,m);

b >> n ;

player[i].balance = n;


i++;

}
}

void playerlogin()
{
    char username[100];
    string password="";
    cout<<"ENTER USERNAME IN CAPS ONLY"<<endl;
    cout<<"Enter Username :";
    fflush(stdin);
    gets(username);
    fflush(stdin);

int i = 0 , sresult = 0;
while(i<no_of_players)
{
int c = strcmp(player[i].username,username);
if(c==0)

    {
        sresult = 1;
    cout<<"Welcome"<<endl;
    B:
        char ch ;
        password="";
    cout<<"Password:"<<endl;
    ch = getch();
    while(ch!=13)
    {
        password.push_back(ch);
        cout<<"*";
        ch = getch();
    }


if(password==player[i].password)
{
    cout<<"\nWElCOME  "<<player[i].username<<endl;
    cout<<"Your Balance is "<<player[i].balance<<endl;
    a = i ;
    GAME_MENU();

    break;

}

else
    {
    cout<<"\nInvalid password";
    cout<<"\n\n TRY AGAIN \n\n";
    getch();
    goto B;
    }
    }
else
    i++;
}
if(sresult==0)

{
    SetColor(11);
cout<<"PLAYER NOT REGISTERED"<<endl;
cout<<"YOU ARE BEING REDIRECTED TO LOGIN PAGE"<<endl;
getch();
SetColor(15);
}
}


int main()
{
    admin a ;;
    read_no_of_players();
int choice , ans ;
C :
do
  {

    cout<<"LOG IN AS :"<<endl;
    cout<<"1.ADMIN"<<endl;
    cout<<"2.PLAYER"<<endl;
    cout<<"3.EXIT"<<endl;
    cout<<"ENTER CHOICE :"<<endl;
    cin>>choice;
    switch(choice)
    {

    case 1:

    a.login();
break;
    case 2:
        loadprofile();
        playerlogin();

        break;
    case 3:
        goto b ;

        default:cout<<"Invalid choice"<<endl;

}
system("cls");
goto C ;
}while(1);

b:
SetColor(9);
        cout<<"THANK YOU"<<endl;
        getch();
        SetColor(15);
        exit(0);

}
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

/**********************************************************************************
Name         | Value
             |
Black        |   0
Blue         |   1
Green        |   2
Cyan         |   3
Red          |   4
Magenta      |   5
Brown        |   6
Light Gray   |   7
Dark Gray    |   8
Light Blue   |   9
Light Green  |   10
Light Cyan   |   11
Light Red    |   12
Light Magenta|   13
Yellow       |   14
White        |   15
******************************************************************************************/














