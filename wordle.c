#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char str[60];

    if (argc != 3) {
        printf("wordle: invalid number of args\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL) {
        printf("wordle: cannot open file\n");
        return 1;
    }

    char *blacklist = argv[2];

    // reading new lines in file
    while (fgets (str, 60, fp)!=NULL ) {  // not EOF
        int blacklisted = 0;
        if (strlen(str) != 6) {  // if word is not 5 letters long
            blacklisted = 1;
        }

        for (int i = 0; i < strlen(str); i++) {  // for each character in a string in the file
            for (int j = 0; j < strlen(blacklist); j++) {  // for each blacklist letter compare to curr char
                if (str[i] == blacklist[j]) {  // if curr char is a blacklist letter
                    blacklisted = 1;
                }
            }
        }
        if (blacklisted == 0) {  // if 5 letters long and doesn't contain any blacklisted letters
            printf("%s", str);
        }
    }
    
    fclose(fp);

    return 0;
}