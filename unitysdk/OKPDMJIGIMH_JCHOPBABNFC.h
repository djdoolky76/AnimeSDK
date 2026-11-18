#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace MoleMole { class NotificationBadgeEx; }

#define OKPDMJIGIMH_JCHOPBABNFC_EMGEJKFELNO_OFFSET UNITYSDK_OFFSET(0x172D22C0)
#define OKPDMJIGIMH_JCHOPBABNFC__CTOR_OFFSET UNITYSDK_OFFSET(0x172D22B0)

inline static constexpr unsigned int OKPDMJIGIMH_JCHOPBABNFC_TypeDefinitionIndex = 70745;

class OKPDMJIGIMH_JCHOPBABNFC : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_JCHOPBABNFC__CTOR_OFFSET))(this);
	}

	::System::Void EMGEJKFELNO(::MoleMole::NotificationBadgeEx* NLHLAHNMNMD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_JCHOPBABNFC_EMGEJKFELNO_OFFSET))(this, NLHLAHNMNMD);
	}
};
