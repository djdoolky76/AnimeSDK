#pragma once
#include "unitysdk/unitysdk.h"

#define EFKOMGBPBJN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDCF00)

inline static constexpr unsigned int EFKOMGBPBJN_TypeDefinitionIndex = 78603;

class EFKOMGBPBJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKOMGBPBJN__CTOR_OFFSET))(this);
	}
};
