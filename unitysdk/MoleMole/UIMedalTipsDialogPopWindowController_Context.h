#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFDMHLOBDGB;

#define MOLEMOLE_UIMEDALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C76E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalTipsDialogPopWindowController_Context_TypeDefinitionIndex = 63921;

	class UIMedalTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JFDMHLOBDGB* FriendSystemMedalData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
