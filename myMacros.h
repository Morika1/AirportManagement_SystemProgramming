#pragma once 
#define CHECK_RETURN_0(pointer) if(pointer == NULL) return 0;
#define CHECK_RETURN_NULL(pointer) if(pointer == NULL) return NULL; 
#define CHECK_MSG_RETURN_0(pointer, msg) if(pointer == NULL){ printf(#msg); return 0; }
#define CHECK_0_MSG_CLOSE_FILE(value, msg, file) if(value == 0) {printf(#msg); fclose(file); return 0;}
#define CHECK_NULL_MSG_CLOSE_FILE(pointer, msg, file) if(pointer == NULL) {printf(#msg); fclose(file); return 0;}
#define MSG_CLOSE_RETURN_0(msg, file) printf(msg); fclose(file); return 0;