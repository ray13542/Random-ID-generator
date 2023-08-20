#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int id_num(char ch)
{
    switch(ch)
    {
        case 'A': return 10 ;break;   case 'P': return 23; break;
        case 'B': return 11 ;break;   case 'Q': return 24; break;
        case 'C': return 12 ;break;   case 'R': return 25; break;
        case 'D': return 13 ;break;   case 'S': return 26; break;
        case 'E': return 14 ;break;   case 'T': return 27; break;
        case 'F': return 15 ;break;   case 'U': return 28; break;
        case 'G': return 16 ;break;   case 'V': return 29; break;
        case 'H': return 17 ;break;   case 'W': return 32; break;
        case 'I': return 34 ;break;   case 'X': return 30; break;
        case 'J': return 18 ;break;   case 'Y': return 31; break;
        case 'K': return 19 ;break;   case 'Z': return 33; break;
        case 'L': return 20 ;break;   
        case 'M': return 21 ;break;   
        case 'N': return 22 ;break;   
        case 'O': return 35 ;break;
    }
}

int main(){
    srand( time(NULL) );    //�]�w�üƺؤl
    char Capital[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
    //�ŧi�@�Ӧr���˥��}�C(A~Z)
    int  j;
    char City;
    int ID[9];
    int testnum = 0;
    int tmp;                    //�ŧi���n���
    printf("��J�ʧO(1�k2�k): ");   
    scanf("%d",&ID[0]);         //����Ʀr��1��2(1���k�ʡB2���k��)
    City = Capital[rand()%26];  //���r��������(�q�r���˥��}�C�H�����@�r��)
    for ( j = 0; j < 7; j++){
        ID[j+1] = rand()%10;
    }//��7��Ʀr �C���H����0~9
    tmp = id_num(City);         //�N�������r���ର�M�ΥN�X(A=10,B=11....)
    testnum = tmp/10 + (tmp%10)*9 + ID[0]*8+ID[1]*7+ID[2]*6+ID[3]*5+ID[4]*4+ID[5]*3+ID[6]*2+ID[7]*1;
    ID[8]= 10-testnum%10;
    //�ھڤ����p�⨭���Ҧr�������սX(�̫�@��)
    if (ID[0]== 1)
        printf("�ʧO���k\n");
    else
        printf("�ʧO���k\n");
    //��X�k�Τk
    printf("�X�ͦa: ");
    switch (City){
        case 'A': printf("�x�_��"); break;   case 'P': printf("���L��"); break;
        case 'B': printf("�x����") ;break;   case 'Q': printf("�Ÿq��"); break;
        case 'C': printf("�򶩥�") ;break;   case 'R': printf("�x�n��"); break;
        case 'D': printf("�x�n��") ;break;   case 'S': printf("������"); break;
        case 'E': printf("������") ;break;   case 'T': printf("�̪F��"); break;
        case 'F': printf("�s�_��") ;break;   case 'U': printf("�Ὤ��"); break;
        case 'G': printf("�y����") ;break;   case 'V': printf("�x�F��"); break;
        case 'H': printf("��鿤") ;break;   case 'W': printf("������"); break;
        case 'I': printf("�Ÿq��") ;break;   case 'X': printf("���"); break;
        case 'J': printf("�s�˿�") ;break;   case 'Y': printf("�����s�޲z��"); break;
        case 'K': printf("�]�߿�") ;break;   case 'Z': printf("�s����"); break;
        case 'L': printf("�x����") ;break;   
        case 'M': printf("�n�뿤") ;break;   
        case 'N': printf("���ƿ�") ;break;   
        case 'O': printf("�s�˥�") ;break;
    }
    //��X�X�ͦa
    printf("\nID: %c",City);
    for ( j = 0; j < 9; j++){
        printf("%d",ID[j]);
    }
    //��X�����Ҧr��

    return 0;
}