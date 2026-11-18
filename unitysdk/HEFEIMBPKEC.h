#pragma once
#include "unitysdk/unitysdk.h"

#define HEFEIMBPKEC_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D3E35B0)
#define HEFEIMBPKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E3600)

inline static constexpr unsigned int HEFEIMBPKEC_TypeDefinitionIndex = 94037;

class HEFEIMBPKEC
{
public:
	::System::Single BPEGDPLGFPO; // 0x28
	::System::UInt32 BKLGNCBNEGM; // 0x2C
	::System::Int32 DABJIHHDFNO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFEIMBPKEC__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFEIMBPKEC_AIMAIGLGDBE_OFFSET))(this);
	}
};
