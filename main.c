#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
clock_t t;
double time_taken;
int o;
double timetime;
void startc(){
    t = clock();
}
double endc(){
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    timetime+=(double)time_taken;
    return time_taken;
}
int run_times(){
    int a;
    printf("How many passes? (Higher is more accurate):");
    scanf("%d", &a);
    return a;
}
void write_scores(int test){
    if (test == 1){
        FILE *f = fopen("scores1.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }
    else if (test == 2){
        FILE *f = fopen("scores2.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }
    else if (test == 3){
        FILE *f = fopen("scores3.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }
    else if (test == 4){
        FILE *f = fopen("scores4.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }
    else if (test == 5){
        FILE *f = fopen("scores5.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }
    else if (test == 6){
        FILE *f = fopen("scores6.txt", "a");
        if (f == NULL)
        {
            return;
        }
        fprintf(f, "%.10f\n", timetime / o);
        fclose(f);
    }

}
void mult_mat(int not){
    int i = 250, j = 250;
    int x = i, y = j;
    double a[i][j];
    double b[i][j];
    double c[i][j];
    for (x=0;x<i;x++){
        for (y=0;y<j;y++){
            a[x][y] = ((double) rand() / RAND_MAX) * (double)500;
        }
    }
    for (x=0;x<i;x++){
        for (y=0;y<j;y++){
            b[x][y] = ((double) rand() / RAND_MAX) * (double)500;
        }
    }

    int run = run_times();
    for (o = 0; o < run; o++) {
        printf("Pass %d\n", o + 1);

        startc();
        int z;
        for (z = 0; z < not; z++) {
            for (x = 0; x < i; x++) {
                for (y = 0; y < j; y++) {
                    c[x][y] = (a[x][y] * b[x][y]);
                }
            }
            for (x = 0; x < i; x++) {
                for (y = 0; y < j; y++) {
                    c[x][y] = 0;
                }
            }
        }
        endc();
    }
    printf("%.10f\n", timetime / o);
    write_scores(1);
}
void check_mat(int not){
    int i = 250, j = 250;
    int x = i, y = j;
    double a[i][j];
    double b[i][j];
    double c[i][j];
    for (x=0;x<i;x++){
        for (y=0;y<j;y++){
            a[x][y] = ((double) rand() / RAND_MAX) * (double)500;
        }
    }
    for (x=0;x<i;x++){
        for (y=0;y<j;y++){
            b[x][y] = ((double) rand() / RAND_MAX) * (double)500;
        }
    }
    int run = run_times();
    for (o = 0; o < run; o++) {
        printf("Pass %d\n", o + 1);

        startc();
        int z;
        for (z = 0; z < not; z++) {
            for (x = 0; x < i; x++) {
                for (y = 0; y < j; y++) {
                    if (a[x][y] == b[x][y]) {
                        c[x][y] = 2;
                    } else {
                        c[x][y] = 1;
                    }
                }
            }
            for (x = 0; x < i; x++) {
                for (y = 0; y < j; y++) {
                    c[x][y] = 0;
                }
            }
        }
        endc();
    }
    printf("%.10f\n", timetime / o);
    write_scores(2);
}
void print_speed(int not){
    int run = run_times();
    for (o = 0; o < run; o++) {
        startc();
        int z;
        for (z = 0; z < not; z++) {
            printf("qwertyuiopasdfghjklzxcvbnm1234567890!@#$^&*()-=_+[]{};':\",./<>?\n");

        }
        endc();
    }
    printf("%.10f\n", timetime / o);
    write_scores(3);
}
void string(int not){
    char a[1000000] = "c", b = 'c';
    int run = run_times();
    for (o = 0; o < run; o++) {
        printf("Pass %d\n", o + 1);
        startc();
        int z;
        for (z = 0; z < not; z++) {
            strncat(a, &b, 1);
        }
        endc();
        char a[1000000] = "c", b = 'c';
    }
    printf("%.10f\n", timetime / o);
    write_scores(4);
}
void pi(int not){
    double p;
    double cir = 68.65838503937458;
    double rad = 10.9273213637231;
    int run = run_times();
    for (o = 0; o < run; o++) {
        printf("Pass %d\n", o + 1);
        startc();
        int z;
        for (z = 0; z < not; z++) {
            p = cir/(rad*2);
        }
        endc();
        p = 0;
    }
    printf("%.10f\n", timetime / o);
    write_scores(5);


}
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2); // Exponential time complexity for large n
}
void fib1(int not){
    int o;
    int run = run_times();
    for (o = 0; o < run; o++) {
        printf("Pass %d\n", o + 1);
        startc();
        int z;
        for (z = 0; z < not; z++) {
            fib(30);
        }
        endc();
    }
    printf("%.10f\n", timetime / o);
    write_scores(6);
}
int main(void) {

    int ans;
    while (1) {
        printf("---------------------------------------------------------------\n");
        printf("                  Welcome to benchmark.\n");
        printf("                  [1]- Float Matrix Multiplication\n");
        printf("                  [2]- Float Matrix Verification\n");
        printf("                  [3]- Console Print Speed\n");
        printf("                  [4]- String Concatenation\n");
        printf("                  [5]- Pi\n");
        printf("                  [6]- Fibonacci\n");
        printf("                  [7]- Quit\n");
        printf("---------------------------------------------------------------\n");
        printf(">>");
        scanf("%d", &ans);
        if (ans == 1) {
            mult_mat(10000);
        }
        else if (ans == 2) {
            check_mat(10000);
        }
        else if (ans == 3) {
            print_speed(1000);
        }
        else if (ans == 4) {
            string(10000);
        }
        else if (ans == 5) {
            pi(10000);
        }
        else if (ans == 6) {
            fib1(10);
        }
        else if (ans == 7) {
            return 0;
        }
        else {
            continue;
        }
        system("pause");
        timetime = 0;
    }
}