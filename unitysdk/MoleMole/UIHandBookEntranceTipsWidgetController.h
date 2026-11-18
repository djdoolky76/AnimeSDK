#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EDFHNBHEDNC;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1A3FB550)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3FB390)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FB450)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3FB4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEntranceTipsWidgetController_TypeDefinitionIndex = 73967;

	class UIHandBookEntranceTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::EDFHNBHEDNC* OGMPOGIHBIK()
		{
			return ((::EDFHNBHEDNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
