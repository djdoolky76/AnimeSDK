#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOMNOFEBBED__CTOR_OFFSET UNITYSDK_OFFSET(0x13600F00)

inline static constexpr unsigned int AOMNOFEBBED_TypeDefinitionIndex = 69515;

class AOMNOFEBBED : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMNOFEBBED__CTOR_OFFSET))(this);
	}
};
