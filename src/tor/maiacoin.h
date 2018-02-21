/* Copyright (c) 2014, MNcash Developers */
/* See LICENSE for licensing information */

/**
 * \file MNcash.h
 * \brief Headers for MNcash.cpp
 **/

#ifndef TOR_MNcash_H
#define TOR_MNcash_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* MNcash_tor_data_directory(
    );

    char const* MNcash_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

