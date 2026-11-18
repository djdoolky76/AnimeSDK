#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class BFLPANDDGHG;
namespace MoleMole::Battle { class Entity; }

#define GBNLAFDKEOH_AJGDFJGOMOJ_OFFSET UNITYSDK_OFFSET(0x10EE1990)
#define GBNLAFDKEOH_CKLBIDINIME_OFFSET UNITYSDK_OFFSET(0x10EE1890)
#define GBNLAFDKEOH_FJNMMDCPLCB_OFFSET UNITYSDK_OFFSET(0x10EE1980)
#define GBNLAFDKEOH_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x10EE1830)
#define GBNLAFDKEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE1970)

inline static constexpr unsigned int GBNLAFDKEOH_TypeDefinitionIndex = 88446;

class GBNLAFDKEOH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* BFFOKFABEAO; // 0x10
	::BFLPANDDGHG* _EBHIHMCADHJ_k__BackingField; // 0x18
	::MoleMole::Config::CampType OLNAFBAENGH; // 0x20
	::System::Boolean EHLHOIAFHCM; // 0x24
	::System::Boolean AEKMHDOPOAN; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNLAFDKEOH__CTOR_OFFSET))(this);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNLAFDKEOH_NGELJIJDHLJ_OFFSET))(this);
	}

	::System::Boolean CKLBIDINIME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNLAFDKEOH_CKLBIDINIME_OFFSET))(this);
	}

	::System::Void FJNMMDCPLCB(::BFLPANDDGHG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + GBNLAFDKEOH_FJNMMDCPLCB_OFFSET))(this, EGEGIMGMJHN);
	}

	::BFLPANDDGHG* AJGDFJGOMOJ()
	{
		return ((::BFLPANDDGHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNLAFDKEOH_AJGDFJGOMOJ_OFFSET))(this);
	}
};
