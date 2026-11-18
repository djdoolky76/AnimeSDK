#pragma once
#include "unitysdk/unitysdk.h"

#define JHKMFBELJAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477AE0)

inline static constexpr unsigned int JHKMFBELJAG_TypeDefinitionIndex = 60981;

class JHKMFBELJAG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFBELJAG__CTOR_OFFSET))(this);
	}
};
