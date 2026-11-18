#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA22D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketStoreInfoTagWidgetController_Context_TypeDefinitionIndex = 90573;

	class UIZKFriendMarketStoreInfoTagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Price; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
