#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext; }

#define GEGKDDOBMON_IIABDKEODJD_CBGOAFIINIC_OFFSET UNITYSDK_OFFSET(0x10EE7D30)
#define GEGKDDOBMON_IIABDKEODJD__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE7D20)

inline static constexpr unsigned int GEGKDDOBMON_IIABDKEODJD_TypeDefinitionIndex = 58055;

class GEGKDDOBMON_IIABDKEODJD : public ::System::Object
{
public:
	::MoleMole::UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_IIABDKEODJD__CTOR_OFFSET))(this);
	}

	::System::Void CBGOAFIINIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_IIABDKEODJD_CBGOAFIINIC_OFFSET))(this);
	}
};
