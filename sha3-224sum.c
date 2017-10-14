/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	libkeccak_generalised_spec_t spec;
	libkeccak_generalised_spec_initialise(&spec);
	libkeccak_spec_sha3((libkeccak_spec_t *)&spec, 224);
	return RUN(LIBKECCAK_SHA3_SUFFIX);
}
