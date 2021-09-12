#include <iostream>
#include<algorithm>
using namespace std;
#include <cstdlib>
#include <ctime>
char board[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char element[4]={'x','o','X','O'},ch,ch1;
int a,a1,turn,pos;
int human_pos[9],p,p1,z=0,f=0,q=0,i2,j=2,k,flag=0,q1;
int arr[9]={1,2,3,4,5,6,7,8,9};
//Function to decide the chance who will go 
//first and decide the element between X or O

//Toss for level 1
void decide_element1()
{
  cout<<" The one who choose first for toss will be the player 1"<<endl<<endl;
  cout<<"Enter 0 or 1 for Toss"<<endl;
  cin>>a;
  srand(time(0));
  a1 = rand()%2;

  if(a==a1)
  {
    turn = 0;
    cout<<"Player 1 Win"<<endl;
    cout<<"Choose your Counter "<<endl;
    cin>>ch;
    if(ch=='x')
    {
      ch1='o';
    }
    else if(ch=='o')
    {
      ch1='x';
    }
    else if(ch=='X')
    {
      ch1='O';
    }
    if(ch=='O')
    {
      ch1='X';
    }
  }
  else
  {
    turn = 1;
    cout<<"Player 2 Win"<<endl;
    cout<<"Choose your Counter "<<endl;
    cin>>ch1;
    if(ch1=='x')
    {
      ch='o';
    }
    else if(ch1=='o')
    {
      ch='x';
    }
    else if(ch1=='X')
    {
      ch='O';
    }
    if(ch1=='O')
    {
      ch='X';
    }
  }
}

// Toss for level 2 and 3 
void decide_element()
{
  cout<<"Enter 0 or 1 For Toss"<<endl;
  cin>>a;
  cout<<endl;
 
 srand(time(0));
 a1=rand()%2;
  if(a==a1)
  {
    turn=0;
    cout<<"You Wins The Toss"<<endl;
    cout<<endl;
    cout<<"Enter Your Element X or O"<<endl;
    cin>>ch;
    
     if(ch=='x')
    {
      ch1='o';
    }
    else if(ch=='X')
    {
      ch1='O';
    }
    else if(ch=='O')
    {
      ch1='X';
    }
    else if(ch=='o')
    {
      ch1='x';
    }
    cout<<endl<<"Computer Counter is "<<ch1<<endl;
    cout<<endl<<"You Will Start First"<<endl;
  }
  else
  {
    cout<<"Computer Wins The Toss"<<endl;
    cout<<endl;
     int v;
   
    v=rand()%4;
    ch1=element[v];
    if(v==0)
    {
      ch='o';
    }
    else if (v==1)
    {
      ch='x';
    }
    else if (v==2)
    {
      ch='O';
    }
    else if (v==3)
    {
      ch='X';
    }
    cout<<"Computers Choose "<<ch1<<endl;
    cout<<endl<<"Computer Will Start First"<<endl;
    turn=1;
  }
}

//Function to Display Board
inline void showboard(char board [3][3])
{
  int i,j;
  cout<<endl;
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      cout<<"  "<<board[i][j]<<"  ";
      if(j<2)
      {
        cout<<" | ";
      }
      }
      cout<<endl;
      if(i<2)
   cout<<"---------------------"<<endl;
     
   }
   cout<<endl<<endl;
   cout<<endl<<"--------------------------------------------------"<<endl;
   cout<<endl<<endl;
   
  }
  // Level 1
//Function to Decide Where Player 1 Will Put His Counter
   
