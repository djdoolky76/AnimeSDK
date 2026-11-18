#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17094010)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController_Context_TypeDefinitionIndex = 77448;

	class UIFriendChatPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IDGDIFDMIDP* CircleDataExt; // 0x28
		::FBHPDPBIGPK* friendBriefInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
