#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController.h"

namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController_LogicDelegate; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate; }

#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_CBDBDDFEPEK_OFFSET UNITYSDK_OFFSET(0x18FF3E30)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET UNITYSDK_OFFSET(0x18FF3CC0)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF3CD0)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF3D90)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF3E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpRecommendPopWindowController_TypeDefinitionIndex = 56890;

	class UIRABExpRecommendPopWindowController : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController
	{
	public:
		::MoleMole::UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate* FGAFEIDLOCB; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* get__logicDelegate()
		{
			return ((::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void CBDBDDFEPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_CBDBDDFEPEK_OFFSET))(this);
		}
	};
}
