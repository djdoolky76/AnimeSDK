#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDADCBANNKI.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E20D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListEntrustRowWidgetController_Data_TypeDefinitionIndex = 83313;

	class UIUrbanMapRightListEntrustRowWidgetController_Data : public ::System::Object
	{
	public:
		::FDADCBANNKI entrustType; // 0x10
		::System::Int32 questId; // 0x14
		::System::Int32 Index; // 0x18
		::System::Int32 SplitTeamSlotIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
