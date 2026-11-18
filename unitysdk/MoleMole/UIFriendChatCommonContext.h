#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BFHAALDDHFF;

#define MOLEMOLE_UIFRIENDCHATCOMMONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E32E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonContext_TypeDefinitionIndex = 78752;

	class UIFriendChatCommonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BFHAALDDHFF* Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
