#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVAWAYTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE53CB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAwayTipsDialogPopWindowController_Context_TypeDefinitionIndex = 92004;

	class UIZenkovAwayTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* GoAction; // 0x28
		::System::Action* EvacuateAction; // 0x30
		::System::Boolean ShowGoBtn; // 0x38
		::System::Boolean ShowEvacuateBtn; // 0x39
		::System::Boolean ShowCancelBtn; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVAWAYTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
