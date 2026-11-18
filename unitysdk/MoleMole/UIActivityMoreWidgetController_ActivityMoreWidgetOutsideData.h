#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOGENJCAEJ.h"

#define MOLEMOLE_UIACTIVITYMOREWIDGETCONTROLLER_ACTIVITYMOREWIDGETOUTSIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20EDB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMoreWidgetController_ActivityMoreWidgetOutsideData_TypeDefinitionIndex = 84124;

	class UIActivityMoreWidgetController_ActivityMoreWidgetOutsideData : public ::KHOGENJCAEJ
	{
	public:
		::System::Int32 RoleIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMOREWIDGETCONTROLLER_ACTIVITYMOREWIDGETOUTSIDEDATA__CTOR_OFFSET))(this);
		}
	};
}
