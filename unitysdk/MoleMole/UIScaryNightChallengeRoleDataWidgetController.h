#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class MEPLAFABGGF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x188939F0)
#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18893790)
#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18893830)
#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18893A60)
#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18893AC0)
#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18893B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightChallengeRoleDataWidgetController_TypeDefinitionIndex = 52431;

	class UIScaryNightChallengeRoleDataWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::MEPLAFABGGF* OGMPOGIHBIK()
		{
			return ((::MEPLAFABGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
