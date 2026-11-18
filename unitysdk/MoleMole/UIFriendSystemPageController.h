#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class BOEEKGGLNFB;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendSystemWidgetController; }

#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ALEDEAFDHEK_OFFSET UNITYSDK_OFFSET(0x180995C0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_FGBNECCHINA_OFFSET UNITYSDK_OFFSET(0x18098E70)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18098A90)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18098AA0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18099170)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18099370)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18098B30)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18098CA0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180993E0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180993F0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18099480)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18099510)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18099520)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18099530)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPageController_TypeDefinitionIndex = 83287;

	class UIFriendSystemPageController : public ::MoleMole::UIWindowController
	{
	public:
		::BOEEKGGLNFB* _view; // 0x320
		::MoleMole::UIFriendSystemWidgetController* CJFHEGOFPBA; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ALEDEAFDHEK(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ALEDEAFDHEK_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void FGBNECCHINA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_FGBNECCHINA_OFFSET))(this);
		}
	};
}
