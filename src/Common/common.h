#ifndef __COMMON_H__
#define __COMMON_H__

/* --- Includes --- */
#include <stdint.h>

/* --- Structures --- */
typedef struct Error_t {
    int32_t error;
    char *message;  /* unused */
} Error_t;

/* --- Defines --- */
#define SC_ERR_NONE (0)
#define SC_ERR_INPUT (1)
#define SC_ERR_PARSE (2)
#define SC_ERR_OUTPUT (3)


#endif  /* __COMMMON_H_ */
