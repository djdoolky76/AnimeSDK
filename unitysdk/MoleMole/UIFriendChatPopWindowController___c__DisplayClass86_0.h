#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHKMKCIPOLD;
namespace MoleMole { class UIFriendChatPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1999F170)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__ONRECEIVEFRIENDCHATLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1999F180)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass86_0_TypeDefinitionIndex = 77442;

	class UIFriendChatPopWindowController___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatPopWindowController* __4__this; // 0x10
		::System::Boolean needShowUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnReceiveFriendChatList_b__0(::System::Collections::Generic::List_1<::LHKMKCIPOLD*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LHKMKCIPOLD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__ONRECEIVEFRIENDCHATLIST_B__0_OFFSET))(this, msgList);
		}
	};
}
