#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class ALFHLKPJCIF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISnakeGame3DModelController; }
namespace MoleMole::MiniGame { class SnakeMiniGameWorld; }

#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x13AFDCB0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13AFDCA0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13AFDF10)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13AFE0B0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x13AFDCC0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13AFE040)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13AFDFA0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_REFRESHAUDIO_OFFSET UNITYSDK_OFFSET(0x13AFDD20)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFE340)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13AFE350)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13AFE3E0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13AFE410)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13AFE420)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeGamePageController_TypeDefinitionIndex = 43624;

	class UISnakeGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::ALFHLKPJCIF* _view; // 0x320
		::MoleMole::UISnakeGame3DModelController* snakeGame3dCtrl; // 0x328
		::MoleMole::MiniGame::SnakeMiniGameWorld* CDKNNDNLNBI; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MLIGDOAGEAI get_UICursorHideState()
		{
			return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::SnakeMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::SnakeMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_REFRESHAUDIO_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
