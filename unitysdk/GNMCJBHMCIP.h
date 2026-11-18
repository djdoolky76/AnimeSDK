#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GNMCJBHMCIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD8E60)

inline static constexpr unsigned int GNMCJBHMCIP_TypeDefinitionIndex = 51746;

class GNMCJBHMCIP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCJBHMCIP__CTOR_OFFSET))(this);
	}
};
