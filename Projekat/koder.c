#include <stdio.h>

char *bin(int n)
{
  int c, d, t;
  char *p;

  t = 0;
  p = (char*)malloc(4+1);

  for (c = 3 ; c >= 0 ; c--)
  {
    d = n >> c;

    if (d & 1)
      *(p+t) = '1';
    else
      *(p+t) = '0';

    t++;
  }
  *(p+t) = '\0';

  return  p;
}

char* obrni (char* arr, int size) {

    char* tmp = (char*) calloc (size, 1);
    int j = 0;
    for (int i = size-1; i >= 0; --i) {
        tmp[j] = arr[i];
        j++;
    }

    return tmp;

}

struct ret {
    char t,gore,dole,levo,desno;
    char *res;
};

struct ret kodiraj_jedan (int size, char t, char gore, char dole, char levo, char desno, char *b) {

    char *res = (char*)calloc(size, 1);

    for (int i = 0; i < size; ++i) {
/****************************************************************************/
        if ((b[i] == '0') && (t == 'W')) {

            if (desno == 'B') {res[i] = 'B'; t = 'B';}
            if (desno == 'R') {res[i] = 'R'; t = 'R';}
            if (desno == 'G') {res[i] = 'G'; t = 'G';}
            if (desno == 'O') {res[i] = 'O'; t = 'O';}
            levo = 'W';
            desno = 'Y';

        }
        else if ((b[i] == '1') && (t == 'W')) {

            if (gore == 'O') {res[i] = 'O'; t = 'O';}
            if (gore == 'B') {res[i] = 'B'; t = 'B';}
            if (gore == 'R') {res[i] = 'R'; t = 'R';}
            if (gore == 'G') {res[i] = 'G'; t = 'G';}
            gore = 'Y';
            dole = 'W';

        }
/****************************************************************************/
        else if ((b[i] == '0') && (t == 'B')) {

            if (desno == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (desno == 'R') {res[i] = 'R'; t = 'R';}
            if (desno == 'W') {res[i] = 'W'; t = 'W';}
            if (desno == 'O') {res[i] = 'O'; t = 'O';}
            levo = 'B';
            desno = 'G';

        }
        else if ((b[i] == '1') && (t == 'B')) {

            if (gore == 'O') {res[i] = 'O'; t = 'O';}
            if (gore == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (gore == 'R') {res[i] = 'R'; t = 'R';}
            if (gore == 'W') {res[i] = 'W'; t = 'W';}
            gore = 'G';
            dole = 'B';

        }
/****************************************************************************/
        else if ((b[i] == '0') && (t == 'Y')) {

            if (desno == 'G') {res[i] = 'G'; t = 'G';}
            if (desno == 'R') {res[i] = 'R'; t = 'R';}
            if (desno == 'B') {res[i] = 'B'; t = 'B';}
            if (desno == 'O') {res[i] = 'O'; t = 'O';}
            levo = 'Y';
            desno = 'W';

        }
        else if ((b[i] == '1') && (t == 'Y')) {

            if (gore == 'O') {res[i] = 'O'; t = 'O';}
            if (gore == 'G') {res[i] = 'G'; t = 'G';}
            if (gore == 'R') {res[i] = 'R'; t = 'R';}
            if (gore == 'B') {res[i] = 'B'; t = 'B';}
            gore = 'W';
            dole = 'Y';

        }
/****************************************************************************/
        else if ((b[i] == '0') && (t == 'G')) {

            if (desno == 'W') {res[i] = 'W'; t = 'W';}
            if (desno == 'R') {res[i] = 'R'; t = 'R';}
            if (desno == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (desno == 'O') {res[i] = 'O'; t = 'O';}
            levo = 'G';
            desno = 'B';

        }
        else if ((b[i] == '1') && (t == 'G')) {

            if (gore == 'O') {res[i] = 'O'; t = 'O';}
            if (gore == 'W') {res[i] = 'W'; t = 'W';}
            if (gore == 'R') {res[i] = 'R'; t = 'R';}
            if (gore == 'Y') {res[i] = 'Y'; t = 'Y';}
            gore = 'B';
            dole = 'G';

        }
/****************************************************************************/
        else if ((b[i] == '0') && (t == 'O')) {

            if (desno == 'G') {res[i] = 'G'; t = 'G';}
            if (desno == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (desno == 'B') {res[i] = 'B'; t = 'B';}
            if (desno == 'W') {res[i] = 'W'; t = 'W';}
            levo = 'O';
            desno = 'R';

        }
        else if ((b[i] == '1') && (t == 'O')) {

            if (gore == 'W') {res[i] = 'W'; t = 'W';}
            if (gore == 'G') {res[i] = 'G'; t = 'G';}
            if (gore == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (gore == 'B') {res[i] = 'B'; t = 'B';}
            gore = 'R';
            dole = 'O';

        }
/****************************************************************************/
        else if ((b[i] == '0') && (t == 'R')) {

            if (desno == 'B') {res[i] = 'B'; t = 'B';}
            if (desno == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (desno == 'G') {res[i] = 'G'; t = 'G';}
            if (desno == 'W') {res[i] = 'W'; t = 'W';}
            levo = 'R';
            desno = 'O';

        }
        else if ((b[i] == '1') && (t == 'R')) {


            if (gore == 'W') {res[i] = 'W'; t = 'W';}
            if (gore == 'B') {res[i] = 'B'; t = 'B';}
            if (gore == 'Y') {res[i] = 'Y'; t = 'Y';}
            if (gore == 'G') {res[i] = 'G'; t = 'G';}
            gore = 'O';
            dole = 'R';
        }
/****************************************************************************/
    }

    struct ret r;
    r.t = t;
    r.gore = gore;
    r.dole = dole;
    r.levo = levo;
    r.desno = desno;
    r.res = res;
    return r;

}

char * kodiraj (int k, int a[], char t, char desno, char dole, char levo, char gore) {

    char *kodirano = (char*)calloc (k * 4, 1);

    for (int i = 0; i < k; ++i) {

        int n = a[i];

        char *b = bin(n);
        size_t size = strlen(b);

        char *res = (char*)malloc(size+1);

        struct ret r = kodiraj_jedan (size,t,gore,dole,levo,desno,b);

        t = r.t;
        gore = r.gore;
        dole = r.dole;
        levo = r.levo;
        desno = r.desno;
        res = r.res;

        strcat (kodirano, res);

        //free (b);
        //free (res);

    }

    //kodirano = obrni (kodirano, k * 4);

    char* kodirano2 = (char*) calloc (k * 4 + 1, 1);
    for (int i = 0; i < k*4; ++i) {
        if (kodirano[i] == 'W') kodirano2[i] = '0';
        if (kodirano[i] == 'B') kodirano2[i] = '1';
        if (kodirano[i] == 'O') kodirano2[i] = '2';
        if (kodirano[i] == 'R') kodirano2[i] = '3';
        if (kodirano[i] == 'Y') kodirano2[i] = '4';
        if (kodirano[i] == 'G') kodirano2[i] = '5';

    }
    kodirano2[k*4] = '\0';

    char* kodirano3 = (char*) calloc (k * 4 * 3 + 1, 1);
    for (int i = 0; i < k*4; ++i) {

        if (kodirano2[i] == '0') strcat(kodirano3, "000");
        if (kodirano2[i] == '1') strcat(kodirano3, "001");
        if (kodirano2[i] == '2') strcat(kodirano3, "010");
        if (kodirano2[i] == '3') strcat(kodirano3, "011");
        if (kodirano2[i] == '4') strcat(kodirano3, "100");
        if (kodirano2[i] == '5') strcat(kodirano3, "101");

    }
    kodirano3[k*4*3] = '\0';
    kodirano3 = obrni (kodirano3, k * 4*3);


    return kodirano3;

}


int main() {

    char t = 'W';
    char desno = 'B';
    char dole = 'R';
    char levo = 'G';
    char gore = 'O';

    int k;
    scanf("%d", &k);

    int a[k];

    for (int i = 0; i < k; ++i) {

        scanf("%d",&a[i]);

    }

    char* kodirano;
    kodirano = kodiraj(k, a, t, desno, dole, levo, gore);
    printf("%s\n", kodirano);

    return 0;

}
