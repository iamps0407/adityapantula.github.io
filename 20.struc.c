#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "Carter";
    people[0].number = "+1-456-1000";

    people[1].name = "David";
    people[1].number = "+1-456-1000";

    people[2].name = "John";
    people[2].number = "+4-246-7892";

    string input_name = get_string("Enter name to search: ");
    for(int i=0; i<3; i++)
    {
        if (strcmp(people[i].name, input_name)==0)
        {
            printf("Found %s\nNumber: %s\n",people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;

}
