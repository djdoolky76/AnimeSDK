#pragma once
#include "unitysdk/unitysdk.h"

#define MONOSCROLLBAREX_SCROLLBAREXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F81D40)

inline static constexpr unsigned int MonoScrollBarEx_ScrollBarExEvent_TypeDefinitionIndex = 91685;

class MonoScrollBarEx_ScrollBarExEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_SCROLLBAREXEVENT__CTOR_OFFSET))(this);
	}
};
