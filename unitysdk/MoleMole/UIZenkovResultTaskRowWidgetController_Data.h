#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKICMCIGLAD.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVRESULTTASKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1285C7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultTaskRowWidgetController_Data_TypeDefinitionIndex = 59616;

	class UIZenkovResultTaskRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 QuestId; // 0x10
		::FKICMCIGLAD ResultRowType; // 0x14
		::System::Int32 FilmCurrencyNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTTASKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
