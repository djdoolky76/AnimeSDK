#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C16090)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShareRoleIconWidgetController_Context_TypeDefinitionIndex = 76475;

	class UIZenkovShareRoleIconWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 RoleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
