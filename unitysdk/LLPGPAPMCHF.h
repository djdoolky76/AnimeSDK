#pragma once
#include "unitysdk/unitysdk.h"

#define LLPGPAPMCHF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C65180)

inline static constexpr unsigned int LLPGPAPMCHF_TypeDefinitionIndex = 38336;

class LLPGPAPMCHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPGPAPMCHF__CTOR_OFFSET))(this);
	}
};
