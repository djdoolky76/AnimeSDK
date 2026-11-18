#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHNGONAHPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x13C603E0)

inline static constexpr unsigned int KHNGONAHPDO_TypeDefinitionIndex = 69470;

class KHNGONAHPDO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNGONAHPDO__CTOR_OFFSET))(this);
	}
};
