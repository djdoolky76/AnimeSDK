#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KGPPDENAECH;

#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x164C1F90)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureInLevelItemWidgetController_Data_TypeDefinitionIndex = 62178;

	class UISummerTideTreasureInLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::KGPPDENAECH* Config; // 0x10
		::System::Boolean IsHidden; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 Count; // 0x1C
		::System::UInt32 DropItemConfigId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
