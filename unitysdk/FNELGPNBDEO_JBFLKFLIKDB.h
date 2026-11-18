#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNELGPNBDEO;
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define FNELGPNBDEO_JBFLKFLIKDB_HAAEODCLLFF_OFFSET UNITYSDK_OFFSET(0x15EFB780)
#define FNELGPNBDEO_JBFLKFLIKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB770)

inline static constexpr unsigned int FNELGPNBDEO_JBFLKFLIKDB_TypeDefinitionIndex = 39434;

class FNELGPNBDEO_JBFLKFLIKDB : public ::System::Object
{
public:
	::FNELGPNBDEO* KLHPEBKNIFB; // 0x10
	::System::Action* HKBPOMKFIEA; // 0x18
	::MoleMole::UIWindowController* LGBHOFGBGHC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_JBFLKFLIKDB__CTOR_OFFSET))(this);
	}

	::System::Void HAAEODCLLFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_JBFLKFLIKDB_HAAEODCLLFF_OFFSET))(this);
	}
};
