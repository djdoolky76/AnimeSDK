#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDLJMGBHAD;

#define MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16779590)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyRowWidgetController_Data_TypeDefinitionIndex = 81955;

	class UIRABEnemyRowWidgetController_Data : public ::System::Object
	{
	public:
		::LFDLJMGBHAD* bindData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
