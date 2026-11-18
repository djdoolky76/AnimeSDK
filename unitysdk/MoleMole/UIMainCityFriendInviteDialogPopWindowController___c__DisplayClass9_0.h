#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityFriendInviteDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183E5720)
#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONITEMCLICKCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x183E5730)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityFriendInviteDialogPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 64882;

	class UIMainCityFriendInviteDialogPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityFriendInviteDialogPopWindowController* __4__this; // 0x10
		::System::Action* confirmAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemClickConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONITEMCLICKCONFIRM_B__0_OFFSET))(this);
		}
	};
}
