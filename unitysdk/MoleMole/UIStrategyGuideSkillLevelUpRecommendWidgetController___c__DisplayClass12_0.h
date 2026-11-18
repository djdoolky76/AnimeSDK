#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideSkillLevelUpRecommendWidgetController; }

#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188C53E0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHSKILLROWS_B__0_OFFSET UNITYSDK_OFFSET(0x188C53F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillLevelUpRecommendWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 53772;

	class UIStrategyGuideSkillLevelUpRecommendWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuideSkillLevelUpRecommendWidgetController* __4__this; // 0x10
		::Share::EAvatarSkillType goSkillType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillRows_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHSKILLROWS_B__0_OFFSET))(this);
		}
	};
}
