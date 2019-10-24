#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Let's talk!\n");
    char s[256], name[50],b;
    int age, c, i;
    gets(s);
    printf("%s to you too. What's your name?\n", s);
    gets(name);
    printf("Oh hi, %s. How old are you?\n", s);
    scanf("%d", &age);
    printf("Oh, you are still young. \n");
    while ((c = getchar()) != '\n' && c != EOF);
    gets(s);
    printf("I'm sorry, not sure what this \"%s\" means. Gotta go.'\n", s);
    printf("Do you have a hobby?\n");
    gets(s);
    for (i = 0; i <= strlen(s) - 1; i++)
        s[i] = toupper(s[i]);
    if (strcmp(s, "YES") == 0)
        printf("Give me one example, please! \n");
    else
        printf("Oh, really? I don't believe you. Think about it and give me an example.\n");
    gets(s);
    printf("That sounds nice. I like it! Aaand... what is your favourite colour?\n");
    gets(s);
    printf("Oh, is that a colour? I haven't heard about it yet. And what do you like to eat?\n");
    gets(s);
    printf("I don't like this so much, but it's your choice, it's a free word :)\n");
    printf("Do you like to read?\n");
    gets(s);
    for (i = 0; i <= strlen(s) - 1; i++)
        s[i] = toupper(s[i]);
    if (strcmp(s, "YES") == 0)
    {
        printf("Which is your favourite genre? Please select one of it and input its number\n");
        printf("1.Classic\n 2.Romance\n 3.Thriller\n 4.Fantasy\n 5.Contemporary\n");
        scanf("%c", &b);
        switch (b) {
            case '1':
                printf("Oh, I like it so much. 'The Picture of Dorian Gray' is my favourite book. But yours?\n");
                break;
            case '2':
                printf("Oh, I like it so much. 'Pride and Prejudice' is my favourite book. But yours?\n");
                break;
            case '3':
                printf("Oh, I like it so much. 'Eeny Meeny' is my favourite book. But yours?\n");
                break;
            case '4':
                printf("Oh, I like it so much. 'Harry Potter' is my favourite book. But yours?\n");
                break;
            case '5':
                printf("Oh, I like it so much. 'After' is my favourite book. But yours?\n");
                break;
            default:
                printf("I asked you to choose a number!!\n");
        }

        gets(s);
        printf("I like %s a little bit, it is nice.\n", s);
    }
    else
        printf("I'm sorry to heard that, but I hope you will discover a book to like soon\n");
    printf("Do you practice any sport?\n");
    for (i = 0; i <= strlen(s) - 1; i++)
        s[i] = toupper(s[i]);
    if (strcmp(s, "YES") == 0) {
        printf("That's fine. Which sport?\n");
        gets(s);
        printf("I like %s too\n", s);
    } else
        printf("You should do that. It is important to your health!\n");
    printf("I'm so sorry, but I don't have much power anymore. It was nice to talk to you. I'm glad I met you %s! See you soon!\n",
           name);
    gets(s);

    return 0;
}