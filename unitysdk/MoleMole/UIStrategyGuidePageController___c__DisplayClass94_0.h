#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace MoleMole { class UIStrategyGuidePageController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BFA0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCURWEAPONITEMCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x19C8BFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass94_0_TypeDefinitionIndex = 52234;

	class UIStrategyGuidePageController___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::DMCCPINHAGM* weaponData; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCurWeaponItemClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCURWEAPONITEMCLICK_B__0_OFFSET))(this);
		}
	};
}
