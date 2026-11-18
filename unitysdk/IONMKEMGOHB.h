#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define IONMKEMGOHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA18920)

inline static constexpr unsigned int IONMKEMGOHB_TypeDefinitionIndex = 94763;

class IONMKEMGOHB : public ::CGGLJLECNJM
{
public:
	::System::Single BFMMEICFNCD; // 0x20
	::System::Boolean LKMKKKNOMEE; // 0x24
	::System::Byte _padding0[0x3];
	::System::UInt32 HDGIELLOOEF; // 0x28
	::System::Single HAAEBCOBKFF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONMKEMGOHB__CTOR_OFFSET))(this);
	}
};
