#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GDHNLBJFHOL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIStartChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18F352A0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F352B0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x18F35400)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F35390)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F35340)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F355B0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F355C0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F35650)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F35660)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameStartPageController_TypeDefinitionIndex = 83991;

	class UIHoundGameStartPageController : public ::MoleMole::UIWindowController
	{
	public:
		::GDHNLBJFHOL* _view; // 0x320
		::MoleMole::UISoulHoundsIIIStartChildWindowController* NEDOFNBGFCL; // 0x328
		::MoleMole::MiniGame::HoundMiniGameWorld* PIGCHNAOLBD; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
