#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GNKKDGGFNBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1939F570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityFriendInviteDialogPopWindowController_Context_TypeDefinitionIndex = 64881;

	class UIMainCityFriendInviteDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::GNKKDGGFNBO*>* activeInvites; // 0x28
		::GNKKDGGFNBO* selectedInvite; // 0x30
		::System::Action* OnAcceptShowAction; // 0x38
		::System::Action* CallOnComplete; // 0x40

		::System::Void _ctor(::GNKKDGGFNBO* request, ::System::Collections::Generic::List_1<::GNKKDGGFNBO*>* activeRequests, ::System::Action* onAcceptShowAction, ::System::Action* callOnComplete)
		{
			return ((::System::Void(*)(::PVOID, ::GNKKDGGFNBO*, ::System::Collections::Generic::List_1<::GNKKDGGFNBO*>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, request, activeRequests, onAcceptShowAction, callOnComplete);
		}
	};
}
