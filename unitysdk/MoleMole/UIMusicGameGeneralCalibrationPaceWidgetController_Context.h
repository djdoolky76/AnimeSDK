#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNKFDFJGKEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPACEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193B8090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationPaceWidgetController_Context_TypeDefinitionIndex = 86448;

	class UIMusicGameGeneralCalibrationPaceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNKFDFJGKEO source; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPACEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
