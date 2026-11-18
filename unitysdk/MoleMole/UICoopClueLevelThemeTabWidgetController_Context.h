#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJOIPMOMJD_MOLDFENPHOP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBC3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_Context_TypeDefinitionIndex = 74515;

	class UICoopClueLevelThemeTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LIJOIPMOMJD_MOLDFENPHOP TargetTheme; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
