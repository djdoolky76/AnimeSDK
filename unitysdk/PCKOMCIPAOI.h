#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PCKOMCIPAOI__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFE7F0)

inline static constexpr unsigned int PCKOMCIPAOI_TypeDefinitionIndex = 90883;

class PCKOMCIPAOI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKOMCIPAOI__CTOR_OFFSET))(this);
	}
};
