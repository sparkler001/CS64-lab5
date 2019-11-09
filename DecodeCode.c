#include "DecodeCode.h"


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	// TODO: fill in the fields
	instr.funct = value & 0x0000003F;

	instr.immediate = (value << 16) >> 16;

	instr.rd = (value >> 11) & 0x0000001F;
	instr.rt = (value >> 16) & 0x0000001F;
	instr.rs = (value >> 21) & 0x0000001F;

	instr.opcode = (value >> 26) & 0x0000003F;

	return instr;
}
