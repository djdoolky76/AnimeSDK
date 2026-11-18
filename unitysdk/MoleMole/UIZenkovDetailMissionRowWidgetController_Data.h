#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF7030)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDetailMissionRowWidgetController_Data_TypeDefinitionIndex = 51753;

	class UIZenkovDetailMissionRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 QuestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
