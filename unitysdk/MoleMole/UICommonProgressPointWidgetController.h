#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ELJFBAHNPOJ;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x16EBB0F0)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EBAF30)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBAFF0)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EBB050)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonProgressPointWidgetController_TypeDefinitionIndex = 67996;

	class UICommonProgressPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::ELJFBAHNPOJ* OGMPOGIHBIK()
		{
			return ((::ELJFBAHNPOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
