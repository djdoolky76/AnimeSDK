#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKGGMODJDMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD87B0)

inline static constexpr unsigned int BKGGMODJDMI_TypeDefinitionIndex = 28875;

class BKGGMODJDMI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGGMODJDMI__CTOR_OFFSET))(this);
	}
};
