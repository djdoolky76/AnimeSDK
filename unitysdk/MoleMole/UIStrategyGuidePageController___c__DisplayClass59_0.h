#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideAvatarListItemRowWidgetController; }
namespace MoleMole { class UIStrategyGuidePageController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185A4BF0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS59_0__REFRESHAVATARSELECTION_B__0_OFFSET UNITYSDK_OFFSET(0x185A4C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass59_0_TypeDefinitionIndex = 52237;

	class UIStrategyGuidePageController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x10
		::System::Boolean isFocused; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAvatarSelection_b__0(::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController* rowCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS59_0__REFRESHAVATARSELECTION_B__0_OFFSET))(this, rowCtrl);
		}
	};
}
