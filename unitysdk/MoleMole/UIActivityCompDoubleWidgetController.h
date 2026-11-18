#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CJIEIHEDMME;
class CJPKDOFKGAD;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_JJOEDKNNFPF_OFFSET UNITYSDK_OFFSET(0x198FEE30)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198FE920)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198FE9B0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x198FE7A0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x198FE800)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET UNITYSDK_OFFSET(0x198FEB20)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHCOMPWIDGET_OFFSET UNITYSDK_OFFSET(0x198FEA30)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198FEB90)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198FEBF0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198FEC80)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x198FED10)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x198FEDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompDoubleWidgetController_TypeDefinitionIndex = 54045;

	class UIActivityCompDoubleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::CJPKDOFKGAD* _view; // 0x2C8
		::CJIEIHEDMME* activityData; // 0x2D0
		::MoleMole::ActivityWidgetContext* activityWidgetContext; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCompWidget(::MoleMole::ActivityWidgetContext* widgetContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHCOMPWIDGET_OFFSET))(this, widgetContext);
		}

		::System::Void RefreshBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JJOEDKNNFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_JJOEDKNNFPF_OFFSET))(this);
		}
	};
}
