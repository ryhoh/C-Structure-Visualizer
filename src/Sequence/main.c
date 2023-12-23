#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "../Common/common.h"
#include "../Sequence/sequence.h"

int32_t main(void) {
    Error_t st_error;  /* Error Information */
    int32_t i32_retval;
    
    /* Main Function */
    st_error = SC_Main();

    /* Error Handling */
    if (st_error.error != SC_ERR_NONE) {
        i32_retval = EXIT_FAILURE;
    } else {
        i32_retval = EXIT_SUCCESS;
    }

    return i32_retval;
}
