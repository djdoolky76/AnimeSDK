#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class IJPEBPKOJMF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::MiniGame { class BallRaceMiniGameWorld; }

#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x18D20530)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18D20490)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D204A0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET UNITYSDK_OFFSET(0x18D20840)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D20670)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D20600)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D20540)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D20590)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D20890)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D208A0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D20930)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D20960)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D20970)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D20980)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallRaceGamePageController_TypeDefinitionIndex = 80126;

	class UIBallRaceGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::IJPEBPKOJMF* _view; // 0x320
		::MoleMole::MiniGame::BallRaceMiniGameWorld* JGDOLIEHLDI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MLIGDOAGEAI get_UICursorHideState()
		{
			return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnInitMiniWorld(::MoleMole::MiniGame::BallRaceMiniGameWorld* ballRaceMiniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BallRaceMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET))(this, ballRaceMiniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
