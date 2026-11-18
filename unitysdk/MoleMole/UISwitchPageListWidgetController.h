#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class OOJPMPCLNBI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISwitchPageListWidgetContext; }

#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_APPDIKFFEGH_OFFSET UNITYSDK_OFFSET(0x105575B0)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_DECMEIJMNJD_OFFSET UNITYSDK_OFFSET(0x10557010)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_DPLCFJFGGFD_OFFSET UNITYSDK_OFFSET(0x10557660)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10557190)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10557220)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10556D20)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10556F20)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_RESETUICONTEXT_OFFSET UNITYSDK_OFFSET(0x105572A0)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10557310)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10557370)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10557400)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10557490)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10557520)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchPageListWidgetController_TypeDefinitionIndex = 89265;

	class UISwitchPageListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OOJPMPCLNBI* _view; // 0x2C8
		::MoleMole::UISwitchPageListWidgetContext* DAAAEJDBNFI; // 0x2D0
		::System::Int32 KJMMFKLDBEC; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetUIContext(::MoleMole::UISwitchPageListWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISwitchPageListWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_RESETUICONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void APPDIKFFEGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_APPDIKFFEGH_OFFSET))(this);
		}

		::System::Void DECMEIJMNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_DECMEIJMNJD_OFFSET))(this);
		}

		::System::Void DPLCFJFGGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_DPLCFJFGGFD_OFFSET))(this);
		}
	};
}
