#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGIJACLPPIN.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HDGDGHMDJLK;
class MonoUITableScrollV2;
class PNGMINLMGAN;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickTechRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_AMLBHHOFDCF_OFFSET UNITYSDK_OFFSET(0x17EA4260)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET UNITYSDK_OFFSET(0x17EA4520)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x17EA4650)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_NIFONGCCNJL_OFFSET UNITYSDK_OFFSET(0x17EA4DD0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17EA26D0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17EA2760)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17EA41E0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_PDFFFEMDCGB_OFFSET UNITYSDK_OFFSET(0x17EA4E80)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17EA2880)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA4AC0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17EA4C10)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17EA4CA0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17EA4D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseWidgetController_TypeDefinitionIndex = 52769;

	class UIActivityTrickPauseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PNGMINLMGAN* _view; // 0x2C8
		::HDGDGHMDJLK* OJHILFOMBED; // 0x2D0
		::System::Int32 KCJHDEGPBNI; // 0x2D8
		::GGIJACLPPIN CCKNJFJKLOG; // 0x2DC
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* KFIOIKPBCIF; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickTechRowWidgetController*>* LGMLJKHLILI; // 0x2E8
		::MonoUITableScrollV2* IGCMKLLEDIO; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* GetBindModules()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AMLBHHOFDCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_AMLBHHOFDCF_OFFSET))(this);
		}

		::System::Void NIFONGCCNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_NIFONGCCNJL_OFFSET))(this);
		}

		::System::Void PDFFFEMDCGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_PDFFFEMDCGB_OFFSET))(this);
		}
	};
}
