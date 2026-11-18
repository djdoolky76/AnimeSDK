#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HIFJPBOGMLD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D120)

inline static constexpr unsigned int HIFJPBOGMLD_TypeDefinitionIndex = 68641;

class HIFJPBOGMLD : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJPBOGMLD__CTOR_OFFSET))(this);
	}
};
