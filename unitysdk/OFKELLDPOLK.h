#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OFKELLDPOLK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B268C0)

inline static constexpr unsigned int OFKELLDPOLK_TypeDefinitionIndex = 91812;

class OFKELLDPOLK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKELLDPOLK__CTOR_OFFSET))(this);
	}
};
