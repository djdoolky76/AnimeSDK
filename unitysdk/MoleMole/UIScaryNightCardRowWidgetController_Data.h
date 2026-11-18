#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISCARYNIGHTCARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCD890)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCardRowWidgetController_Data_TypeDefinitionIndex = 70843;

	class UIScaryNightCardRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 CardID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
