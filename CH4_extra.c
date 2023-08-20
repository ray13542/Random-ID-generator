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
    srand( time(NULL) );    //設定亂數種子
    char Capital[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
    //宣告一個字母樣本陣列(A~Z)
    int  j;
    char City;
    int ID[9];
    int testnum = 0;
    int tmp;                    //宣告必要整數
    printf("輸入性別(1男2女): ");   
    scanf("%d",&ID[0]);         //首位數字取1或2(1為男性、2為女性)
    City = Capital[rand()%26];  //首字母為城市(從字母樣本陣列隨機取一字母)
    for ( j = 0; j < 7; j++){
        ID[j+1] = rand()%10;
    }//後7位數字 每位隨機取0~9
    tmp = id_num(City);         //將城市之字母轉為專用代碼(A=10,B=11....)
    testnum = tmp/10 + (tmp%10)*9 + ID[0]*8+ID[1]*7+ID[2]*6+ID[3]*5+ID[4]*4+ID[5]*3+ID[6]*2+ID[7]*1;
    ID[8]= 10-testnum%10;
    //根據公式計算身分證字號的測試碼(最後一位)
    if (ID[0]== 1)
        printf("性別為男\n");
    else
        printf("性別為女\n");
    //輸出男或女
    printf("出生地: ");
    switch (City){
        case 'A': printf("台北市"); break;   case 'P': printf("雲林縣"); break;
        case 'B': printf("台中市") ;break;   case 'Q': printf("嘉義縣"); break;
        case 'C': printf("基隆市") ;break;   case 'R': printf("台南縣"); break;
        case 'D': printf("台南市") ;break;   case 'S': printf("高雄縣"); break;
        case 'E': printf("高雄市") ;break;   case 'T': printf("屏東縣"); break;
        case 'F': printf("新北市") ;break;   case 'U': printf("花蓮縣"); break;
        case 'G': printf("宜蘭縣") ;break;   case 'V': printf("台東縣"); break;
        case 'H': printf("桃園縣") ;break;   case 'W': printf("金門縣"); break;
        case 'I': printf("嘉義市") ;break;   case 'X': printf("澎湖縣"); break;
        case 'J': printf("新竹縣") ;break;   case 'Y': printf("陽明山管理局"); break;
        case 'K': printf("苗栗縣") ;break;   case 'Z': printf("連江縣"); break;
        case 'L': printf("台中縣") ;break;   
        case 'M': printf("南投縣") ;break;   
        case 'N': printf("彰化縣") ;break;   
        case 'O': printf("新竹市") ;break;
    }
    //輸出出生地
    printf("\nID: %c",City);
    for ( j = 0; j < 9; j++){
        printf("%d",ID[j]);
    }
    //輸出身份證字號

    return 0;
}