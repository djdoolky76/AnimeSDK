#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideAvatarListItemRowWidgetController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185A4BB0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS58_0__ONAVATARLISTFOCUSCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x185A4BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass58_0_TypeDefinitionIndex = 52240;

	class UIStrategyGuidePageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Boolean isFocused; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAvatarListFocusChanged_b__0(::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController* rowCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS58_0__ONAVATARLISTFOCUSCHANGED_B__0_OFFSET))(this, rowCtrl);
		}
	};
}
