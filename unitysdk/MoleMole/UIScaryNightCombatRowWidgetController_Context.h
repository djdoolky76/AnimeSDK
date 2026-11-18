#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class APKEHDDPGOD;

#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEF400)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCombatRowWidgetController_Context_TypeDefinitionIndex = 51765;

	class UIScaryNightCombatRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::APKEHDDPGOD* Level; // 0x28
		::System::Boolean IsLast; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
