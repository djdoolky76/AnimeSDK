#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOGBNNMAFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x200724F0)

inline static constexpr unsigned int FOGBNNMAFKO_TypeDefinitionIndex = 96593;

class FOGBNNMAFKO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGBNNMAFKO__CTOR_OFFSET))(this);
	}
};
