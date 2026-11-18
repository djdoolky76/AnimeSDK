#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANAKBKOHGEB.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define ELCMGFIMCHN_CJDONANCMJG_OFFSET UNITYSDK_OFFSET(0x11A9B0F0)
#define ELCMGFIMCHN_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x11A9B3D0)
#define ELCMGFIMCHN_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x11A9ACA0)
#define ELCMGFIMCHN_HHMJIKCEKCB_OFFSET UNITYSDK_OFFSET(0x11A9B500)
#define ELCMGFIMCHN_KKKKCNHHPIF_OFFSET UNITYSDK_OFFSET(0x11A9B460)
#define ELCMGFIMCHN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9B450)

inline static constexpr unsigned int ELCMGFIMCHN_TypeDefinitionIndex = 86441;

class ELCMGFIMCHN : public ::ANAKBKOHGEB
{
public:
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCMGFIMCHN__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle GPAOHEEKFCD()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCMGFIMCHN_GPAOHEEKFCD_OFFSET))(this);
	}

	::System::Boolean CJDONANCMJG(::System::Single& HPCILAJBBHH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ELCMGFIMCHN_CJDONANCMJG_OFFSET))(this, HPCILAJBBHH);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCMGFIMCHN_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Boolean KKKKCNHHPIF(::System::Single& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ELCMGFIMCHN_KKKKCNHHPIF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HHMJIKCEKCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCMGFIMCHN_HHMJIKCEKCB_OFFSET))(this);
	}
};
