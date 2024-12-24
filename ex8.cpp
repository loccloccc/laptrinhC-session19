#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char fullName[100];
    int age;
    char phone[20];
} Student;

void printStudent(Student student[], int size);
void sapxep(Student student[], int size);

int main() {
    
    Student students[5] = {
        {1, "Hoang A", 30, "0123123123"},
        {2, "Hoang F", 20, "0112389012"},
        {3, "Hoang B", 31, "0128219031"},
        {4, "Hoang Q", 32, "0198019729"},
        {5, "Hoang I", 33, "0112313213"}
    };

    
    printf("In thong tin sinh vien truoc khi sap xep:\n");
    printStudent(students, 5);

   
    sapxep(students, 5);
    printf("\nIn sau khi sap xep:\n");
    printStudent(students, 5);

    return 0;
}

void printStudent(Student student[], int size) {
    for (int i = 0; i < size; i++) {
        printf("id: %d\n", student[i].id);
        printf("Ten: %s\n", student[i].fullName);
        printf("Tuoi: %d\n", student[i].age);
        printf("Sdt: %s\n", student[i].phone);
        printf("\n");
    }
}

void sapxep(Student student[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(student[i].fullName, student[j].fullName) > 0) {  
                Student temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
}
