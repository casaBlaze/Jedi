
#ifndef CLIENT_H 
#define CLIENT_H 
// 其中的静态成员为类的属性，为所有的类的对象共同拥有
class client{ 
public : 
client(); 
~client(); 
4 
static void ChangeServerName( char ss); // 改变服务器名称
static void showServerName(); 
static void showClientNum(); 
private : 
static char ServerName; // 保存服务器名，引用性说明
static int ClientNum; // 记录已定义的客户（即对象）数量，引用性说明
}; 
#endif


//client.cpp 
#include <iostream>
#include "client.h"
using namespace std; 
client::client(){ ClientNum++; } // 增加一个对象（客户）
client::~client(){ ClientNum--; } // 减少一个对象（客户）
void client::ChangeServerName( char sn){ ServerName=sn; } // 无 static 
void client::showServerName(){ cout<< "服务器名： "<<ServerName<<endl; } 
void client::showClientNum(){ cout<< "客户总数： "<< ClientNum <<endl; } 
// 必须在文件作用域的某处用类名限定进行定义性说明，这时也可以进行初始化。
char client::ServerName= 'A'; // 无 static
int client::ClientNum=0; 



//lab5_2.cpp 
#include <iostream>
#include "client.h"
using namespace std; 
void main(){ 
client::showServerName(); // 初始状态
client::showClientNum(); // 类名引用静态成员函数
5 
client::ChangeServerName('B'); 
client a; // 增加一个客户
a. showServerName(); // 对象名引用静态成员函数
a. showClientNum(); 
{ 
client b; // 增加一个客户
b. showServerName(); 
b. showClientNum(); 
}// 减少一个客户
client::showServerName(); 
client::showClientNum(); 
}

