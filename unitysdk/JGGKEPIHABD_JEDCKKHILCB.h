#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define JGGKEPIHABD_JEDCKKHILCB_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15262680)
#define JGGKEPIHABD_JEDCKKHILCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15262670)

inline static constexpr unsigned int JGGKEPIHABD_JEDCKKHILCB_TypeDefinitionIndex = 44061;

class JGGKEPIHABD_JEDCKKHILCB : public ::System::Object
{
public:
	::HOCDHMEPPEG PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKEPIHABD_JEDCKKHILCB__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKEPIHABD_JEDCKKHILCB_LIDNPLMPHAL_OFFSET))(this);
	}
};
