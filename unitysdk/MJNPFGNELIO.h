#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MJNPFGNELIO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8F9E0)

inline static constexpr unsigned int MJNPFGNELIO_TypeDefinitionIndex = 73469;

class MJNPFGNELIO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNPFGNELIO__CTOR_OFFSET))(this);
	}
};
