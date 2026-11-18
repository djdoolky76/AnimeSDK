#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLOOBOKNIMI;

#define MOLEMOLE_UISOCIALCIRCLELEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D63FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleLevelRowWidgetController_Data_TypeDefinitionIndex = 53287;

	class UISocialCircleLevelRowWidgetController_Data : public ::System::Object
	{
	public:
		::GLOOBOKNIMI* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLELEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
