#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GNIHNAKNBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF2880)

inline static constexpr unsigned int GNIHNAKNBEA_TypeDefinitionIndex = 87948;

class GNIHNAKNBEA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIHNAKNBEA__CTOR_OFFSET))(this);
	}
};
