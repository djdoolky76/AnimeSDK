#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJIHJCPEMMN.h"

#define FNLKBIFLANC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75D70)

inline static constexpr unsigned int FNLKBIFLANC_TypeDefinitionIndex = 80109;

class FNLKBIFLANC : public ::FJIHJCPEMMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLKBIFLANC__CTOR_OFFSET))(this);
	}
};
