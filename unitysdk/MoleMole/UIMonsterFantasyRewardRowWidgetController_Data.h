#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;

#define MOLEMOLE_UIMONSTERFANTASYREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1904E050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRewardRowWidgetController_Data_TypeDefinitionIndex = 48209;

	class UIMonsterFantasyRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::BJBMLMHDOME* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
