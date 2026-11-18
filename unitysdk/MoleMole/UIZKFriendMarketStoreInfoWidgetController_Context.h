#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F63540)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketStoreInfoWidgetController_Context_TypeDefinitionIndex = 86364;

	class UIZKFriendMarketStoreInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean Locked; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 Price; // 0x2C
		::System::Int32 RawPrice; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
