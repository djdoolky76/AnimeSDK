#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F63590)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketStoreTaskWidgetController_Context_TypeDefinitionIndex = 45227;

	class UIZKFriendMarketStoreTaskWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TaskType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
