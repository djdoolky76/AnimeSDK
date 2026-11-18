#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define HCEIIGCCGDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE3BC0)

inline static constexpr unsigned int HCEIIGCCGDE_TypeDefinitionIndex = 95219;

class HCEIIGCCGDE : public ::CGGLJLECNJM
{
public:
	::System::Int32 LJMPPBEMEPP; // 0x20
	::System::UInt32 KCNOHOOPNAH; // 0x24
	::System::UInt32 BKLGNCBNEGM; // 0x28
	::System::Single HAAEBCOBKFF; // 0x2C
	::System::Single BFMMEICFNCD; // 0x30
	::System::Single GNHOCNHLCCA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEIIGCCGDE__CTOR_OFFSET))(this);
	}
};
