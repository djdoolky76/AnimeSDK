#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBBOLEDJDCD;

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1999F200)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_1__ONRECEIVEFRIENDCHATLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1999F210)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass86_1_TypeDefinitionIndex = 77447;

	template <typename T>
	class UIFriendChatPopWindowController___c__DisplayClass86_1 : public ::System::Object
	{
	public:
		::System::UInt32 lastSelectedFriendUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnReceiveFriendChatList_b__1(::IBBOLEDJDCD* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBBOLEDJDCD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_1__ONRECEIVEFRIENDCHATLIST_B__1_OFFSET))(this, item);
		}
	};
}
