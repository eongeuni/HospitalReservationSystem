#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

typedef struct ReservationInfo {
    char* patient[10];
    char* purpose[100];
    char* telephone_number[12];
}ReservationInfo;


typedef struct Hospital {
	char Name[100];
	char Location[100];
    ReservationInfo RVI[24];


}Hospital;

void get_hos_info(Hospital* HS) {
    printf("Insert Hospital Name:");
    getchar();
    scanf("%[^\n]", HS->Name);  // ù ��° �Է��� ���� �ùٸ� ���
    getchar();  // scanf �� �����ִ� �ٹٲ� ���� ����

    printf("Insert Hospital Location:");
    scanf("%[^\n]", HS->Location);  // �� ��° �Է��� ���� �ùٸ� ���
    getchar();  // ���������� �����ִ� �ٹٲ� ���� ����

    for (int i = 0;i < 24;i++) {
        strcpy(HS->RVI[i].patient, ""); // �� ���ڿ��� �ʱ�ȭ
        strcpy(HS->RVI[i].purpose, ""); // �� ���ڿ��� �ʱ�ȭ
        strcpy(HS->RVI[i].telephone_number, ""); // �� ���ڿ��� �ʱ�ȭ
    }
    printf("\n");
}
