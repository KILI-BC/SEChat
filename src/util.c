#include "util.h"

int util_strcpy(char** dst, const char *src, int on_success, int on_failure) {
  if(!src || !dst) return on_failure;
  *dst = malloc(strlen(src)+1);
  if(!*dst) return on_failure;
  if(!memcpy(*dst, src, strlen(src) + 1)) {
    free(*dst);
    return on_failure;
  }
  return on_success;
}

