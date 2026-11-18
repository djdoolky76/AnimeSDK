#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIDIGIBOOROLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1807D050)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooRoleRowWidgetController_Data_TypeDefinitionIndex = 88706;

	class UIDigibooRoleRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 HandBookID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOROLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
