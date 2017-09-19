#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    //Make sure program args are correct
    if (argc != 5) {
        fprintf(stderr, "Usage: shuffle -i inputfile -o outputfile");
        exit(1);
    }

    //Open files to read/write and check for errors
    FILE *ifp;
    FILE *ofp;
    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[4], "w");
    if (ifp == NULL) {
        fprintf(stderr, "Error: Cannot open file %s", argv[2]);
        exit(1);
    }
    if (ofp == NULL) {
        fprintf(stderr, "Error: Cannot open file %s", argv[4]);
        exit(1);
    }

    //Get file size
    struct stat st;
    stat(argv[2], &st);
    int size = st.st_size;
}

