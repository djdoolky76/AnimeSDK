#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class IBBOLEDJDCD;
namespace MoleMole { class UIFriendChatItemContext; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1999F060)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__ONUPDATEFRIENDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1999F070)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__ONUPDATEFRIENDINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1999F0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass84_0_TypeDefinitionIndex = 77443;

	class UIFriendChatPopWindowController___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::FBHPDPBIGPK* newPlayerBrief; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateFriendInfo_b__0(::IBBOLEDJDCD* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBBOLEDJDCD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__ONUPDATEFRIENDINFO_B__0_OFFSET))(this, item);
		}

		::System::Boolean _OnUpdateFriendInfo_b__1(::MoleMole::UIFriendChatItemContext* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS84_0__ONUPDATEFRIENDINFO_B__1_OFFSET))(this, item);
		}
	};
}
