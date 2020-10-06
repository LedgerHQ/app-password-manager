#ifndef __PASSWORD_TYPING_H__
#define __PASSWORD_TYPING_H__

#include "stdint.h"
#include "password_generation.h"

void io_usb_send_ep_wait(unsigned int ep, unsigned char* buf, unsigned int len, unsigned int timeout_cs);
void type_password(uint8_t *data, uint32_t dataSize, uint8_t *out, setmask_t setMask, const uint8_t *minFromSet, uint32_t size);

#define DERIVE_PASSWORD_PATH 0x80505744

static const uint8_t DEFAULT_MIN_SET[] = {1,1,1,0,0,1,0,0};

#endif