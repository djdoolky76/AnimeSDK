#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"

class EOOEEEENINA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_AAEJMMHLECJ_OFFSET UNITYSDK_OFFSET(0x19F97070)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_NENHHBIBFHN_OFFSET UNITYSDK_OFFSET(0x19F97220)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F96CE0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F973D0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F96C10)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F96C70)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x19F96F50)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET UNITYSDK_OFFSET(0x19F96D70)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET UNITYSDK_OFFSET(0x19F8D360)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F97450)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F97530)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F975C0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F97650)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F976E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySelectLevelDoubleIconWidgetController_TypeDefinitionIndex = 69913;

	class UIActivitySelectLevelDoubleIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EOOEEEENINA* _view; // 0x2C8
		::UnityEngine::UI::GridLayoutGroup_Corner LOBEDJKMLBL; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* JJKFFBJDBDD; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetID(::System::Collections::Generic::List_1<::System::Int32>* ids, ::UnityEngine::UI::GridLayoutGroup_Corner StartCorner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET))(this, ids, StartCorner);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* click)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, click);
		}

		::System::Void SetIsPartnerView(::System::Boolean isPartner, ::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET))(this, isPartner, title, teamTag);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void AAEJMMHLECJ(::System::String* ONOAGAPJNCG, ::System::String* FOFOFPOMEOA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_AAEJMMHLECJ_OFFSET))(this, ONOAGAPJNCG, FOFOFPOMEOA);
		}

		::System::Void NENHHBIBFHN(::System::String* ONOAGAPJNCG, ::System::String* FOFOFPOMEOA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_NENHHBIBFHN_OFFSET))(this, ONOAGAPJNCG, FOFOFPOMEOA);
		}
	};
}
