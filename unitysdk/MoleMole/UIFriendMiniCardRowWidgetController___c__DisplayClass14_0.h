#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendMiniCardRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIFRIENDMINICARDROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CLICKINVITEBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1A3D4A60)
#define MOLEMOLE_UIFRIENDMINICARDROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D4A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendMiniCardRowWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 73223;

	class UIFriendMiniCardRowWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendMiniCardRowWidgetController* __4__this; // 0x10
		::System::Action* onSuccessClick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDMINICARDROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClickInviteBtn_b__0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDMINICARDROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CLICKINVITEBTN_B__0_OFFSET))(this, isAllow);
		}
	};
}
