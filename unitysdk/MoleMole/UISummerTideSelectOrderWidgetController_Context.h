#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDESELECTORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1828DCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSelectOrderWidgetController_Context_TypeDefinitionIndex = 55145;

	class UISummerTideSelectOrderWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJGEHPBJKDM WorldHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELECTORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
