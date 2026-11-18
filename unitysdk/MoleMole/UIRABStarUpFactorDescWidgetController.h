#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JDAKCDEFMGF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CC0A70)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC0810)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CC08B0)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC0AE0)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC0B40)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CC0BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpFactorDescWidgetController_TypeDefinitionIndex = 66470;

	class UIRABStarUpFactorDescWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JDAKCDEFMGF* OGMPOGIHBIK()
		{
			return ((::JDAKCDEFMGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
