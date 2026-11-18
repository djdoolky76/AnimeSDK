#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PELJKCIFKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7CE0)

inline static constexpr unsigned int PELJKCIFKIL_TypeDefinitionIndex = 86233;

class PELJKCIFKIL : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELJKCIFKIL__CTOR_OFFSET))(this);
	}
};
