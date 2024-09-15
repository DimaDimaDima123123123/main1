#include <iostream>
#include <C:\Users\Admin\source\repos\main\main\Point3D.h>
//по какой-то причине без указания пути, класс не подключался, пришлось указать конкретный путь
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Кол-во объектов вначале: " << Point3D::GetCount() << endl;

    Point3D p1;
    cout << "Введите значения для p1: \n";
    p1.Input(); 
    cout << "Кол-во объектов после реализации p1: " << Point3D::GetCount() << endl;

    Point3D p2(1, 2, 3);
    cout << "Введите значения для p2: \n";
    p2.Input(); 
    cout << "Кол-во объектов после реализации p2: " << Point3D::GetCount() << endl;

    Point3D p3;
    p3.Init(4, 5, 6);
    cout << "Введите значения для p3: \n";
    p3.Input();  
    cout << "Кол-во объектов после реализации и инициализации p3: " << Point3D::GetCount() << endl;

    Point3D p4(7, 8, 9);
    cout << "Кол-во объектов после реализации p4: " << Point3D::GetCount() << endl;
    
    cout << "Кол-во объектов после удаления p4: " << Point3D::GetCount() << endl;

    return 0;
}