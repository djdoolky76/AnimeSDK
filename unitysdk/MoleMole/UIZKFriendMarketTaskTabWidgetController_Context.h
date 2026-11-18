#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZKFRIENDMARKETTASKTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF6620)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketTaskTabWidgetController_Context_TypeDefinitionIndex = 46812;

	class UIZKFriendMarketTaskTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsTop; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 TaskId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
