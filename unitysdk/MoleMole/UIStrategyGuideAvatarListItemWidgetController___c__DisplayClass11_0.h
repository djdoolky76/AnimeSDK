#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideAvatarListItemRowWidgetController; }

#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17164860)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHSELECTION_B__0_OFFSET UNITYSDK_OFFSET(0x17164870)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideAvatarListItemWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 83418;

	class UIStrategyGuideAvatarListItemWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Boolean isFocused; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSelection_b__0(::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController* rowCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHSELECTION_B__0_OFFSET))(this, rowCtrl);
		}
	};
}
