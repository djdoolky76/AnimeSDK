#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HCLKNFIEOGC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1715B9A0)
#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1715B630)
#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1715B6F0)
#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1715BA10)
#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1715BA70)
#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1715BB10)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMain_MainWidgetController_TypeDefinitionIndex = 54894;

	class UISocialCircleMain_MainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HCLKNFIEOGC* OGMPOGIHBIK()
		{
			return ((::HCLKNFIEOGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
