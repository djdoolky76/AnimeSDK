#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF340)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS78_0__ONAVATARAIRECOMMENDTEAMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x13AFF350)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass78_0_TypeDefinitionIndex = 52242;

	class UIStrategyGuidePageController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x10
		::System::UInt32 notifyAvatarId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAvatarAiRecommendTeamUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS78_0__ONAVATARAIRECOMMENDTEAMUPDATE_B__0_OFFSET))(this);
		}
	};
}
