#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EOLACICGJBD;

#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA15A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCombatTabWidgetController_Context_TypeDefinitionIndex = 78462;

	class UIScaryNightCombatTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EOLACICGJBD* Avatar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
