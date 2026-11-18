#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace MoleMole { class UIStrategyGuidePageController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BF60)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__REFRESHCURRENTWEAPON_B__0_OFFSET UNITYSDK_OFFSET(0x19C8BF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass93_0_TypeDefinitionIndex = 52235;

	class UIStrategyGuidePageController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x10
		::DMCCPINHAGM* weaponData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCurrentWeapon_b__0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS93_0__REFRESHCURRENTWEAPON_B__0_OFFSET))(this, _);
		}
	};
}
