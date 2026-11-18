#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DNNJGHIFNCH;
class HCDDIPKLECL;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18FD9990)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FD9820)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x18FD98E0)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD9A00)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FD9A60)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaLevelTabWidgetController_TypeDefinitionIndex = 70102;

	class UINeoGoldenMechaLevelTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetLevel(::HCDDIPKLECL* generalLevel)
		{
			return ((::System::Void(*)(::PVOID, ::HCDDIPKLECL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, generalLevel);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::DNNJGHIFNCH* OGMPOGIHBIK()
		{
			return ((::DNNJGHIFNCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
