#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x167ED350)
#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167ED400)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointViewPointWidgetController_TypeDefinitionIndex = 44363;

	class UIUrbanMapPointViewPointWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
