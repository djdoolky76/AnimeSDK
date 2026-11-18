#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC20B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooPlayerChangeRowWidgetController_Context_TypeDefinitionIndex = 71366;

	class UIDigibooPlayerChangeRowWidgetController_Context : public ::System::Object
	{
	public:
		::System::UInt32 DigibooUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
