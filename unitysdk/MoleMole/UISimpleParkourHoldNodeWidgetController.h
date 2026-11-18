#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISimpleParkourNodeWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HHJOHNGOLML;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_MHKOGHIPJIB_OFFSET UNITYSDK_OFFSET(0x15C6B550)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C6B440)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6B4E0)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C6B540)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourHoldNodeWidgetController_TypeDefinitionIndex = 43180;

	class UISimpleParkourHoldNodeWidgetController : public ::MoleMole::UISimpleParkourNodeWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::HHJOHNGOLML* MHKOGHIPJIB()
		{
			return ((::HHJOHNGOLML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_MHKOGHIPJIB_OFFSET))(this);
		}
	};
}
