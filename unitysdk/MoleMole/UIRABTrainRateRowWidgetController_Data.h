#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJFBLKCJLAF;

#define MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D424A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainRateRowWidgetController_Data_TypeDefinitionIndex = 72910;

	class UIRABTrainRateRowWidgetController_Data : public ::System::Object
	{
	public:
		::FJFBLKCJLAF* Config; // 0x10
		::System::Int32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
