#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IILLABJHOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9F340)

inline static constexpr unsigned int IILLABJHOEA_TypeDefinitionIndex = 75573;

class IILLABJHOEA : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILLABJHOEA__CTOR_OFFSET))(this);
	}
};
