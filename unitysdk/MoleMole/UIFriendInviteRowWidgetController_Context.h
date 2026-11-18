#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GNKKDGGFNBO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184C4080)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInviteRowWidgetController_Context_TypeDefinitionIndex = 62810;

	class UIFriendInviteRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::GNKKDGGFNBO*>* OnReject; // 0x28
		::GNKKDGGFNBO* request; // 0x30
		::System::Action_1<::System::Action*>* OnConfirm; // 0x38
		::System::Action* ConfirmAction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
