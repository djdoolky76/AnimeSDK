#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IMLOHNPGHIN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_FINISHAPPEARANIMATIONSFORREOPEN_OFFSET UNITYSDK_OFFSET(0x164F40B0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x164F4040)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164F3DE0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164F3E80)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164F4270)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164F42D0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164F4370)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffWidgetController_TypeDefinitionIndex = 63548;

	class UIZenkovGemDebuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void FinishAppearAnimationsForReopen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_FINISHAPPEARANIMATIONSFORREOPEN_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::IMLOHNPGHIN* OGMPOGIHBIK()
		{
			return ((::IMLOHNPGHIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
