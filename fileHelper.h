#pragma once
typedef unsigned char BYTE;//gets value between 0 to 255
int	 writeStringToFile(char* str, FILE* fp,const char* msg);
int	 writeCharsToFile(char* arr,int size, FILE* fp, const char* msg);
int	 writeIntToFile(int val, FILE* fp, const char* msg);
int writeByteToFile(BYTE val, FILE* fp, const char* msg);
char* readStringFromFile(FILE* fp,const char* msg);
int	 readCharsFromFile(char* arr, int size, FILE* fp, const char* msg);
int	  readIntFromFile(int* val, FILE* fp, const char* msg);
int readByteFromFile(BYTE* pVal, FILE* fp, const char* msg);