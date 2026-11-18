#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZKFRIENDMARKETMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketMainPageController_Context_TypeDefinitionIndex = 56263;

	class UIZKFriendMarketMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt64 OwnerUID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
