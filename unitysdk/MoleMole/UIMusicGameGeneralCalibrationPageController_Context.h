#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNKFDFJGKEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1675D580)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationPageController_Context_TypeDefinitionIndex = 71656;

	class UIMusicGameGeneralCalibrationPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNKFDFJGKEO source; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
