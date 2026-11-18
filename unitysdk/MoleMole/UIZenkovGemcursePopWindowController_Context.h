#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVGEMCURSEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3FC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemcursePopWindowController_Context_TypeDefinitionIndex = 57374;

	class UIZenkovGemcursePopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 Stack; // 0x28
		::System::UInt32 AbilityId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMCURSEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
