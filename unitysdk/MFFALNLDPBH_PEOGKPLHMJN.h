#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFFALNLDPBH;

#define MFFALNLDPBH_PEOGKPLHMJN_ECBNOIOJKCI_OFFSET UNITYSDK_OFFSET(0x15E2A6C0)
#define MFFALNLDPBH_PEOGKPLHMJN_JONMGLMGCII_OFFSET UNITYSDK_OFFSET(0x15E2A470)
#define MFFALNLDPBH_PEOGKPLHMJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2A460)

inline static constexpr unsigned int MFFALNLDPBH_PEOGKPLHMJN_TypeDefinitionIndex = 67723;

class MFFALNLDPBH_PEOGKPLHMJN : public ::System::Object
{
public:
	::MFFALNLDPBH* KLHPEBKNIFB; // 0x10
	::System::Single APBJCHAJIEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFALNLDPBH_PEOGKPLHMJN__CTOR_OFFSET))(this);
	}

	::System::Void JONMGLMGCII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFALNLDPBH_PEOGKPLHMJN_JONMGLMGCII_OFFSET))(this);
	}

	::System::Void ECBNOIOJKCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFALNLDPBH_PEOGKPLHMJN_ECBNOIOJKCI_OFFSET))(this);
	}
};
