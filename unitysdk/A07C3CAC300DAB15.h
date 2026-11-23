#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDDDFF21B2ACB3CA.h"

class F1B3C4ACACCA66F4;

#define A07C3CAC300DAB15__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBAF20)

inline static constexpr unsigned int A07C3CAC300DAB15_TypeDefinitionIndex = 10228;

class A07C3CAC300DAB15 : public ::EDDDFF21B2ACB3CA
{
public:
	::System::UInt32 E7AD5DA77BB56EFB; // 0xA8
	::System::Byte _padding0[0x4];
	::F1B3C4ACACCA66F4* B4FCB7034A467CE2; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A07C3CAC300DAB15__CTOR_OFFSET))(this);
	}
};
