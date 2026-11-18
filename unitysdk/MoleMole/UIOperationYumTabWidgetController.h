#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class KBDCKLAOONP;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_AANDPPEGOJA_OFFSET UNITYSDK_OFFSET(0x193BD6F0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x193BCEC0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193BD010)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193BD0A0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193BCEE0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x193BD180)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETINDEXANDPERIODID_OFFSET UNITYSDK_OFFSET(0x193BD120)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x193BD410)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193BD4E0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193BD540)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193BD5D0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193BD660)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumTabWidgetController_TypeDefinitionIndex = 72260;

	class UIOperationYumTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KBDCKLAOONP* _view; // 0x2C8
		::System::Action_1<::System::Int32>* OnSelect; // 0x2D0
		::System::Int32 LBDOGALPMPF; // 0x2D8
		::System::Int32 MLNKCNJEOMI; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIndexAndPeriodID(::System::Int32 index, ::System::Int32 periodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETINDEXANDPERIODID_OFFSET))(this, index, periodID);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void AANDPPEGOJA(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_AANDPPEGOJA_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
