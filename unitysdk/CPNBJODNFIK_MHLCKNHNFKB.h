#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ONIHOMNFBOO;

#define CPNBJODNFIK_MHLCKNHNFKB_KLELHDLJMAL_OFFSET UNITYSDK_OFFSET(0x1A1C6000)
#define CPNBJODNFIK_MHLCKNHNFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5FF0)

inline static constexpr unsigned int CPNBJODNFIK_MHLCKNHNFKB_TypeDefinitionIndex = 49702;

class CPNBJODNFIK_MHLCKNHNFKB : public ::System::Object
{
public:
	::System::Int32 HBJOLKHGGDD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_MHLCKNHNFKB__CTOR_OFFSET))(this);
	}

	::System::Boolean KLELHDLJMAL(::ONIHOMNFBOO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONIHOMNFBOO*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_MHLCKNHNFKB_KLELHDLJMAL_OFFSET))(this, HAAEBCOBKFF);
	}
};
