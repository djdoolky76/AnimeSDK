#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19616B70)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_MEIALCGKDID_OFFSET UNITYSDK_OFFSET(0x19616F90)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19616C90)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19616CE0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19616D70)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19616B80)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19616BD0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19616DC0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19616E00)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19616E10)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19616E20)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19616EE0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19616EF0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19616F00)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginVagueBgDialogController_TypeDefinitionIndex = 40457;

	class UILoginVagueBgDialogController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::GameObject* NCKJEOAPFFJ; // 0x320
		::System::Boolean isOpenWebView; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MEIALCGKDID(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_MEIALCGKDID_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
