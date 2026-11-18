#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController.h"

class JIKBJHNOMMG;
namespace MoleMole { class UIAllroundGeneralTutorialForumPostPopWindowController_LogicDelegate_PostGroup; }
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController_LogicDelegate; }
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET UNITYSDK_OFFSET(0x14C02480)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_HAAIEKALNLM_OFFSET UNITYSDK_OFFSET(0x14C026A0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C02560)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C02490)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C025F0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C02680)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C02690)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialForumPostPopWindowController_TypeDefinitionIndex = 68195;

	class UIAllroundGeneralTutorialForumPostPopWindowController : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController
	{
	public:
		::JIKBJHNOMMG* AICMIOFOAFG; // 0x350
		::MoleMole::UIAllroundGeneralTutorialForumPostPopWindowController_LogicDelegate_PostGroup* postDelegate; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* get__logicDelegate()
		{
			return ((::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void HAAIEKALNLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_HAAIEKALNLM_OFFSET))(this);
		}
	};
}
