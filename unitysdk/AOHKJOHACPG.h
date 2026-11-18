#pragma once
#include "unitysdk/unitysdk.h"

#define AOHKJOHACPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1700D090)

inline static constexpr unsigned int AOHKJOHACPG_TypeDefinitionIndex = 44666;

class AOHKJOHACPG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHKJOHACPG__CTOR_OFFSET))(this);
	}
};
