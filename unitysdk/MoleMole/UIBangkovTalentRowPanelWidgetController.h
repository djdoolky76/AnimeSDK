#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NNJOPJPMAEA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17FF8EC0)
#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17FF8C60)
#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17FF8D00)
#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF8F30)
#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17FF8F90)
#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17FF9030)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentRowPanelWidgetController_TypeDefinitionIndex = 91037;

	class UIBangkovTalentRowPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::NNJOPJPMAEA* OGMPOGIHBIK()
		{
			return ((::NNJOPJPMAEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
