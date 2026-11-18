#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFFADNLENPN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1899DB80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatPageController_Context_TypeDefinitionIndex = 41690;

	class UIActivityHotPotCombatPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DefaultChapter; // 0x28
		::IFFADNLENPN PageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
