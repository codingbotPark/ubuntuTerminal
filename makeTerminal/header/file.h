#include <stdio.h>

void makeFile(char path[512], char fileName[512]);

void removeFile(char path[512], char fileName[512]);

void listFileDir(char path[512]);

void readFile(char path[512], char fileName[512]);

int editFile(char path[512],char fileName[512],int isNew);

int checkCommandForVi(char command[512]);