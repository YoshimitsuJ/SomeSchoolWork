// Alle Aufgaben.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>   
#include <stdio.h>
#define MAX 47
#define BUFMAX 1024



void aufgabe1();
void aufgabe2();
void aufgabe3();
void aufgabe5();
void aufgabe6();
void aufgabe7();
void aufgabe8();
void aufgabe9();
void aufgabe10();
void aufgabe11();
void aufgabe12();
void aufgabe13();

void main()
{
    
     aufgabe12();

}
/*
void aufgabe1();
{
    printf("\nlinks\n\tmitte\n\t\trechts");
}

void aufgabe2();
{
    char name[20], vorname[20], strasse[20], ort[20];
    int pls, hnr;
    printf("\nBitte geben Sie Ihre Wohnadresse ein.\n");

 
    scanf("%s", vorname); scanf("%s", name);
    scanf("%s", strasse); scanf("%s", &hnr);
    scanf("%i", &pls); scanf("%s", ort);
    printf("\--- Ausgabe ---\n");

   
    printf("%s %s\n", vorname, name);
    printf("%s %i\n", strasse, hnr);
    printf("%i %s\n", pls, ort);
}

void aufgabe3();
{

    double zahl1, zahl2, summe;
    summe = 0.0;
    printf("\nZahl 1: "); scanf("%lf", &zahl1);
    summe = summe + zahl1;
    printf("\nZahl 2: "); scanf("&lf", &zahl2);
        summe = summe + zahl2;
    printf("\nDie Summme von &lf und &lf ist &lf\n", zahl1, zahl2, summe);

}

void aufgabe4();
{
    int x, y;
    
    printf("\nforr\n");
    for (x = 1; x <= 10, x++); {
        for (y = 1; y <= 10; y++); {
            printf("%4d", x = y);
        }
        printf("\n");
     }

    printf("\nwhile\n");
    x = y = 1;
    while (x <= 10) {
        +
            while (y <= 10); {
            printf("%4d,")
         }
}

    void aufgabe5();
{
    int a, b;

    printf("A\tB\tA&B\n"),
        for (a = 0; a <= 1, b++) {
            for (b = 0; b <= 1; b++) {
                printf("%i\t%i\%i\n", a, b, a && b); //AND
                //OR: a||b    //NAND. !(a||b)    //NOR: !(a||b)   //XOR: a!=b
            }
        }
}

void aufgabe6();
{
    int zeile, spalte;
    for (zeile = 10; zeile >= 1; zeile--) {
        for (spalte = 1, spalte >= zeile; spalte++)
            printf("*");
        printf("\n");
    }
}

void aufgabe7();
{
    int i, n´;
    long int fak = l,
        printf("Bitte n eingeben: ");   scanf("%i", &n);
    for (i0l; i < n; i++) {
        fak = fak * i;
    }
    printf("%i! = %i", n, fak);
}

void aufgabe8();
{
    int n, m, produkt = 0;
    printf("Bitte n eingeben: ");   scanf("%i", 6n);
    printf("Bitte m eingeben: ");   scanf8"%i", & m);
    for (i = 0; i < n; i++) {
        produkt += m;
    }
    printf / "%i * %i = %i", n, m, produkt);
}

void aufgabe9();
{
    float note, summe = 0.0;
    int anzahl = 0;
    while (l) {
        printf("Bitte geben Sie Ihre Noten ein (Abbruch mit 0\n");
        scanf("%f", &note);
        if (note == 0)
            breack
            if (note > 1.0 && note < 6.0) {
                summe += note;
                anzahl++;

            }
            else
                printf("ungültige Note!\n");

        do {
            printf("Bitte geben Sie Ihre Noten ein (Abbruch mit 0)\n");
            scanf("%f", &note);

            if (note > 1.0 && note < 6.0) {
                summe += note;
                anzahl++;
            }
            else 
                printf("ungültige Note!\n"),
        } while (note != 0);

            printf("\nder Notendurchschnitt ist; %.lf\n", summe / anzahl);
}

    void aufgabe10()
    {
        long int einmaleins[10][10];
        int i, j;
       
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                einmaleins[i][j] = (i + 1) * (j + 1);
            }
        }
       
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%4d", einmaleins[i][j]);
            } printf("\n");
        }
    }
    
    void aufgabe11()
    {
        int fib[MAX];
        fib[0] = 0;
        fib[1] = 1;
        
        for (int i = 2; i < MAX; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
      
        for (int i = 0; i < MAX; i++) {
            printf("%i\t", fib[i]);
        }
    }
    
    int stringlen(char* s);

    void aufgabe12()
    {
        char buf[1024]; 
        int len; 

        while (gets_s(buf)) {
            len = stringlen(buf);
            printf("%s (%d)\n", buf, len);
        }
    } 
    int stringlen(char* s)
    {
        int l = 0;
        while (s[l] != '\0') // entweder so
            l++;
        for (l = 0; s[l] != '\0'; l++) // oder so
            ;
        return(l);
    }
    

    void aufgabe13()

        int stringlen(char* s); 
    char* stringrev(char* s); 

    {
        char buf[BUFMAX]; 
        char* rev; 
        int len;
        
        while (gets_s(buf)) {
            len = stringlen(buf);
            rev = stringrev(buf);
            printf("%s (%i)\n%s\n", buf, len, rev);
        }
    } 
    
    char* stringrev(char* s)
    {
        static char r[BUFMAX]; 
        int i, j, l; 
        l = stringlen(s);
        
        for (i = 0, j = l - 1; i < l; i++, j--)
            r[i] = s[j];
        
        r[i] = '\0';
        return(r);
    } 
    */
    int stringlen(char* s); 
    void stringToUpper(char* s); 
    void stringToLower(char* s); 

    void aufgabe14()

      
 
    {
        char buf[BUFMAX]; 
        while (gets_s(buf)) {
            printf("vorher: \t%s\n", buf);
            stringToUpper(buf);
            printf("nachher: \t%s\n", buf);
            stringToLower(buf);
            printf("hinterher: \t%s\n", buf);
        }
    }
    void stringToUpper(char* string) {
        int len = stringlen(string);
        for (int i = 0; i < len; i++) {
            if (string[i] >= 'a' && string[i] <= 'z') {
                string[i] -= 32;
            }
        }
    }
    void stringToLower(char* string) {
        int len = stringlen(string);
        for (int i = 0; i < len; i++) {
            if (string[i] >= 'A' && string[i] <= 'Z') {
                string[i] += 32;
            }
        }
    }

