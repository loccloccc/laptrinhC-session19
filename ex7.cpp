#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
	int id ;
	char name[50];
	int age ; 
	char phonenumb[20];
}Student;
void deleteStudent(Student tudentList[] , int id , int *length);
int main(){
	int length = 5 ;
	Student studentList[length]=
	{
		{1,"Nguyen A" , 21 , "0123456789"},
		{2, "Hoang B ", 22, "0123456789"},
		{3,"Le C",23,"01231231"},
		{4,"Duong D",24,"0989872112"},
		{5,"Luu E",22,"012323345"},
	};
	printf("Danh sach sinh vien luc ban dau:\n");
	for(int i = 0 ; i< length ; i++)
	{
		printf("ID : %d\n",studentList[i].id);
		printf("Ten : %s\n",studentList[i].name);
		printf("Tuoi : %d\n",studentList[i].age);
		printf("SDT : %s\n",studentList[i].phonenumb);
		printf("\n");
	}
	int id ;
	printf("Moi ban nhap id sinh vien :");
	scanf("%d",&id);
	if(id <=1 || id > length)
	{
		printf("id nhap khong hop le .");
	}
	
	deleteStudent(studentList,id,&length);
	
	printf("Danh sach sinh vien luc sau:\n");
	for(int i = 0 ; i< length ; i++)
	{
		printf("ID : %d\n",studentList[i].id);
		printf("Ten : %s\n",studentList[i].name);
		printf("Tuoi : %d\n",studentList[i].age);
		printf("SDT : %s\n",studentList[i].phonenumb);
		printf("\n");
	}
	return 0 ;
}
void deleteStudent(Student studentList[] , int id ,  int *length)
{
	for(int i = 0 ; i< *length ; i++)
	{
		if(studentList[i].id==id)
		{
			for(int j = 0 ; j < *length-1 ;  j++){
				studentList[j]=studentList[j+1];
			}
		}
	};
	(*length)--;
	
}
