#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVALTARBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11389B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAltarBuffRowWidgetController_Data_TypeDefinitionIndex = 80265;

	class UIZenkovAltarBuffRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Desc; // 0x18
		::System::String* Icon; // 0x20
		::System::Int32 Quality; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVALTARBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
