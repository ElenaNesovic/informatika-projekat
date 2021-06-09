
#include <stdio.h>

char* obrni (char* arr, int size) {

    char* tmp = (char*) calloc (size, 1);
    int j = 0;
    for (int i = size-1; i >= 0; --i) {
        tmp[j] = arr[i];
        j++;
    }

    return tmp;

}

char *dekodiraj (int size, char t, char gore, char dole, char levo, char desno, char *kodirano) {

    int size1 = size/3;
    int size2 = size/12;

    char *res = (char*)calloc(size1 + 1, 1);
    kodirano[size] = '\0';

    char* kodirano2 = (char*) calloc (size1 + 1, 1);

    int j = 0;
    for (int i = 0; i < size; i += 3) {

        if (kodirano[i] == '0' && kodirano[i+1] == '0' && kodirano[i+2] == '0') kodirano2[j] = 'W';
        if (kodirano[i] == '0' && kodirano[i+1] == '0' && kodirano[i+2] == '1') kodirano2[j] = 'B';
        if (kodirano[i] == '0' && kodirano[i+1] == '1' && kodirano[i+2] == '0') kodirano2[j] = 'O';
        if (kodirano[i] == '0' && kodirano[i+1] == '1' && kodirano[i+2] == '1') kodirano2[j] = 'R';
        if (kodirano[i] == '1' && kodirano[i+1] == '0' && kodirano[i+2] == '0') kodirano2[j] = 'Y';
        if (kodirano[i] == '1' && kodirano[i+1] == '0' && kodirano[i+2] == '1') kodirano2[j] = 'G';
        j++;

    }

    //kodirano2 = obrni ( kodirano2, size1);
    kodirano2[size1] = '\0';
    free (kodirano);

    kodirano = (char*) calloc (size1 + 1, 1);
    kodirano = kodirano2;

    for (int i = 0; i < size1; ++i) {
/****************************************************************************/
        if (t == 'W') {

            if (kodirano[i] == 'B') {
                t = 'B';
                if (desno == 'B') {res[i] = '0';levo = 'W';desno = 'Y';}
                if (gore == 'B') {res[i] = '1';gore = 'Y'; dole = 'W';}
            }

            if (kodirano[i] == 'R') {
                t = 'R';
                if (desno == 'R') {res[i] = '0';levo = 'W';desno = 'Y';}
                if (gore == 'R') {res[i] = '1';gore = 'Y'; dole = 'W';}
            }

            if (kodirano[i] == 'G') {
                t = 'G';
                if (desno == 'G') {res[i] = '0';levo = 'W';desno = 'Y';}
                if (gore == 'G') {res[i] = '1';gore = 'Y'; dole = 'W';}
            }

            if (kodirano[i] == 'O') {
                t = 'O';
                if (desno == 'O') {res[i] = '0';levo = 'W';desno = 'Y';}
                if (gore == 'O') {res[i] = '1';gore = 'Y'; dole = 'W';}
            }

        }
/****************************************************************************/
        else if (t == 'B') {

           if (kodirano[i] == 'Y') {
                t = 'Y';
                if (desno == 'Y') {res[i] = '0';levo = 'B';desno = 'G';}
                if (gore == 'Y') {res[i] = '1';gore = 'G'; dole = 'B';}
            }

           if (kodirano[i] == 'R') {
                t = 'R';
                if (desno == 'R') {res[i] = '0';levo = 'B';desno = 'G';}
                if (gore == 'R') {res[i] = '1';gore = 'G'; dole = 'B';}
            }

           if (kodirano[i] == 'W') {
                t = 'W';
                if (desno == 'W') {res[i] = '0';levo = 'B';desno = 'G';}
                if (gore == 'W') {res[i] = '1';gore = 'G'; dole = 'B';}
            }

           if (kodirano[i] == 'O') {
                t = 'O';
                if (desno == 'O') {res[i] = '0';levo = 'B';desno = 'G';}
                if (gore == 'O') {res[i] = '1';gore = 'G'; dole = 'B';}
            }

        }
/****************************************************************************/
        else if (t == 'Y') {

           if (kodirano[i] == 'G') {
                t = 'G';
                if (desno == 'G') {res[i] = '0';levo = 'Y';desno = 'W';}
                if (gore == 'G') {res[i] = '1';gore = 'W'; dole = 'Y';}
            }

           if (kodirano[i] == 'R') {
                t = 'R';
                if (desno == 'R') {res[i] = '0';levo = 'Y';desno = 'W';}
                if (gore == 'R') {res[i] = '1';gore = 'W'; dole = 'Y';}
            }

           if (kodirano[i] == 'B') {
                t = 'B';
                if (desno == 'B') {res[i] = '0';levo = 'Y';desno = 'W';}
                if (gore == 'B') {res[i] = '1';gore = 'W'; dole = 'Y';}
            }

           if (kodirano[i] == 'O') {
                t = 'O';
                if (desno == 'O') {res[i] = '0';levo = 'Y';desno = 'W';}
                if (gore == 'O') {res[i] = '1';gore = 'W'; dole = 'Y';}
            }

        }
/****************************************************************************/
        else if (t == 'G') {

           if (kodirano[i] == 'W') {
                t = 'W';
                if (desno == 'W') {res[i] = '0';levo = 'G';desno = 'B';}
                if (gore == 'W') {res[i] = '1';gore = 'B'; dole = 'G';}
            }

           if (kodirano[i] == 'R') {
                t = 'R';
                if (desno == 'R') {res[i] = '0';levo = 'G';desno = 'B';}
                if (gore == 'R') {res[i] = '1';gore = 'B'; dole = 'G';}
            }

           if (kodirano[i] == 'Y') {
                t = 'Y';
                if (desno == 'Y') {res[i] = '0';levo = 'G';desno = 'B';}
                if (gore == 'Y') {res[i] = '1';gore = 'B'; dole = 'G';}
            }

           if (kodirano[i] == 'O') {
                t = 'O';
                if (desno == 'O') {res[i] = '0';levo = 'G';desno = 'B';}
                if (gore == 'O') {res[i] = '1';gore = 'B'; dole = 'G';}
            }

        }
/****************************************************************************/
        else if (t == 'O') {

           if (kodirano[i] == 'G') {
                t = 'G';
                if (desno == 'G') {res[i] = '0';levo = 'O';desno = 'R';}
                if (gore == 'G') {res[i] = '1';gore = 'R'; dole = 'O';}
            }

           if (kodirano[i] == 'Y') {
                t = 'Y';
                if (desno == 'Y') {res[i] = '0';levo = 'O';desno = 'R';}
                if (gore == 'Y') {res[i] = '1';gore = 'R'; dole = 'O';}
            }

           if (kodirano[i] == 'B') {
                t = 'B';
                if (desno == 'B') {res[i] = '0';levo = 'O';desno = 'R';}
                if (gore == 'B') {res[i] = '1';gore = 'R'; dole = 'O';}
            }

           if (kodirano[i] == 'W') {
                t = 'W';
                if (desno == 'W') {res[i] = '0';levo = 'O';desno = 'R';}
                if (gore == 'W') {res[i] = '1';gore = 'R'; dole = 'O';}
            }

        }
/****************************************************************************/
        else if (t == 'R') {

           if (kodirano[i] == 'B') {
                t = 'B';
                if (desno == 'B') {res[i] = '0';levo = 'R';desno = 'O';}
                if (gore == 'B') {res[i] = '1';gore = 'O'; dole = 'R';}
            }

           if (kodirano[i] == 'Y') {
                t = 'Y';
                if (desno == 'Y') {res[i] = '0';levo = 'R';desno = 'O';}
                if (gore == 'Y') {res[i] = '1';gore = 'O'; dole = 'R';}
            }

           if (kodirano[i] == 'G') {
                t = 'G';
                if (desno == 'G') {res[i] = '0';levo = 'R';desno = 'O';}
                if (gore == 'G') {res[i] = '1';gore = 'O'; dole = 'R';}
            }

           if (kodirano[i] == 'W') {
                t = 'W';
                if (desno == 'W') {res[i] = '0';levo = 'R';desno = 'O';}
                if (gore == 'W') {res[i] = '1';gore = 'O'; dole = 'R';}
            }

        }
/****************************************************************************/
    }
    res[size1] = '\0';

    char* res2 = (char*) calloc (size2 + 1, 1);
    j = 0;
    for (int i = 0; i < size1; i += 4) {

        if (res[i] == '0' && res[i+1] == '0' && res[i+2] == '0' && res[i+3] == '0') res2[j] = '0';
        if (res[i] == '0' && res[i+1] == '0' && res[i+2] == '0' && res[i+3] == '1') res2[j] = '1';
        if (res[i] == '0' && res[i+1] == '0' && res[i+2] == '1' && res[i+3] == '0') res2[j] = '2';
        if (res[i] == '0' && res[i+1] == '0' && res[i+2] == '1' && res[i+3] == '1') res2[j] = '3';
        if (res[i] == '0' && res[i+1] == '1' && res[i+2] == '0' && res[i+3] == '0') res2[j] = '4';
        if (res[i] == '0' && res[i+1] == '1' && res[i+2] == '0' && res[i+3] == '1') res2[j] = '5';
        if (res[i] == '0' && res[i+1] == '1' && res[i+2] == '1' && res[i+3] == '0') res2[j] = '6';
        if (res[i] == '0' && res[i+1] == '1' && res[i+2] == '1' && res[i+3] == '1') res2[j] = '7';
        if (res[i] == '1' && res[i+1] == '0' && res[i+2] == '0' && res[i+3] == '0') res2[j] = '8';
        if (res[i] == '1' && res[i+1] == '0' && res[i+2] == '0' && res[i+3] == '1') res2[j] = '9';
        j++;

    }

    res2[size2] = '\0';
    free (res);

    return res2;

}

int main () {

    char t = 'W';
    char desno = 'B';
    char dole = 'R';
    char levo = 'G';
    char gore = 'O';

    int k;
    scanf("%d",&k);

    //char a[k];
    char* a= (char*) malloc ((k+ 1)*1);
    scanf("%s", a);

    char* dekodirano;
    a = obrni(a,k);
    dekodirano = dekodiraj(k, t, gore, dole , levo, desno, a);

    printf("%s\n", dekodirano);

    return 0;

}
