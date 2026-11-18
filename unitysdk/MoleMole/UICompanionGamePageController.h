#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class HGJBMEHEAFD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::MiniGame { class CompanionMiniGameWorld; }

#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x16EBBD20)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EBBD10)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EBBD30)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET UNITYSDK_OFFSET(0x16EBBE80)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EBBED0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EBBE10)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EBBDC0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBC090)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EBC0A0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EBC130)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EBC160)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EBC170)

namespace MoleMole
{
	inline static constexpr unsigned int UICompanionGamePageController_TypeDefinitionIndex = 91561;

	class UICompanionGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::HGJBMEHEAFD* _view; // 0x320
		::MoleMole::MiniGame::CompanionMiniGameWorld* JGDOLIEHLDI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MLIGDOAGEAI get_UICursorHideState()
		{
			return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnInitMiniWorld(::MoleMole::MiniGame::CompanionMiniGameWorld* companionMiniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::CompanionMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET))(this, companionMiniGameWorld);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
