#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FPENEKKIACO;
namespace MoleMole { class ActivityAvatarWdigetContext; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityOVALighterEntryBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_DABHMNJPHCE_OFFSET UNITYSDK_OFFSET(0x1A128C60)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_GBGDEMIJPON_OFFSET UNITYSDK_OFFSET(0x1A1285E0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_HPCKLBDKHFA_OFFSET UNITYSDK_OFFSET(0x1A127E80)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_INVOKEENTRYBTN_OFFSET UNITYSDK_OFFSET(0x1A128620)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_JBCENOBPOIC_OFFSET UNITYSDK_OFFSET(0x1A129230)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_JONMFJDCKCH_OFFSET UNITYSDK_OFFSET(0x1A127900)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_LLJCGLNMCCA_OFFSET UNITYSDK_OFFSET(0x1A128BB0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A128140)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A127490)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A128270)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A127360)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A127420)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_PAFHOKGAAGB_OFFSET UNITYSDK_OFFSET(0x1A128ED0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1287F0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A1288D0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A128960)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A128A00)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A128A90)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A128B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVALighterWidgetController_TypeDefinitionIndex = 41436;

	class UIActivityOVALighterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 DNOENDJBMKA = 0x29; // 0x0
		::FPENEKKIACO* _view; // 0x2C8
		::MoleMole::ActivityAvatarWdigetContext* KGDAJCAKDKM; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIActivityOVALighterEntryBtnWidgetController*>* btns; // 0x2D8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* KJMOJHPBLHB; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InvokeEntryBtn(::System::Int32 entryID, ::System::Int32 focusQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_INVOKEENTRYBTN_OFFSET))(this, entryID, focusQuest);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JONMFJDCKCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_JONMFJDCKCH_OFFSET))(this);
		}

		::System::Void LLJCGLNMCCA(::UnityEngine::UI::Extension::UITimeWidget* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_LLJCGLNMCCA_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void HPCKLBDKHFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_HPCKLBDKHFA_OFFSET))(this);
		}

		::System::Void GBGDEMIJPON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_GBGDEMIJPON_OFFSET))(this);
		}

		::System::Void DABHMNJPHCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_DABHMNJPHCE_OFFSET))(this);
		}

		::System::Void PAFHOKGAAGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_PAFHOKGAAGB_OFFSET))(this);
		}

		::System::Void JBCENOBPOIC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_JBCENOBPOIC_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