void human_turn()
{
    int p3;
    cout<<endl<<"Player 1 Turn to Enter"<<endl;
    cin>>p;
    if(p==1 || p==2 || p==3)
    {
      p3=0;
      if(p==1)
      {
    board[p3][0]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==2)
      {
    board[p3][1]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==3)
      {
    board[p3][2]=ch;
    cout<<endl;
    showboard(board);
      }
    }
    else if(p==4 || p==5 || p==6)
    {
      p3=1;
      if(p==4)
      {
    board[p3][0]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==5)
      {
    board[p3][1]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==6)
      {
    board[p3][2]=ch;
    cout<<endl;
    showboard(board);
      } 
    }
    else if(p==7 || p==8 || p==9)
    {
      p3=2;
    if(p==7)
      {
    board[p3][0]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==8)
      {
    board[p3][1]=ch;
    cout<<endl;
    showboard(board);
      }
      else if(p==9)
      {
    board[p3][2]=ch;
    cout<<endl;
    showboard(board);
      }
    } 
}

//1st Level
int rand_om()
{ 
  int s;
    // srand(time(NULL));
     pos=rand() % 9 + 1;
     for(s=0;s<9;s++)
    {
   if(human_pos[s]==pos)
      {
        pos=0;
        rand_om();
     }
    }
     return pos;     
}
//1st Level
   //Function to Decide Where Player 2 Will Put His Counter
void human_turn1()
{
    int p4;
    cout<<endl<<"Player 2 Turn to Enter"<<endl;
    cin>>q1;
    if(q1==1 || q1==2 || q1==3)
    {
      p4=0;
      if(q1==1)
      {
    board[p4][0]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==2)
      {
    board[p4][1]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==3)
      {
    board[p4][2]=ch1;
    cout<<endl;
    showboard(board);
      }
    }
    else if(q1==4 || q1==5 || q1==6)
    {
      p4=1;
      if(q1==4)
      {
    board[p4][0]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==5)
      {
    board[p4][1]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==6)
      {
    board[p4][2]=ch1;
    cout<<endl;
    showboard(board);
      } 
    }
    else if(q1==7 || q1==8 || q1==9)
    {
      p4=2;
    if(q1==7)
      {
    board[p4][0]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==8)
      {
    board[p4][1]=ch1;
    cout<<endl;
    showboard(board);
      }
      else if(q1==9)
      {
    board[p4][2]=ch1;
    cout<<endl;
    showboard(board);
      }
    } 
}


//Function to Block Human Winning
int block(char board[3][3])
{
  if((board[0][0]==ch && board[1][0]==ch || board[2][0]==ch && board[1][0]==ch || board[2][0]==ch && board[0][0]==ch) && (board[0][0]==' ' || board[1][0]==' ' || board[2][0]==' '))
  {
    q=1;
  }
  else if((board[0][1]==ch && board[1][1]==ch || board[2][1]==ch && board[1][1]==ch || board[2][1]==ch && board[0][1]==ch) && (board[0][1]==' ' || board[1][1]==' ' || board[2][1]==' '))
  {
    q=2;
  }
  else if((board[0][2]==ch && board[1][2]==ch || board[2][2]==ch && board[1][2]==ch || board[2][2]==ch && board[0][2]==ch) && (board[0][2]==' ' || board[1][2]==' ' || board[2][2]==' '))
  {
    q=3;
  }
  else if((board[0][0]==ch && board[0][1]==ch || board[0][2]==ch && board[0][1]==ch || board[0][2]==ch && board[0][0]==ch) && (board[0][0]==' ' || board[0][1]==' ' || board[0][2]==' '))
  {
    q=4;
  }
  else if((board[1][0]==ch && board[1][1]==ch || board[1][1]==ch && board[1][2]==ch || board[1][2]==ch && board[1][0]==ch) && (board[1][0]==' ' || board[1][1]==' ' || board[1][2]==' '))
  {
    q=5;
  }
  else if((board[2][0]==ch && board[2][1]==ch || board[2][2]==ch && board[2][1]==ch || board[2][2]==ch && board[2][0]==ch) && (board[2][0]==' ' || board[2][1]==' ' || board[2][2]==' '))
  {
    q=6;
  }
  else if((board[0][0]==ch && board[1][1]==ch ||  board[2][2]==ch && board[1][1]==ch || board[2][2]==ch && board[0][0]==ch) && (board[0][0]==' ' || board[1][1]==' ' || board[2][2]==' '))
  {
    q=7;
  }
  else if((board[0][2]==ch && board[1][1]==ch || board[2][0]==ch && board[1][1]==ch || board[2][0]==ch && board[0][2]==ch) && (board[0][2]==' ' || board[1][1]==' ' || board[2][0]==' '))
  {
    q=8;
  }
  else
  {
    return 0;
  }
}

