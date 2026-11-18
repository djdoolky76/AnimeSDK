#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MBHOGLGMFEM;

#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19902270)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGoldenWeekV2WidgetController_Context_TypeDefinitionIndex = 76694;

	class UIActivityGoldenWeekV2WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MBHOGLGMFEM* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
