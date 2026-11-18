#pragma once
#include "unitysdk/unitysdk.h"

#define JMLFHNIBMJO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A261C0)

inline static constexpr unsigned int JMLFHNIBMJO_TypeDefinitionIndex = 86610;

class JMLFHNIBMJO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLFHNIBMJO__CTOR_OFFSET))(this);
	}
};
