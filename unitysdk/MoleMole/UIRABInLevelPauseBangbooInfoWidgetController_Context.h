#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABINLEVELPAUSEBANGBOOINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF4AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelPauseBangbooInfoWidgetController_Context_TypeDefinitionIndex = 58977;

	class UIRABInLevelPauseBangbooInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAUSEBANGBOOINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
