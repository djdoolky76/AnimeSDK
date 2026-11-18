#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11389B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenKovLegendRowWidgetController_Data_TypeDefinitionIndex = 75260;

	class UIZenKovLegendRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Name; // 0x18
		::System::Int32 Index; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
