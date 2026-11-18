#pragma once
#include "unitysdk/unitysdk.h"

#define LPEHAJFOEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0D4C0)

inline static constexpr unsigned int LPEHAJFOEBA_TypeDefinitionIndex = 84957;

class LPEHAJFOEBA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEHAJFOEBA__CTOR_OFFSET))(this);
	}
};
