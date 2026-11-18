#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendCardRowWidgetController; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS42_0__BINDHEADPORTRAITCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1AFFA000)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF9FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 76303;

	class UIFriendCardRowWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendCardRowWidgetController* __4__this; // 0x10
		::System::Boolean showPlatformInfoOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindHeadPortraitCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS42_0__BINDHEADPORTRAITCALLBACK_B__0_OFFSET))(this);
		}
	};
}
