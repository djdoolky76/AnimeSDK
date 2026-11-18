#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KLDFALPNKAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3571C0)

inline static constexpr unsigned int KLDFALPNKAJ_TypeDefinitionIndex = 28775;

class KLDFALPNKAJ : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDFALPNKAJ__CTOR_OFFSET))(this);
	}
};
