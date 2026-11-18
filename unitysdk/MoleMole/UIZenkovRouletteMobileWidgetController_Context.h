#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE542D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRouletteMobileWidgetController_Context_TypeDefinitionIndex = 42740;

	class UIZenkovRouletteMobileWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean DisplayOnly; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
