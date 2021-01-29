#include <stdint.h>

#define DEBUG_LOG_NAME_MAX 32

typedef int32_t (*DEBUG_LOG_FUNC)(int8_t *pBuf, uint32_t u);

typedef enum
{
    DEBUG_HANDLE_SERIAL,
    DEBUG_HANDLE_FILE,
    DEBUG_HANDLE_SOCKET

}DEBUG_HANDLE_TYPE_EM;

typedef struct
{
    DEBUG_HANDLE_TYPE_EM emHandleType;
    void *pHandle;
    int8_t sName[DEBUG_LOG_NAME_MAX];
}DEBUG_LOG_FUNC_ST;

typedef struct
{
    uint8_t uLogFuncNum;
}DEBUG_LOG_ST
