/*
 * Copyright (c) 2014-2024 ProvenRun S.A.S
 * All Rights Reserved.
 *
 * This software is the confidential and proprietary information of
 * ProvenRun S.A.S ("Confidential Information"). You shall not
 * disclose such Confidential Information and shall use it only in
 * accordance with the terms of the license agreement you entered
 * into with ProvenRun S.A.S
 *
 * PROVENRUN S.A.S MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE
 * SUITABILITY OF THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING
 * BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT. PROVENRUN S.A.S SHALL
 * NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING,
 * MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.
 */
/**
 * @file
 * @brief Simple "Hello World" example
 * @author Vincent Siles
 * @date September 15th, 2015 (creation)
 * @copyright (c) 2014-2024, ProvenRun S.A.S and/or its affiliates.
 *   All rights reserved.
 */

#include <stdint.h>
#include <ipc.h>
#include <syscall.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    s_pid_t pid;

    NO_FAIL(get_pid(&pid));

    printf("\tHello world, my name is \"%s\" (pid=%#" PRIxPID ")\n", argv[0],
           pid);
    if (argc > 1) {
        printf("\tMy calling arguments were: ");
        for (i = 1; i < argc; i++)
            printf("%s ", argv[i]);
    } else {
        printf("\tI was called without arguments.\n");
    }
    printf("\t\t\n\nBye !\n");

    return 0;
}
