#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIDIGIBOOOBJECTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15991270)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooObjectRowWidgetController_Data_TypeDefinitionIndex = 68862;

	class UIDigibooObjectRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 Num; // 0x10
		::System::Int32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOOBJECTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
