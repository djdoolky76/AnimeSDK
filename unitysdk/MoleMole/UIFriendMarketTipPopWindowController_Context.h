#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BDCKHDEBKKK;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIFRIENDMARKETTIPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDB0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendMarketTipPopWindowController_Context_TypeDefinitionIndex = 52079;

	class UIFriendMarketTipPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickGo; // 0x28
		::BDCKHDEBKKK* PlayerBrief; // 0x30
		::System::String* TitleTextKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDMARKETTIPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
