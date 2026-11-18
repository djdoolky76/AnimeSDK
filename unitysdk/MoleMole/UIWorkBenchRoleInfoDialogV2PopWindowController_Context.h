#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CKGNBCLLHMK;

#define MOLEMOLE_UIWORKBENCHROLEINFODIALOGV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185F74B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchRoleInfoDialogV2PopWindowController_Context_TypeDefinitionIndex = 56803;

	class UIWorkBenchRoleInfoDialogV2PopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CKGNBCLLHMK* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHROLEINFODIALOGV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
