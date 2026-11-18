#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CGPDJGDBGCA;

#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1135F180)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureTabBtnRoleRowWidgetController_Context_TypeDefinitionIndex = 71092;

	class UISummerTideTreasureTabBtnRoleRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CGPDJGDBGCA* RoleConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
