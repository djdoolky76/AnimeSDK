#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDLJMGBHAD;

#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18702A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelEnemyRowWidgetController_Data_TypeDefinitionIndex = 78636;

	class UIRABLevelEnemyRowWidgetController_Data : public ::System::Object
	{
	public:
		::LFDLJMGBHAD* bindData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
