#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LJAPOEINABO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4B10)

inline static constexpr unsigned int LJAPOEINABO_TypeDefinitionIndex = 62979;

class LJAPOEINABO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAPOEINABO__CTOR_OFFSET))(this);
	}
};
