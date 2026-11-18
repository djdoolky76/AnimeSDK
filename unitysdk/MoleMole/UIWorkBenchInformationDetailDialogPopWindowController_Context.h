#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MHODHAMHFDF;

#define MOLEMOLE_UIWORKBENCHINFORMATIONDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C07EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInformationDetailDialogPopWindowController_Context_TypeDefinitionIndex = 73590;

	class UIWorkBenchInformationDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MHODHAMHFDF* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATIONDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
