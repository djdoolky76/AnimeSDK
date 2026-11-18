#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x155FED30)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCombatPageController_Context_TypeDefinitionIndex = 76974;

	class UIScaryNightCombatPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectAvatarIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
