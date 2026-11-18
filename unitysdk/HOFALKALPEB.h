#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANAKBKOHGEB.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace Foundation::ViewObject { class ITraitSyncEntityCreator; }

#define HOFALKALPEB_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x19E375E0)
#define HOFALKALPEB_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x19E36F90)
#define HOFALKALPEB_HHMJIKCEKCB_OFFSET UNITYSDK_OFFSET(0x19E37670)
#define HOFALKALPEB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E37660)

inline static constexpr unsigned int HOFALKALPEB_TypeDefinitionIndex = 41676;

class HOFALKALPEB : public ::ANAKBKOHGEB
{
public:
	::Foundation::ViewObject::ITraitSyncEntityCreator* ABAMOBELOBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFALKALPEB__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle GPAOHEEKFCD()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFALKALPEB_GPAOHEEKFCD_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFALKALPEB_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void HHMJIKCEKCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFALKALPEB_HHMJIKCEKCB_OFFSET))(this);
	}
};
