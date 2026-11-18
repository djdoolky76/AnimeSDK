#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNLJOODMIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x193E9B60)

inline static constexpr unsigned int CNLJOODMIGA_TypeDefinitionIndex = 44894;

class CNLJOODMIGA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLJOODMIGA__CTOR_OFFSET))(this);
	}
};
