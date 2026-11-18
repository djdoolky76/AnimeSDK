#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCGECCIBBDI;

#define LCGECCIBBDI_JKMDMEFMOBN_EPLCFPDBAIM_OFFSET UNITYSDK_OFFSET(0x1997B360)
#define LCGECCIBBDI_JKMDMEFMOBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1997B350)

inline static constexpr unsigned int LCGECCIBBDI_JKMDMEFMOBN_TypeDefinitionIndex = 56790;

class LCGECCIBBDI_JKMDMEFMOBN : public ::System::Object
{
public:
	::LCGECCIBBDI* KLHPEBKNIFB; // 0x10
	::System::Boolean IHDEBJMENEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_JKMDMEFMOBN__CTOR_OFFSET))(this);
	}

	::System::Void EPLCFPDBAIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_JKMDMEFMOBN_EPLCFPDBAIM_OFFSET))(this);
	}
};
