#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BABA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameSkillButtonSwitchChildWindowController_Context_TypeDefinitionIndex = 95154;

	class UIBallGameSkillButtonSwitchChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
