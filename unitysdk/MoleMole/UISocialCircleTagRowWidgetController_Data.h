#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBDPPHMPKPI;

#define MOLEMOLE_UISOCIALCIRCLETAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x169043A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagRowWidgetController_Data_TypeDefinitionIndex = 84130;

	class UISocialCircleTagRowWidgetController_Data : public ::System::Object
	{
	public:
		::MBDPPHMPKPI* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
