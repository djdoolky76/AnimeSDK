#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OMMPDJBBHNF;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17697B70)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17697BE0)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_SETTABTYPE_OFFSET UNITYSDK_OFFSET(0x176979F0)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17697CA0)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17697D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTabBtnsTipsWidgetController_TypeDefinitionIndex = 56950;

	class UIHandBookTabBtnsTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTabType(::MoleMole::UIHandBookPopWindowController_EHandBookTab tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_SETTABTYPE_OFFSET))(this, tabType);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::OMMPDJBBHNF* OGMPOGIHBIK()
		{
			return ((::OMMPDJBBHNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
