#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19833430)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__SHOWFRIENDINVITEPOPWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x19833440)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__SHOWFRIENDINVITEPOPWINDOW_B__1_OFFSET UNITYSDK_OFFSET(0x198335D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 61217;

	class UIArcadeTeamChildWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 pos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowFriendInvitePopWindow_b__0(::FBHPDPBIGPK* info)
		{
			return ((::System::Void(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__SHOWFRIENDINVITEPOPWINDOW_B__0_OFFSET))(this, info);
		}

		::System::Void _ShowFriendInvitePopWindow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__SHOWFRIENDINVITEPOPWINDOW_B__1_OFFSET))(this);
		}
	};
}
