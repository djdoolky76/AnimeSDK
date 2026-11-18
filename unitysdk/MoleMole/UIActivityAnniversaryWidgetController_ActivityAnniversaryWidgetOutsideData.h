#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOGENJCAEJ.h"

#define MOLEMOLE_UIACTIVITYANNIVERSARYWIDGETCONTROLLER_ACTIVITYANNIVERSARYWIDGETOUTSIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A114760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAnniversaryWidgetController_ActivityAnniversaryWidgetOutsideData_TypeDefinitionIndex = 57758;

	class UIActivityAnniversaryWidgetController_ActivityAnniversaryWidgetOutsideData : public ::KHOGENJCAEJ
	{
	public:
		::System::Int32 RoleIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANNIVERSARYWIDGETCONTROLLER_ACTIVITYANNIVERSARYWIDGETOUTSIDEDATA__CTOR_OFFSET))(this);
		}
	};
}
