#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KIBCMAJOLIM;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178557E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityRowWidgetController_Context_TypeDefinitionIndex = 65278;

	class UIHIADoubleWeekActivityRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KIBCMAJOLIM* gridData; // 0x28
		::System::Int32 weeklyBingoGroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
