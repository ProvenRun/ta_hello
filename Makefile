#
# Copyright (c) 2014-2024, ProvenRun and/or its affiliates. All rights reserved.
#

ifndef BASE_DIR
    $(error BASE_DIR has to be set by calling Makefile !)
endif
include $(BASE_DIR)/applications/common_apps.mk

# Declare name of application(s) to generate
APPLICATIONS := ta_hello

ta_hello_SOURCES := hello.c
ta_hello_METADATA := hello.metadata
ta_hello_LIBS :=

# Last line of your Makefile !
include $(BASE_DIR)/applications/rules_apps.mk
