#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIScaryNightInLevelPageController; }
namespace MoleMole { class UIScaryNightPropertyRewardTipWidgetController; }

#define MOLEMOLE_UISCARYNIGHTINLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167C34A0)
#define MOLEMOLE_UISCARYNIGHTINLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWONEPROPERTYTIP_B__0_OFFSET UNITYSDK_OFFSET(0x167C34B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelPageController___c__DisplayClass19_0_TypeDefinitionIndex = 75435;

	class UIScaryNightInLevelPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIScaryNightPropertyRewardTipWidgetController* ctrl; // 0x10
		::MoleMole::UIScaryNightInLevelPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOnePropertyTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__SHOWONEPROPERTYTIP_B__0_OFFSET))(this);
		}
	};
}
