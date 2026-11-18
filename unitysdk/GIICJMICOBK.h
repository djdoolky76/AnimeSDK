#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJKDAKGODG.h"

#define GIICJMICOBK_CNBNGAOAJHB_OFFSET UNITYSDK_OFFSET(0x10EF7160)
#define GIICJMICOBK_GAOLFIHBDAL_OFFSET UNITYSDK_OFFSET(0x10EF73D0)
#define GIICJMICOBK__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF73C0)

inline static constexpr unsigned int GIICJMICOBK_TypeDefinitionIndex = 44248;

class GIICJMICOBK : public ::BIJKDAKGODG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIICJMICOBK__CTOR_OFFSET))(this);
	}

	::System::Void CNBNGAOAJHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIICJMICOBK_CNBNGAOAJHB_OFFSET))(this);
	}

	::System::Void GAOLFIHBDAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIICJMICOBK_GAOLFIHBDAL_OFFSET))(this);
	}
};
