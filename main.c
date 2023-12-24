#include <stdio.h>
struct person{
    char name[20];
    int age;

}p1;
void getdata();
void display();
void main() {

    getdata();
    display();
}
void getdata()
{
    printf("enter person name\n");
    scanf("%s", &p1.name);
    printf("enter person age\n");
    scanf("%d", &p1.age);

}
void display()
{
    printf("person name %s\n", p1.name);
    printf("person age %d\n", p1.age);
}