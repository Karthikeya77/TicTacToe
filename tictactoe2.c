#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    char data;
    struct node *next;
}Node;
void TICTACTOE();
void tictactoe();
Node* head;
char P1[100],P2[100];
int main()
{
    printf("\n\t\t\t\t\t\t\tTICTACTOE\n\n\n");
    printf("Enter Player1 name :");
    scanf("%s",P1);
    printf("Enter Player2 name :");
    scanf("%s",P2);
    printf("\nThis is the model of tictactoe,\n\n");
    TICTACTOE();
    tictactoe();
}

void TICTACTOE()
{
    printf("\t\t\t  1 | 2 | 3 \t\t\t\n");
    printf("\t\t\t-------------\n");
    printf("\t\t\t  4 | 5 | 6 \t\t\t\n");
    printf("\t\t\t-------------\n");
    printf("\t\t\t  7 | 8 | 9 \t\t\t\n\n");
}

void front_insert(Node **h)
{
    Node *ptr;
    ptr=(Node*)malloc(sizeof(Node));
    ptr->data=' ';
    ptr->next=*h;
    *h=ptr;
}

void tictactoe()
{
    int x,y;
    char a=' ';char b=' ';char c=' ';char d=' ';char e=' ';char f=' ';char g=' ';char h=' ';char i=' ';
    for(int j=1;j<10;j++)
    {
        front_insert(&head);
    }
    while(1)
    {
    printf("%s turn,\n",P1);
    printf("Enter the number to place your 'O' in it's place_");
    scanf("%d",&x);
    Node *ptr;
    ptr=head;int k=0;
    switch(x)
    {
    case 1: a = ptr->data='O';
            break;
    case 2: ptr=ptr->next;
            b = ptr->data='O';
            break;
    case 3: while(k!=2)
            {
                ptr=ptr->next;
                k++;
            }
            c = ptr->data='O';
            break;
    case 4: while(k!=3)
            {
                ptr=ptr->next;
                k++;
            }
            d = ptr->data='O';
            break;
    case 5: while(k!=4)
            {
                ptr=ptr->next;
                k++;
            }
            e = ptr->data='O';
            break;
    case 6: while(k!=5)
            {
                ptr=ptr->next;
                k++;
            }
            f = ptr->data='O';
            break;
    case 7: while(k!=6)
            {
                ptr=ptr->next;
                k++;
            }
            g = ptr->data='O';
            break;
    case 8: while(k!=7)
            {
                ptr=ptr->next;
                k++;
            }
            h = ptr->data='O';
            break;
    case 9:  while(k!=8)
            {
                ptr=ptr->next;
                k++;
            }
            i = ptr->data='O';
            break;
    default:{ printf("Enter an integer between 1 & 9 inclusively!!\n\n");
              tictactoe();
            }
    }
    printf("\t\t\t  %c | %c | %c \t\t\t\n",a,b,c);
    printf("\t\t\t-------------\n");
    printf("\t\t\t  %c | %c | %c \t\t\t\n",d,e,f);
    printf("\t\t\t-------------\n");
    printf("\t\t\t  %c | %c | %c \t\t\t\n\n",g,h,i);
    if((a=='O' && b==a && c==a)||(d=='O' && e==d && f==e)||(g==h && h==i && i=='O')||(a=='O' && e=='O' && i==e)||(c=='O' && e=='O' && g==c)||(a=='O' && d=='O' && g=='O')||(b=='O' && e=='O' && h=='O')||(c=='O' && f=='O' && i=='O'))
        {printf("%s wins...",P1);
         break;}

    printf("%s turn,\n",P2);
    printf("Enter the number to place your 'X' in it's place_");
    scanf("%d",&y);
    Node *temp;
    temp=head;int l=0;
    switch(y)
    {
    case 1: a = temp->data='X';
            break;
    case 2: temp=temp->next;
            b = temp->data='X';
            break;
    case 3: while(l!=2)
            {
                temp=temp->next;
                l++;
            }
            c = temp->data='X';
            break;
    case 4: while(l!=3)
            {
                temp=temp->next;
                l++;
            }
            d = temp->data='X';
            break;
    case 5: while(l!=4)
            {
                temp=temp->next;
                l++;
            }
            e = temp->data='X';
            break;
    case 6: while(l!=5)
            {
                temp=temp->next;
                l++;
            }
            f = temp->data='X';
            break;
    case 7: while(l!=6)
            {
                temp=temp->next;
                l++;
            }
            g = temp->data='X';
            break;
    case 8: while(l!=7)
            {
                temp=temp->next;
                l++;
            }
            h = temp->data='X';
            break;
    case 9:  while(l!=8)
            {
                temp=temp->next;
                l++;
            }
            i = temp->data='X';
            break;
    default:{ printf("Enter an integer between 1 & 9 inclusively!!\n\n");}
    }
    printf("\t\t\t  %c | %c | %c \t\t\t\n",a,b,c);
    printf("\t\t\t-------------\n");
    printf("\t\t\t  %c | %c | %c \t\t\t\n",d,e,f);
    printf("\t\t\t-------------\n");
    printf("\t\t\t  %c | %c | %c \t\t\t\n\n",g,h,i);

    if((a=='X' && b==a && c==a)||(d=='X' && e==d && f==e)||(g==h && h==i && i=='X')||(a=='X' && e=='X' && i==e)||(c=='X' && e=='X' && g==c)||(a=='X' && d=='X' && g=='X')||(b=='X' && e=='X' && h=='X')||(c=='X' && f=='X' && i=='X'))
        {
            printf("%s wins...",P2);
            break;
        }
}
}
