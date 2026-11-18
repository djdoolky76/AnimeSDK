#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GNKKDGGFNBO;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180AB680)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFriendInviteGamePopWindowController_Context_TypeDefinitionIndex = 92057;

	class UIGeneralFriendInviteGamePopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GNKKDGGFNBO* request; // 0x28
		::System::Action* OnAcceptShowAction; // 0x30
		::System::Action* CallOnComplete; // 0x38
		::System::UInt32 headPortrait; // 0x40

		::System::Void _ctor(::GNKKDGGFNBO* request, ::System::UInt32 portrait, ::System::Action* onAcceptShowAction, ::System::Action* callOnComplete)
		{
			return ((::System::Void(*)(::PVOID, ::GNKKDGGFNBO*, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, request, portrait, onAcceptShowAction, callOnComplete);
		}
	};
}
