#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAAEBHNLHEM;

#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x185B9C20)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardTabWidgetController_Data_TypeDefinitionIndex = 39789;

	class UISummerEventRewardTabWidgetController_Data : public ::System::Object
	{
	public:
		::LAAEBHNLHEM* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
