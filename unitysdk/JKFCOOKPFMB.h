#pragma once
#include "unitysdk/unitysdk.h"

#define JKFCOOKPFMB_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1E23D0C0)
#define JKFCOOKPFMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23D110)

inline static constexpr unsigned int JKFCOOKPFMB_TypeDefinitionIndex = 93579;

class JKFCOOKPFMB
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x28
	::System::Int32 IHOGFODHPFE; // 0x2C
	::System::Single HMBCNBONOJJ; // 0x30
	::System::Single BGDDNHMJALJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFCOOKPFMB__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFCOOKPFMB_AIMAIGLGDBE_OFFSET))(this);
	}
};
