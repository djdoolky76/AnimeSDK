#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;

#define MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C9E730)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardRowWidgetController_Data_TypeDefinitionIndex = 69858;

	class UISummerEventRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::BJBMLMHDOME* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
