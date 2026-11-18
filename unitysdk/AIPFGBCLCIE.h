#pragma once
#include "unitysdk/unitysdk.h"

#define AIPFGBCLCIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15502E30)

inline static constexpr unsigned int AIPFGBCLCIE_TypeDefinitionIndex = 75714;

class AIPFGBCLCIE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFGBCLCIE__CTOR_OFFSET))(this);
	}
};
