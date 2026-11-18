#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF520)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonPosTemplateDialogPopWindowController_Context_TypeDefinitionIndex = 39005;

	class UIInLevelButtonPosTemplateDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ConfigUICommon_Input_SceneType TargetSceneType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
