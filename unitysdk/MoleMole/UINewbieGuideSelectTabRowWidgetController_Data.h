#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1840AB70)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectTabRowWidgetController_Data_TypeDefinitionIndex = 79373;

	class UINewbieGuideSelectTabRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Boolean IsAvatar; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 Id; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
