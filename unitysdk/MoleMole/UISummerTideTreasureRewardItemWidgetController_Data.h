#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHOHNJDBEIK;

#define MOLEMOLE_UISUMMERTIDETREASUREREWARDITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1828E730)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureRewardItemWidgetController_Data_TypeDefinitionIndex = 82866;

	class UISummerTideTreasureRewardItemWidgetController_Data : public ::System::Object
	{
	public:
		::IHOHNJDBEIK* SeafoodConfig; // 0x10
		::System::UInt32 Count; // 0x18
		::System::UInt32 SeafoodId; // 0x1C
		::System::Boolean IsCollectPage; // 0x20
		::System::Boolean ResultPerformInputLocked; // 0x21
		::System::Boolean ResultPerformHidden; // 0x22
		::System::Boolean ResultPerformShown; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREREWARDITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
