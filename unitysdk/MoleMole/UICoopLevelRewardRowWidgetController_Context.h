#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLAGJHKADAN;

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19852770)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController_Context_TypeDefinitionIndex = 49930;

	class UICoopLevelRewardRowWidgetController_Context : public ::System::Object
	{
	public:
		::GLAGJHKADAN* Cfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
