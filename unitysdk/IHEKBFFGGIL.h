#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IHEKBFFGGIL__CTOR_OFFSET UNITYSDK_OFFSET(0x153A9900)

inline static constexpr unsigned int IHEKBFFGGIL_TypeDefinitionIndex = 43898;

class IHEKBFFGGIL : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEKBFFGGIL__CTOR_OFFSET))(this);
	}
};
