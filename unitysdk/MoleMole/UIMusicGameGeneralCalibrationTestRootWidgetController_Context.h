#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNKFDFJGKEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONTESTROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8A620)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationTestRootWidgetController_Context_TypeDefinitionIndex = 63207;

	class UIMusicGameGeneralCalibrationTestRootWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNKFDFJGKEO source; // 0x28
		::System::Boolean OpenFromMainLine; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONTESTROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
