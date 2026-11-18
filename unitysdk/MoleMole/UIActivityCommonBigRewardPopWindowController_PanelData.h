#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CEF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCommonBigRewardPopWindowController_PanelData_TypeDefinitionIndex = 39518;

	class UIActivityCommonBigRewardPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* ActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