int block1(char board[3][3])
{
  if((board[0][0]==ch1 && board[1][0]==ch1 || board[2][0]==ch1 && board[1][0]==ch1 || board[2][0]==ch1 && board[0][0]==ch1) && (board[0][0]==' ' || board[1][0]==' ' || board[2][0]==' '))
  {
    q=1;
  }
  else if((board[0][1]==ch1 && board[1][1]==ch1 || board[2][1]==ch1 && board[1][1]==ch1 || board[2][1]==ch1 && board[0][1]==ch1) && (board[0][1]==' ' || board[1][1]==' ' || board[2][1]==' '))
  {
    q=2;
  }
  else if((board[0][2]==ch1 && board[1][2]==ch1 || board[2][2]==ch1 && board[1][2]==ch1 || board[2][2]==ch1 && board[0][2]==ch1) && (board[0][2]==' ' || board[1][2]==' ' || board[2][2]==' '))
  {
    q=3;
  }
  else if((board[0][0]==ch1 && board[0][1]==ch1 || board[0][2]==ch1 && board[0][1]==ch1 || board[0][2]==ch1 && board[0][0]==ch1) && (board[0][0]==' ' || board[0][1]==' ' || board[0][2]==' '))
  {
    q=4;
  }
  else if((board[1][0]==ch1 && board[1][1]==ch1 || board[1][1]==ch1 && board[1][2]==ch1 || board[1][2]==ch1 && board[1][0]==ch1) && (board[1][0]==' ' || board[1][1]==' ' || board[1][2]==' '))
  {
    q=5;
  }
  else if((board[2][0]==ch1 && board[2][1]==ch1 || board[2][2]==ch1 && board[2][1]==ch1 || board[2][2]==ch1 && board[2][0]==ch1) && (board[2][0]==' ' || board[2][1]==' ' || board[2][2]==' '))
  {
    q=6;
  }
  else if((board[0][0]==ch1 && board[1][1]==ch1 ||  board[2][2]==ch1 && board[1][1]==ch1 || board[2][2]==ch1 && board[0][0]==ch1) && (board[0][0]==' ' || board[1][1]==' ' || board[2][2]==' '))
  {
    q=7;
  }
  else if((board[0][2]==ch1 && board[1][1]==ch1 || board[2][0]==ch1 && board[1][1]==ch1 || board[2][0]==ch1 && board[0][2]==ch1) && (board[0][2]==' ' || board[1][1]==' ' || board[2][0]==' '))
  {
    q=8;
  }
  else
  {
    return 0;
  }
  
}
int fill_pos()
{ 
  if(q==1)
    {
          if(i2==0)
         {
           p1=1;
      
         }
       else if(i2==1)
        {
           p1=4;
     
         }
       else if(i2==2)
         {
           p1=7;
      
         }      
    }
    else if(q==2)
    {
      if(i2==0)
         {
           p1=2;
         
         }
     else  if(i2==1)
         {
            p1=5;
         }
     else  if(i2==2)
         {
           p1=8;
     
         }  
    }
    else if(q==3)
    {
      if(i2==0)
         {
           p1=3;
          
         }
     else if(i2==1)
        {
           p1=6;
     
         }
     else if(i2==2)
         {
           p1=9;

         }
    }
    else if(q==4)
    {
      if(i2==0)
         {
           p1=1;
      
         }
        else if(i2==1)
        {
           p1=2;
      
         }
      else if(i2==2)
         {
           p1=3;
      
         }
    }
    else if(q==5)
    {
      if(i2==0)
         {
           p1=4;
         }
       else  if(i2==1)
        {
           p1=5;     
         }
    else   if(i2==2)
         {
           p1=6;        
         }
    }
    else if(q==6)
    {
      if(i2==0)
       {
          p1=7;   
         }
       else if(i2==1)
        {
           p1=8;  
         }
        else if(i2==2)
         {
           p1=9;
         }
    }
    else if(q==7)
    {
     if(i2==0)
         {
           p1=1;
          
         }
      else if(i2==1)
        {
           p1=5;
       
         }
      else if(i2==2)
         {
           p1=9;
      
         }
    }
    else if(q==8)
    { 
      if(i2==0 && j==2)
         {
           p1=3;
       
         }
       else if(i2==1 && j==1)
        {
           p1=5;
      
         }
       else if(i2==2 && j==0)
         {
           p1=7;
        
         }
    }
    else
    {
      return 0;
    } 
}
//Fill Computer Counter in second level
int fill_counter(char board[3][3])
{
  int i2;
  if(q==1)
        {
          for(i2=0;i2<3;i2++)
          {
            if(board[i2][0]==' ')
            {
              board[i2][0]=ch1;
              fill_pos();
              break;
            }
          }
        }
    else if(q==2)
    {
      for(i2=0;i2<3;i2++)
          {
            if(board[i2][1]==' ')
            {
              board[i2][1]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==3)
    {
      for(i2=0;i2<3;i2++)
          {
            if(board[i2][2]==' ')
            {
              board[i2][2]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==4)
    {
      for(i2=0;i2<3;i2++)
          {
            if(board[0][i2]==' ')
            {
              board[0][i2]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==5)
    {
      for(i2=0;i2<3;i2++)
          {
            if(board[1][i2]==' ')
            {
              
              board[1][i2]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==6)
    {
      for(i2=0;i2<3;i2++)
          {
            if(board[2][i2]==' ')
            {
              board[2][i2]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==7)
    {
     for(i2=0;i2<3;i2++)
          {
            if(board[i2][i2]==' ')
            {
              board[i2][i2]=ch1;
              fill_pos();
              break;
            }
          }
    }
    else if(q==8)
    { 
      for(i2=0;i2<3;i2++)
        {
            if(board[i2][j]==' ')
            {
              board[i2][j]=ch1;
              fill_pos();
              break;
            }
            j--;
          }
        }
    
    else
    {
     return 0;
    }    
}

int counter(char board[3][3])
{
  if(p1==1)
  {
    board[0][0]=ch1;
  }
   else if(p1==2)
  {
    board[0][1]=ch1;
  }
  else if(p1==3)
  {
    board[0][2]=ch1;
  }
  else if(p1==4)
  {
    board[1][0]=ch1;
  }
  else if(p1==5)
  {
    board[1][1]=ch1;
  }
  else if(p1==6)
  {
    board[1][2]=ch1;
  }
  else if(p1==7)
  {
    board[2][0]=ch1;
  }
  else if(p1==8)
  {
    board[2][1]=ch1;
  }
  else if(p1==9)
  {
    board[2][2]=ch1;
  }
  else
  return 0;
}

//When Computer win toss 2nd Level
 //Function to Decide Where Computer Will Put His Counter
int computer_turn()
{
      if(z==0)
      {
        if(board[2][2]==' ')
        {
          p1=9;
          board[2][2]=ch1;
          showboard(board);
          
        }
      }
      else if(z==1)
      {
       if(board[0][0]==' ')
          {
          p1=1;
          board[0][0]=ch1;
          showboard(board);
          }
       else if(board[0][2]==' ')
          {
          p1=3;
          board[0][2]=ch1;
          showboard(board);
          }
       }
      else if(z==2)
      {  
       if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);  
        showboard(board);
        q=0;
        }
       else if(board[0][2]==' ')
       {
        p1=3;
        board[0][2]=ch1;
        showboard(board);
       }   
       else if(board[2][0]==' ')
       {
        p1=7;
        board[2][0]=ch1;
        showboard(board);
       }
       else if(board[1][1]==' ')
         {
          p1=5;
        board[1][1]=ch1;
        showboard(board);
        }  
      }
      else if(z==3)
      {
        
     if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);
        showboard(board);
        q=0;
        }
          else if(board[2][0]==' ')
        {
         p1=7;
        board[2][0]=ch1;
        showboard(board);
        }
        else if(board[1][1]==' ')
         {
          p1=5;
        board[1][1]=ch1;
        showboard(board); 
        }
      }
      else if(z==4)
      {
    if(block(board)==0 && block1(board)==0)
          {
            cout<<"Game Draw ";
            flag=1;
          }
      else if(board[1][1]==' ')
        {
          p1=5;
        board[1][1]=ch1;
        showboard(board);
        }
        else if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);
        showboard(board);
        q=0;
        }
        }
      else
      {
      return 0;
      }
}
 
 
 //When Human Win Toss 2nd Level
//Function to Decide Where Computer Will Put His Counterint computer__turn()
int computer__turn()
{
      if(z==0)
      {
        if((board[0][0]==ch || board[2][0]==ch || board[0][2]== ch || board[2][2]==ch))
        {                  
              p1=5;
              counter(board);
              showboard(board);
        }
        else if(board[2][2]==' ')
        {
          p1=9;
          board[2][2]=ch1;
          showboard(board);
        }
        else
        {
          p1=1;
          board[0][0]=ch1;
          showboard(board);
        }
      }
      else if(z==1)
      {
        if(q==0 && block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
   else if(((board[0][0]==ch && board[2][2]==ch) ||  (board[0][0]==ch && board[2][2]==ch)) || ((board[0][2]==ch && board[2][0]==ch) ||  (board[2][0]==ch && board[0][2]==ch)))
          {
            if(board[2][2]==ch)
          {
              p1=8;
              counter(board);
              showboard(board);
          }
          else if(board[0][0]==ch)
          {
              p1=4;
              counter(board);
              showboard(board);
          }
           else if(board[0][2]==ch)
          {
              p1=6;
              counter(board);
              showboard(board);
          }
           else if(board[2][0]==ch)
          {
              p1=8;
              counter(board);
              showboard(board);
          }
          }
        else if(board[0][2]==' ')
        {
          p1=3;
          board[0][2]=ch1;
          showboard(board);
        }
        else if(board[2][0]==' ')
        {
          p1=7;
          board[2][0]=ch1;
          showboard(board);
        }
        }
        else if(z==2)
        {
          if(block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
        else if(board[1][1]==' ')
        {
          board[1][1]=ch1;
          showboard(board);
        }
        else if(k<7)
        {
          int i;
          sort(human_pos, human_pos + k);
         for(i=0;i<k;i++)
         {
             if(human_pos[i]!=arr[i])
             {
             p1=arr[i];
             counter(board);
             showboard(board);
             break;
             }
         }
        }
    else if(block(board)==0 && block1(board)==0)
          {
            cout<<"Game Draw ";
            flag=1;
          }
        }
        else if(z==3)
        {
        if(q==0 && block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
   else if(block(board)==0 && block1(board)==0)
          {
            cout<<"Game Draw ";
            flag=1;
          }
        else
       {
         int i;
          sort(human_pos, human_pos + k);
         for(i=0;i<k;i++)
         {
             if(human_pos[i]!=arr[i])
             {
             p1=arr[i];
             counter(board);
             showboard(board);
             break;
             }
         }
       }
     }
}


//When Computer win toss 3rd level
 //Function to Decide Where Computer Will Put His Counter
int computer_turn3()
{
      if(z==0)
      {
        if(board[2][2]==' ')
        {
          p1=9;
          board[2][2]=ch1;
          showboard(board);
          
        }
      }
      else if(z==1)
      {
       if(board[0][0]==' ')
          {
          p1=1;
          board[0][0]=ch1;
          showboard(board);
          }
       else if(board[0][2]==' ')
          {
          p1=3;
          board[0][2]=ch1;
          showboard(board);
          }
       }
      else if(z==2)
      {  
       if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);  
        showboard(board);
        q=0;
        }
       else if(board[0][2]==' ')
       {
        p1=3;
        board[0][2]=ch1;
        showboard(board);
       }   
       else if(board[2][0]==' ')
       {
        p1=7;
        board[2][0]=ch1;
        showboard(board);
       }
       else if(board[1][1]==' ')
         {
          p1=5;
        board[1][1]=ch1;
        showboard(board);
        }  
      }
      else if(z==3)
      {
     if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);
        showboard(board);
        q=0;
        }
          else if(board[2][0]==' ')
        {
         p1=7;
        board[2][0]=ch1;
        showboard(board);
        }
        else if(board[1][1]==' ')
         {
          p1=5;
        board[1][1]=ch1;
        showboard(board); 
        }
      }
      else if(z==4)
      {
       if(block1(board)!=0)
       {
           fill_counter(board);
           showboard(board);
       }           
     else if(block(board)!=0)
       {
           fill_counter(board);
           showboard(board);
       }
    else if(block(board)==0 && block1(board)==0)
          {
            cout<<"Game Draw ";
            flag=1;
          }
      else if(board[1][1]==' ')
        {
          p1=5;
        board[1][1]=ch1;
        showboard(board);
        }
        else if(q==0 && block(board)!=0)
        {
        block(board);
        fill_counter(board);
        showboard(board);
        q=0;
        }
        }
      else
      {
      return 0;
      }
}
 
 //When Human Win Toss 3rd Level
//Function to Decide Where Computer Will Put His Counterint computer__turn()
int computer__turn3()
{
      if(z==0)
      {
        if((board[0][0]==ch || board[2][0]==ch || board[0][2]== ch || board[2][2]==ch))
        {                  
              p1=5;
              counter(board);
              showboard(board);
        }
        else if(board[2][2]==' ')
        {
          p1=9;
          board[2][2]=ch1;
          showboard(board);
        }
        else
        {
          p1=1;
          board[0][0]=ch1;
          showboard(board);
        }
      }
      else if(z==1)
      {
          if(block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
         else if(board[0][0]==ch)
          {
              p1=4;
              counter(board);
              showboard(board);
          }
           else if(board[0][2]==ch)
          {
              p1=6;
              counter(board);
              showboard(board);
          }
           else if(board[1][0]==ch)
          {
              p1=1;
              counter(board);
              showboard(board);
          }
          else if(board[1][2]==ch)
          {
              p1=3;
              counter(board);
              showboard(board);
          }
          }
        else if(z==2)
        {
          if(block1(board)!=0)
        {
          block1(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
         else if(block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
        else if(board[1][1]==' ')
        {
          board[1][1]=ch1;
          showboard(board);
        }
        else if(k<7)
        {
          int i;
          sort(human_pos, human_pos + k);
         for(i=0;i<k;i++)
         {
             if(human_pos[i]!=arr[i])
             {
             p1=arr[i];
             counter(board);
             showboard(board);
             break;
             }
         }
        }
    else if(block(board)==0 && block1(board)==0)
          {
            cout<<"Game Draw ";
            flag=1;
          }
        }
        else if(z==3)
        {
        if(block1(board)!=0)
          {
            fill_counter(board);
            showboard(board);
          }
        else if(q==0 && block(board)!=0)
        {
          block(board);
          fill_counter(board);
          showboard(board);
          q=0;
        }
   else if(block(board)==0 && block1(board)==0)
          {  
            cout<<"Game Draw ";
            flag=1;
          }
        else
       {
         int i;
          sort(human_pos, human_pos + k);
         for(i=0;i<k;i++)
         {
             if(human_pos[i]!=arr[i])
             {
             p1=arr[i];
             counter(board);
             showboard(board);
             break;
             }
         }
       }
     }
}

//Function to Check Winner
int winner(char board[3][3])
{
   if(board[0][0]==ch && board[1][0]==ch && board[2][0]==ch)
  {
    return  f=1;
  }
  if(board[0][1]==ch && board[1][1]==ch && board[2][1]==ch)
  {
    return f=1;
  }
  if(board[0][2]==ch && board[1][2]==ch && board[2][2]==ch)
  {
    return f=1;
  }
  if(board[0][0]==ch && board[0][1]==ch && board[0][2]==ch)
  {
    return f=1;
  }
   if(board[1][0]==ch && board[1][1]==ch && board[1][2]==ch)
  {
    return f=1;
  }
    if(board[2][0]==ch && board[2][1]==ch && board[2][2]==ch)
  {
    return f=1;
  }
   if(board[0][0]==ch && board[1][1]==ch && board[2][2]==ch)
  {
    return f=1;
  }
   if(board[0][2]==ch && board[1][1]==ch && board[2][0]==ch)
  {
    return f=1;
  }
  if(board[0][0]==ch1 && board[1][0]==ch1 && board[2][0]==ch1)
  {
    return f=2;
  }
  if(board[0][1]==ch1 && board[1][1]==ch1 && board[2][1]==ch1)
  {
    return f=2;
  }
  if(board[0][2]==ch1 && board[1][2]==ch1 && board[2][2]==ch1)
  {
    return f=2;
   } 
   if(board[0][0]==ch1 && board[0][1]==ch1 && board[0][2]==ch1)
  {
    return f=2;
  }
  if(board[1][0]==ch1 && board[1][1]==ch1 && board[1][2]==ch1)
  {
    return  f=2;
  }
   if(board[2][0]==ch1 && board[2][1]==ch1 && board[2][2]==ch1)
  {
    return f=2;
  }
 
   if(board[0][0]==ch1 && board[1][1]==ch1 && board[2][2]==ch1)
  {
    return f=2;
  }
  if(board[0][2]==ch1 && board[1][1]==ch1 && board[2][0]==ch1)
  {
    return f=2;
  }
  else
  {
    return f=0;
  }
}  


//Function to Declare Draw
void Draw()
{
  if(f==0)
  {
    cout<<" Game Draw "<<endl;
  }
}

int main()
{
  cout<<"                               CROSS AND ZERO GAME"<<endl;
  int choice;
  
  cout<<endl;
  cout<<"\nEnter Choice  1. for 2 Player, 2. for Medium, and 3. for Impossible"<<endl;
  cin>>choice;
  cout<<endl;
  if ( choice == 1)
  {
    decide_element1();
  }
  else{
    decide_element();
  }
  cout<<endl;
  cout<<endl<<"     Empty Board"<<endl;
  cout<<endl; 
  showboard(board);
  cout<<endl<<endl;
  
  
  cout<<endl;
  int i;
  for(i=0,k=0;i<9,k<9;i++,k++)
  { 
    if(turn==0)
    {
      human_turn();
      turn=1;
      human_pos[k]=p;
    }
    else
    {
      if(choice==1)
    {
     
      human_turn1();
      turn=0;    
      human_pos[k]=p1;
    } 
    else if(choice==2) 
    {      
     if(a==a1)
     {
      computer__turn();
      }
      else
      {
        computer_turn();
      }
    }
    else if(choice==3)
    {
     if(a==a1)
     {
      computer__turn3();
      }
      else
      {
        computer_turn3();
      } 
    }
      
      turn=0;    
      human_pos[k]=p1;
      p1=0;
      z++;
    } 
    
    if(flag==1)
    {
      break;
    }
    winner(board);
    //Printing Winner Player
    if(f==1)
    {
      if (choice == 1)
      {
        cout<<"Congratulations, Player 1 Win";
        break;
      }
      else {
        cout <<" Congratulations, You Win";
      break;
      }
    } 
    else if(f==2)
    {
      if (choice == 1)
      {
        cout<<"Congratulations, Player 2 Win";
        break;
      }
      else {
      cout<<"Computer Win ";
      break;
      }
    }
    else
    {
      if(i==8 && f==0)
      {
        Draw();
        break;
      }
      continue;
    }
    

     }
         
  return 0;
  }