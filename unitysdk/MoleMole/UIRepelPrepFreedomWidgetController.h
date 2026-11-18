#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FLOMKKHDOFB;
class LGOJHPGCJDP;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CC49F0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC47E0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET UNITYSDK_OFFSET(0x14CC48A0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC48F0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC4950)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepFreedomWidgetController_TypeDefinitionIndex = 45030;

	class UIRepelPrepFreedomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetFreedomData(::FLOMKKHDOFB* freedomData)
		{
			return ((::System::Void(*)(::PVOID, ::FLOMKKHDOFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET))(this, freedomData);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::LGOJHPGCJDP* OGMPOGIHBIK()
		{
			return ((::LGOJHPGCJDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
