#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ILCNCODKHGL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_NABPKKNIFHK_OFFSET UNITYSDK_OFFSET(0x189138B0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x189134D0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189132B0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18913540)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x189135E0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18913760)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18913770)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18913810)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRowWidgetController_TypeDefinitionIndex = 76835;

	class UICoopMatchMapRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::ILCNCODKHGL* OGMPOGIHBIK()
		{
			return ((::ILCNCODKHGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void NABPKKNIFHK(::System::Boolean CGPBOKCEGAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_NABPKKNIFHK_OFFSET))(this, CGPBOKCEGAO);
		}

		::System::Void PDKCHDBODJB(::System::Int32 KLJNHMGMDNP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, KLJNHMGMDNP);
		}
	};
}
