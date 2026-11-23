#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDDDFF21B2ACB3CA.h"

class F1B3C4ACACCA66F4;

#define E084F30D3FAE5CAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82530)

inline static constexpr unsigned int E084F30D3FAE5CAE_TypeDefinitionIndex = 9545;

class E084F30D3FAE5CAE : public ::EDDDFF21B2ACB3CA
{
public:
	::System::UInt32 FB66369ED907BB06; // 0xA8
	::System::Byte _padding0[0x4];
	::F1B3C4ACACCA66F4* B4FCB7034A467CE2; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E084F30D3FAE5CAE__CTOR_OFFSET))(this);
	}
};
