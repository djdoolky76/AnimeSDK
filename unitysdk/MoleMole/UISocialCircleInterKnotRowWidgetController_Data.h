#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEAMIDOCGKA;

#define MOLEMOLE_UISOCIALCIRCLEINTERKNOTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x166DB120)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInterKnotRowWidgetController_Data_TypeDefinitionIndex = 42299;

	class UISocialCircleInterKnotRowWidgetController_Data : public ::System::Object
	{
	public:
		::OEAMIDOCGKA* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINTERKNOTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
