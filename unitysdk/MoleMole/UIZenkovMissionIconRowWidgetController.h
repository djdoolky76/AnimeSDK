#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EGOONMBIEDO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170D4080)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170D3D60)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170D3E00)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x170D3E50)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D40F0)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170D4150)
#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170D41F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionIconRowWidgetController_TypeDefinitionIndex = 48296;

	class UIZenkovMissionIconRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetContext(::MoleMole::UIControllerContextBase* newContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, newContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::EGOONMBIEDO* OGMPOGIHBIK()
		{
			return ((::EGOONMBIEDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
