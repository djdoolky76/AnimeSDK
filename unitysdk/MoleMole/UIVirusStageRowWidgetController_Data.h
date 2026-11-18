#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNOFGFKDGDF;

#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167F4780)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusStageRowWidgetController_Data_TypeDefinitionIndex = 66784;

	class UIVirusStageRowWidgetController_Data : public ::System::Object
	{
	public:
		::BNOFGFKDGDF* hollowEntranceTemplate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
