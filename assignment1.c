#include<stdio.h>

struct students{
long stid;
int age;
float marks;

};

void main()
{
    int n;
    printf("Enter number of students");
    scanf("%d",&n);
    struct students st[n-1];
    printf("Enter records of %d students\n",n);
    int i;
    for(i=0;i<n;i++)
      {
      printf("Enter student id of student %d\n",(i+1));
      scanf("%ld",&st[i].stid);
      printf("Enter age of student %d\n",(i+1));
      scanf("%d",&st[i].age);
      printf("Enter marks of student %d\n",(i+1));
      scanf("%f",&st[i].marks);

      }
      for(i=0;i<n;i++)
      {
          printf("Student %d details\n",i+1);
          printf("Student id:%ld\n",st[i].stid);
          printf("Student Age:%d\n",st[i].age);
          printf("Student Marks:%f\n",st[i].marks);

          if(st[i].age<=20){printf("Student %d has failed\n\n",i+1);}
          else if(st[i].marks<65){printf("Student %d has failed\n\n",i+1);}
          else {printf("Student %d has passed\n\n ",i+1);}
      }




}

