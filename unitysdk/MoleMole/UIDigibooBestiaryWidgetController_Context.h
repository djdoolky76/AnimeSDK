#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1800D4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooBestiaryWidgetController_Context_TypeDefinitionIndex = 80515;

	class UIDigibooBestiaryWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
