#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNKFDFJGKEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONBGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190514B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationBgWidgetController_Context_TypeDefinitionIndex = 58694;

	class UIMusicGameGeneralCalibrationBgWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNKFDFJGKEO source; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONBGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
