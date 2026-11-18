#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIZenkovLotteryGamePageController; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1671BAE0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS71_0__PUSHTIP_B__0_OFFSET UNITYSDK_OFFSET(0x1671BAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c__DisplayClass71_0_TypeDefinitionIndex = 57267;

	class UIZenkovLotteryGamePageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* tip; // 0x10
		::MoleMole::UIZenkovLotteryGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _PushTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS71_0__PUSHTIP_B__0_OFFSET))(this);
		}
	};
}
