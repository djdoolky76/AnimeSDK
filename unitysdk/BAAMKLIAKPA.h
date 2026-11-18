#pragma once
#include "unitysdk/unitysdk.h"

#define BAAMKLIAKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x169D9B70)

inline static constexpr unsigned int BAAMKLIAKPA_TypeDefinitionIndex = 51437;

class BAAMKLIAKPA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAMKLIAKPA__CTOR_OFFSET))(this);
	}
};
