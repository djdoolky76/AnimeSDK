#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVALTARBUFFWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F688E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAltarBuffWidgetController_Data_TypeDefinitionIndex = 52689;

	class UIZenkovAltarBuffWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::Boolean Blinking; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 Quality; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVALTARBUFFWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
