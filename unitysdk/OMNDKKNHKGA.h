#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OMNDKKNHKGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F84B20)

inline static constexpr unsigned int OMNDKKNHKGA_TypeDefinitionIndex = 79793;

class OMNDKKNHKGA : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDKKNHKGA__CTOR_OFFSET))(this);
	}
};
