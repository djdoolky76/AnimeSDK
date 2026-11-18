#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166B0200)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x166B0210)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass64_1_TypeDefinitionIndex = 77445;

	template <typename T>
	class UIFriendChatPopWindowController___c__DisplayClass64_1 : public ::System::Object
	{
	public:
		::IDGDIFDMIDP* circleDataExt; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCircleChatItemSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_1__ONCIRCLECHATITEMSELECT_B__0_OFFSET))(this);
		}
	};
}
