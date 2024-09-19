//���������� ��������� ������� ������
#include <stdio.h>

//��������� �������
void Calculation1(void);
void Calculation2(void);
void Calculation3(void);
void Calculation4(void);

//������� �������
int main()
{
  Calculation1();  //��������� ������������� ��������
  Calculation2();  //����� ������� �� �������
  Calculation3();  //��������� ���������� (�����������) ��������
  Calculation4();  //��������� �������������� �����
  return 0;        //������� ����, ����� ���������
}

//�������������� ��������
void Calculation1(void)
{
    //��������
    int x1=25+35;
    float x2=12.78+18.22;
    float x3=21.35+(float)15;
    //���������
    int x4=17-6;
    int x5=25-42;
    float x6=(float)21-13.54;
    //���������
    int x7=65*3;
    float x8=3.14*2.71;
    float x9=9.8*(float)4;
    //�������
    float x10=(float)32/(float)2;
    float x11=(float)35/(float)2;
    float x12=16.8/(float)4;
    float x13=(float)20/2.5;

    printf("Arithmetical operations: \n");  //����� ��������� � ������� �� ��������� ������
    printf("25+35=");          //����� ��������
    printf("%d \n", x1);       //����� ���������� � ������� �� ��������� ������
    printf("12.78+18.22=");    //����� ��������
    printf("%f \n", x2);       //����� ���������� � ������� �� ��������� ������
    printf("21.35+15=");       //����� ��������
    printf("%f \n", x3);       //����� ���������� � ������� �� ��������� ������
    printf("17-6=");           //����� ��������
    printf("%d \n", x4);       //����� ���������� � ������� �� ��������� ������
    printf("25-42=");          //����� ��������
    printf("%d \n", x5);       //����� ���������� � ������� �� ��������� ������
    printf("21-13.54=");       //����� ��������
    printf("%f \n", x6);       //����� ���������� � ������� �� ��������� ������
    printf("65*3=");           //����� ��������
    printf("%d \n", x7);       //����� ���������� � ������� �� ��������� ������
    printf("3.14*2.71=");      //����� ��������
    printf("%f \n", x8);       //����� ���������� � ������� �� ��������� ������
    printf("9.8*4=");          //����� ��������
    printf("%f \n", x9);       //����� ���������� � ������� �� ��������� ������
    printf("32/2=");           //����� ��������
    printf("%f \n", x10);      //����� ���������� � ������� �� ��������� ������
    printf("35/2=");           //����� ��������
    printf("%f \n", x11);      //����� ���������� � ������� �� ��������� ������
    printf("16.8/4=");         //����� ��������
    printf("%f \n", x12);      //����� ���������� � ������� �� ��������� ������
    printf("20/2.5=");         //����� ��������
    printf("%f \n", x13);      //����� ���������� � ������� �� ��������� ������
    printf("\n");              //������� �� ��������� ������
}

//���������� �������� �� �������
void Calculation2(void)
{
   int x1=12%4;
   int x2=15%4;
   int x3=27%3;
   float x4=21.4/4;

   printf("Remainder of division: \n");  //����� ��������� � ������� �� ��������� ������
   printf("12/4, rem=");      //����� ��������
   printf("%d \n", x1);       //����� ���������� � ������� �� ��������� ������
   printf("15/4, rem=");      //����� ��������
   printf("%d \n", x2);       //����� ���������� � ������� �� ��������� ������
   printf("27/3, rem=");      //����� ��������
   printf("%d \n", x3);       //����� ���������� � ������� �� ��������� ������
   printf("21.4/4, rem=");    //����� ��������
   printf("%f \n", x4);       //����� ���������� � ������� �� ��������� ������
   printf("\n");              //������� �� ��������� ������
}

//���������� ��������
void Calculation3(void)
{
  //�������� ���
  int x1=12|5;
  int x2=8|7;
  int x3=24|64;
  //�������� �
  int x4=27&3;
  int x5=16&0;
  int x6=32&1;
  //�������� ����. ���
  int x7=5^6;
  int x8=5^5;
  int x9=8^0;
  //�������� ��
  int x10=(6!=1);
  int x11=(1!=1);
  int x12=(0!=0);

  printf("Logic operations: \n");  //����� ��������� � ������� �� ��������� ������
  printf("12 OR 5=");    //����� ��������
  printf("%d \n", x1);   //����� ���������� � ������� �� ��������� ������
  printf("8 OR 7=");     //����� ��������
  printf("%d \n", x2);   //����� ���������� � ������� �� ��������� ������
  printf("24 OR 64=");   //����� ��������
  printf("%d \n", x3);   //����� ���������� � ������� �� ��������� ������
  printf("27 AND 3=");   //����� ��������
  printf("%d \n", x4);   //����� ���������� � ������� �� ��������� ������
  printf("16 AND 0=");   //����� ��������
  printf("%d \n", x5);   //����� ���������� � ������� �� ��������� ������
  printf("32 AND 1=");   //����� ��������
  printf("%d \n", x6);   //����� ���������� � ������� �� ��������� ������
  printf("5 XOR 6=");    //����� ��������
  printf("%d \n", x7);   //����� ���������� � ������� �� ��������� ������
  printf("5 XOR 5=");    //����� ��������
  printf("%d \n", x8);   //����� ���������� � ������� �� ��������� ������
  printf("8 XOR 0=");    //����� ��������
  printf("%d \n", x9);   //����� ���������� � ������� �� ��������� ������
  printf("6 NOT 1=");    //����� ��������
  printf("%d \n", x10);  //����� ���������� � ������� �� ��������� ������
  printf("1 NOT 1=");    //����� ��������
  printf("%d \n", x11);  //����� ���������� � ������� �� ��������� ������
  printf("0 NOT 0=");    //����� ��������
  printf("%d \n", x12);  //����� ���������� � ������� �� ��������� ������

  printf("\n");          //������� �� ��������� ������
}

//�������������� �����
void Calculation4(void)
{
 printf("Types conversions: \n");  //����� ��������� � ������� �� ��������� ������

 float a1=72.45;
 float b1=84.32;
 int x1=(int)(a1+b1);           //�������� ��������� ������ ����� ��� int
 printf("int x1=72.45+84.32="); //����� ��������
 printf("%d \n", x1);           //����� ���������� � ������� �� ��������� ������

 float a2=44.32;
 float b2=51.54;
 float x2=a2+b2;                  //��� ��� ��� ��������� � ����� ����� ���������� ����, ����� �������������� �� ���������.
 printf("float x2=44.32+51.54="); //����� ��������
 printf("%f \n", x2);             //����� ���������� � ������� �� ��������� ������

 int a3=53;
 float b3=2.54;
 float x3=(float)a3+b3;           //�������� ��������� ������ ����� ��� float
 printf("float x3=53+2.54=");     //����� ��������
 printf("%f \n", x3);             //����� ���������� � ������� �� ��������� ������

 int a4=12;
 int b4=22;
 float x4=(float)(a4+b4);         //�������� ��������� ������ ����� ��� float
 printf("float x4=12+22=");       //����� ��������
 printf("%f \n", x4);             //����� ���������� � ������� �� ��������� ������

 float a5=64.2154;
 int x5=(int)a5;                  //�������� ��������� ������ ����� ��� int
 printf("int x5=(int)64.2154=");  //����� ��������
 printf("%d \n", x5);             //����� ���������� � ������� �� ��������� ������

 int a6=42;
 float x6=(float)a6;              //�������� ��������� ������ ����� ��� float
 printf("float x6=(float)42=");   //����� ��������
 printf("%f \n", x6);             //����� ���������� � ������� �� ��������� ������
}
