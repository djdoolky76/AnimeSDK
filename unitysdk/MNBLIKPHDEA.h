#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNBLIKPHDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1077CB80)

inline static constexpr unsigned int MNBLIKPHDEA_TypeDefinitionIndex = 52175;

class MNBLIKPHDEA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBLIKPHDEA__CTOR_OFFSET))(this);
	}
};
