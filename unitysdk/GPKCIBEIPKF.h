#pragma once
#include "unitysdk/unitysdk.h"

#define GPKCIBEIPKF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D09000)

inline static constexpr unsigned int GPKCIBEIPKF_TypeDefinitionIndex = 83714;

class GPKCIBEIPKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKCIBEIPKF__CTOR_OFFSET))(this);
	}
};
