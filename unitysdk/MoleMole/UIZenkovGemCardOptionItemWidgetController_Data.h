#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVGEMCARDOPTIONITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA7100)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemCardOptionItemWidgetController_Data_TypeDefinitionIndex = 73166;

	class UIZenkovGemCardOptionItemWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 ZenkovItemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMCARDOPTIONITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
