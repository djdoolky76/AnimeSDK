#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HGGJMHLKPCP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13BCC680)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13BCC3B0)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13BCC470)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCC4E0)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13BCC540)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13BCC5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDLocalPlayerWidgetController_TypeDefinitionIndex = 52801;

	class UIUrbanMapHUDLocalPlayerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HGGJMHLKPCP* OGMPOGIHBIK()
		{
			return ((::HGGJMHLKPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
