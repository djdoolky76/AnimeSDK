#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIZenkovMissionLeftTabWidgetController_Data.h"

#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ZKMAPVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAB070)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionLeftTabWidgetController_ZkMapViewData_TypeDefinitionIndex = 66433;

	class UIZenkovMissionLeftTabWidgetController_ZkMapViewData : public ::MoleMole::UIZenkovMissionLeftTabWidgetController_Data
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ZKMAPVIEWDATA__CTOR_OFFSET))(this);
		}
	};
}
