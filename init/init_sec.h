#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

#define TOTAL_VARIANTS 5 //Total number of variants

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant J710F_model = {
    .model = "SM-J710F",
    .codename = "j7xeltexx"
};

static const variant J710FN_model = {
    .model = "SM-J710FN",
    .codename = "j7xelte"
};

static const variant J710K_model = {
    .model = "SM-J710K",
    .codename = "j7xeltekk"
};

static const variant J710GN_model = {
    .model = "SM-J710GN",
    .codename = "j7xeltedx"
};

static const variant J710MN_model = {
    .model = "SM-J710MN",
    .codename = "j7xelteub"
};

static const variant *all_variants[TOTAL_VARIANTS] = {
    &J710F_model,
    &J710FN_model,
    &J710K_model,
    &J710GN_model,
    &J710MN_model
};

#endif // INIT_SEC_H
