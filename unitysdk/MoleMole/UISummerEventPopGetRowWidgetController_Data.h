#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;

#define MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB55A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPopGetRowWidgetController_Data_TypeDefinitionIndex = 73004;

	class UISummerEventPopGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::ODLBEJANMEG* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
