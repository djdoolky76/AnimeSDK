#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HGOKNILCDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x146FB380)

inline static constexpr unsigned int HGOKNILCDMJ_TypeDefinitionIndex = 56498;

class HGOKNILCDMJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOKNILCDMJ__CTOR_OFFSET))(this);
	}
};
