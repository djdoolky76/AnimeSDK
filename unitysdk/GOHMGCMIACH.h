#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOHMGCMIACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4DD0)

inline static constexpr unsigned int GOHMGCMIACH_TypeDefinitionIndex = 29132;

class GOHMGCMIACH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHMGCMIACH__CTOR_OFFSET))(this);
	}
};
