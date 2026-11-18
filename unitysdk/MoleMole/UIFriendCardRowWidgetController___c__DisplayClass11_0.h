#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendCardRowWidgetController; }
namespace MoleMole { class UIZenkovPriceFriendCardContext; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18932160)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHZENKOVTRANSBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18932170)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 76301;

	class UIFriendCardRowWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendCardRowWidgetController* __4__this; // 0x10
		::MoleMole::UIZenkovPriceFriendCardContext* zenkovContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshZenkovTransBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHZENKOVTRANSBTN_B__0_OFFSET))(this);
		}
	};
}
