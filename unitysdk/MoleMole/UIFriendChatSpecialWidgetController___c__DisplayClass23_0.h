#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBIADKAGC.h"
#include "unitysdk/System/Object.h"

class LNOODAAKGJM;
namespace MoleMole { class UIFriendChatSpecialWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D41F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1A3D4200)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1A3D4410)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x1A3D48B0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x1A3D4870)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 87419;

	class UIFriendChatSpecialWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* __9__2; // 0x10
		::MoleMole::UIFriendChatSpecialWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::LNOODAAKGJM* joinGameContent; // 0x28
		::System::Action_1<::AKLBIADKAGC>* __9__3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__0_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__1_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__3(::AKLBIADKAGC currState)
		{
			return ((::System::Void(*)(::PVOID, ::AKLBIADKAGC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__3_OFFSET))(this, currState);
		}

		::System::Void _InitInviteUIView_b__2(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__2_OFFSET))(this, retCode);
		}
	};
}
