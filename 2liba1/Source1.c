//��������� ����� 150504 ������� 21

#include <stdio.h>
#include <conio.h>


//����������� �������� �� ����� �� int + �������� �� ���� + ����������������

typedef struct
{
    int b1 : 8;
    int b2 : 8;
    int b3 : 8;
    int b4 : 8;
}bytes;

void main()
{
    int number;
    bytes* bn;
    printf("Please input number: ");
    while (!scanf_s("%d", &number)) //�������� �� ����
    {
        printf("Try again");
        rewind(stdin);
    }

    bn = (bytes*)&number;

    printf("Bytes of number:\n%d\n%d\n%d\n%d", -bn->b1, -bn->b2, -bn->b3, -bn->b4);
    _getch();
}