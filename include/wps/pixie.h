#ifndef PIXIE_H
#define PIXIE_H


#include <stdint.h>
#include "wps_defs.h"
#include "wps_utils.h"
#include "sys/_timeval.h"


const uint8_t wps_rtl_pke[] = {
	0xD0,0x14,0x1B,0x15, 0x65,0x6E,0x96,0xB8, 0x5F,0xCE,0xAD,0x2E, 0x8E,0x76,0x33,0x0D,
	0x2B,0x1A,0xC1,0x57, 0x6B,0xB0,0x26,0xE7, 0xA3,0x28,0xC0,0xE1, 0xBA,0xF8,0xCF,0x91,
	0x66,0x43,0x71,0x17, 0x4C,0x08,0xEE,0x12, 0xEC,0x92,0xB0,0x51, 0x9C,0x54,0x87,0x9F,
	0x21,0x25,0x5B,0xE5, 0xA8,0x77,0x0E,0x1F, 0xA1,0x88,0x04,0x70, 0xEF,0x42,0x3C,0x90,
	0xE3,0x4D,0x78,0x47, 0xA6,0xFC,0xB4,0x92, 0x45,0x63,0xD1,0xAF, 0x1D,0xB0,0xC4,0x81,
	0xEA,0xD9,0x85,0x2C, 0x51,0x9B,0xF1,0xDD, 0x42,0x9C,0x16,0x39, 0x51,0xCF,0x69,0x18,
	0x1B,0x13,0x2A,0xEA, 0x2A,0x36,0x84,0xCA, 0xF3,0x5B,0xC5,0x4A, 0xCA,0x1B,0x20,0xC8,
	0x8B,0xB3,0xB7,0x33, 0x9F,0xF7,0xD5,0x6E, 0x09,0x13,0x9D,0x77, 0xF0,0xAC,0x58,0x07,
	0x90,0x97,0x93,0x82, 0x51,0xDB,0xBE,0x75, 0xE8,0x67,0x15,0xCC, 0x6B,0x7C,0x0C,0xA9,
	0x45,0xFa,0x8D,0xD8, 0xD6,0x61,0xBE,0xB7, 0x3B,0x41,0x40,0x32, 0x79,0x8D,0xAD,0xEE,
	0x32,0xB5,0xDD,0x61, 0xBF,0x10,0x5F,0x18, 0xD8,0x92,0x17,0x76, 0x0B,0x75,0xC5,0xD9,
	0x66,0xA5,0xA4,0x90, 0x47,0x2C,0xEB,0xA9, 0xE3,0xB4,0x22,0x4F, 0x3D,0x89,0xFB,0x2B
};


struct wps_state {
	char pin[WPS_PIN_LEN + 1];
	uint8_t *pke;
	uint8_t *pkr;
	uint8_t *e_key;
	uint8_t *e_hash1;
	uint8_t *e_hash2;
	uint8_t *authkey;
	uint8_t *e_nonce;
	uint8_t *r_nonce;
	uint8_t *psk1;
	uint8_t *psk2;
	uint8_t *empty_psk;
	uint8_t *dhkey;
	uint8_t *kdk;
	uint8_t *wrapkey;
	uint8_t *emsk;
	uint8_t *e_s1;
	uint8_t *e_s2;
	uint8_t *e_bssid;
	uint8_t *m5_encr;
	uint8_t *m7_encr;
	unsigned int m5_encr_len;
	unsigned int m7_encr_len;
	uint32_t nonce_seed;
	uint32_t s1_seed;
	uint32_t s2_seed;
	time_t start;
	time_t end;
	uint8_t small_dh_keys;
	uint8_t mode_auto;
	uint8_t bruteforce;
	uint8_t anylength;
	uint8_t nonce_match;
	int jobs;
	int verbosity;
	char *error;
	char *warning;
};





#endif