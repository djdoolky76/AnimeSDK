#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABHLKDOAKH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED95F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController_Context_TypeDefinitionIndex = 94924;

	class UIBallGameOptionsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28
		::Il2CppArray<::BABHLKDOAKH>* Options; // 0x30
		::System::Int32 EventID; // 0x38
		::System::Boolean IsEventTypeOptions; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 EventType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
