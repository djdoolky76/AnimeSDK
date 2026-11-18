#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPFDIBAFAFI;

#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19756040)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTeamWidgetController_Context_TypeDefinitionIndex = 85894;

	class UIGeneralBattleQuickTeamWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPFDIBAFAFI* teamData; // 0x28
		::System::Boolean isOpenBuddy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
