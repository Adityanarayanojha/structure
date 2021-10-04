

#include<stdio.h>
#include<string.h>

struct Employee
{
    char Name[50];
    int age;
    int Phone_No;
    int salary;

    
};


int main()
{

    struct Employee emp1;
    struct Employee emp2;
    struct Employee emp3;


    //Store Emp1 information
    strcpy(emp1.Name,"Chirag");
    strcpy(emp1.age,24);
    strcpy(emp1.Phone_No,123456788);
    strcpy(emp1.salary,20000);
    
    //Store Emp2 information
    strcpy(emp2.Name,"Arnav");
    strcpy(emp2.age,"31");
    strcpy(emp2.Phone_No,"1234567891");
    strcpy(emp2.salary,"56000");

    //Store Emp3 information
    strcpy(emp3.Name,"Shivam");
    strcpy(emp3.age,"45");
    strcpy(emp3.Phone_No,"8881101111");
    strcpy(emp3.salary,"30500");



    printf("Emp1 Name : %s\n",emp1.Name);
    printf("Emp1 Age : %d\n",emp1.age);
    printf("Emp1 Phone Number : %d\n",emp1.Phone_No);
    printf("Emp1 Name : %d\n",emp1.salary);


    printf("Emp2 Name : %s\n",emp2.Name);
    printf("Emp2 Age : %d\n",emp2.age);
    printf("Emp2 Phone Number : %d\n",emp2.Phone_No);
    printf("Emp2 Name : %d\n",emp2.salary);


    printf("Emp3 Name : %s\n",emp3.Name);
    printf("Emp3 Age : %d\n",emp3.age);
    printf("Emp3 Phone Number : %d\n",emp3.Phone_No);
    printf("Emp3 Name : %d\n",emp3.salary);





    return 0;
}
