#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideAvatarListItemRowWidgetController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15620C80)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS153_0__FINDAVATARWIDGET_B__0_OFFSET UNITYSDK_OFFSET(0x15620C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass153_0_TypeDefinitionIndex = 52236;

	class UIStrategyGuidePageController___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController* result; // 0x10
		::System::UInt32 avatarId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS153_0__CTOR_OFFSET))(this);
		}

		::System::Void _FindAvatarWidget_b__0(::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController* rowCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStrategyGuideAvatarListItemRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS153_0__FINDAVATARWIDGET_B__0_OFFSET))(this, rowCtrl);
		}
	};
}
