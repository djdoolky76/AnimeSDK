#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HJLFBLEMGDE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15D3C830)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D3C5D0)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D3C670)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3C8A0)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D3C900)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D3C9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepInfoDialogSubTabWidgetController_TypeDefinitionIndex = 82046;

	class UIRABBossSweepInfoDialogSubTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HJLFBLEMGDE* OGMPOGIHBIK()
		{
			return ((::HJLFBLEMGDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
