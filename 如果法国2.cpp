
#ifndef CLIENT_H 
#define CLIENT_H 
// ���еľ�̬��ԱΪ������ԣ�Ϊ���е���Ķ���ͬӵ��
class client{ 
public : 
client(); 
~client(); 
4 
static void ChangeServerName( char ss); // �ı����������
static void showServerName(); 
static void showClientNum(); 
private : 
static char ServerName; // �������������������˵��
static int ClientNum; // ��¼�Ѷ���Ŀͻ���������������������˵��
}; 
#endif


//client.cpp 
#include <iostream>
#include "client.h"
using namespace std; 
client::client(){ ClientNum++; } // ����һ�����󣨿ͻ���
client::~client(){ ClientNum--; } // ����һ�����󣨿ͻ���
void client::ChangeServerName( char sn){ ServerName=sn; } // �� static 
void client::showServerName(){ cout<< "���������� "<<ServerName<<endl; } 
void client::showClientNum(){ cout<< "�ͻ������� "<< ClientNum <<endl; } 
// �������ļ��������ĳ���������޶����ж�����˵������ʱҲ���Խ��г�ʼ����
char client::ServerName= 'A'; // �� static
int client::ClientNum=0; 



//lab5_2.cpp 
#include <iostream>
#include "client.h"
using namespace std; 
void main(){ 
client::showServerName(); // ��ʼ״̬
client::showClientNum(); // �������þ�̬��Ա����
5 
client::ChangeServerName('B'); 
client a; // ����һ���ͻ�
a. showServerName(); // ���������þ�̬��Ա����
a. showClientNum(); 
{ 
client b; // ����һ���ͻ�
b. showServerName(); 
b. showClientNum(); 
}// ����һ���ͻ�
client::showServerName(); 
client::showClientNum(); 
}

