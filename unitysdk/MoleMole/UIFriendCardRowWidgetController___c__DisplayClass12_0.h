#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendCardRowWidgetController; }
namespace MoleMole { class UIZenkovPriceFriendCardContext; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189321F0)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHZENKOVSHAREBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18932200)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 76307;

	class UIFriendCardRowWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendCardRowWidgetController* __4__this; // 0x10
		::MoleMole::UIZenkovPriceFriendCardContext* zenkovContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshZenkovShareBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHZENKOVSHAREBTN_B__0_OFFSET))(this);
		}
	};
}
