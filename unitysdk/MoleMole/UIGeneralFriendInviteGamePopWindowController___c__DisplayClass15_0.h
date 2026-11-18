#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNKKDGGFNBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189409E0)
#define MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKCHECKBTN_B__3_OFFSET UNITYSDK_OFFSET(0x189409F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFriendInviteGamePopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 92058;

	class UIGeneralFriendInviteGamePopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callOnCompleteAction; // 0x10
		::GNKKDGGFNBO* currSelectInvite; // 0x18
		::System::Action* onAcceptShowAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCheckBtn_b__3(::System::Collections::Generic::List_1<::GNKKDGGFNBO*>* invitationList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GNKKDGGFNBO*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFRIENDINVITEGAMEPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKCHECKBTN_B__3_OFFSET))(this, invitationList);
		}
	};
}
