#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJFBLKCJLAF;

#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167AC7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainLevelEfficiencyItemWidgetController_Data_TypeDefinitionIndex = 39366;

	class UIRABTrainLevelEfficiencyItemWidgetController_Data : public ::System::Object
	{
	public:
		::FJFBLKCJLAF* Config; // 0x10
		::System::Boolean ShowCollectBtn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
