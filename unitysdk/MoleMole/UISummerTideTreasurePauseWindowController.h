#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class MNBNBEGJFKF;
namespace MoleMole { class SummerTideTreasurePauseContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_EHNHNBKCNHH_OFFSET UNITYSDK_OFFSET(0x13B1CF50)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13B1CB70)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B1CD70)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13B1CE70)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B1CE00)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13B1CB80)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1CFC0)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B1CFD0)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13B1D060)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B1D090)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13B1D0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasurePauseWindowController_TypeDefinitionIndex = 70085;

	class UISummerTideTreasurePauseWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MNBNBEGJFKF* _view; // 0x320
		::MoleMole::SummerTideTreasurePauseContext* DAAAEJDBNFI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EHNHNBKCNHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_EHNHNBKCNHH_OFFSET))(this);
		}
	};
}
