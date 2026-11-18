#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class INKAPHAFHML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABCityTopTabWidgetController_Context; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x18EE36D0)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18EE3660)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE3400)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EE34A0)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18EE3740)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE38C0)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE3920)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EE39C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityTopTabWidgetController_TypeDefinitionIndex = 62459;

	class UIRABCityTopTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIRABCityTopTabWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABCityTopTabWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::INKAPHAFHML* OGMPOGIHBIK()
		{
			return ((::INKAPHAFHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
