#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DAGJADOGKFB;
class GEBJALKJGGJ;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1675D750)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675D5E0)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_SETGENERALGROUP_OFFSET UNITYSDK_OFFSET(0x1675D6A0)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1675D7C0)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675D820)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaGroupTabWidgetController_TypeDefinitionIndex = 86984;

	class UINeoGoldenMechaGroupTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetGeneralGroup(::DAGJADOGKFB* group)
		{
			return ((::System::Void(*)(::PVOID, ::DAGJADOGKFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_SETGENERALGROUP_OFFSET))(this, group);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::GEBJALKJGGJ* OGMPOGIHBIK()
		{
			return ((::GEBJALKJGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
