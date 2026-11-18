#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHEIAPDAGEH;

#define MOLEMOLE_UISUMMERTIDETREASUREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E04A30)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureItemWidgetController_Data_TypeDefinitionIndex = 86454;

	class UISummerTideTreasureItemWidgetController_Data : public ::System::Object
	{
	public:
		::DHEIAPDAGEH* ToolConfig; // 0x10
		::System::Boolean IsRecommended; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
