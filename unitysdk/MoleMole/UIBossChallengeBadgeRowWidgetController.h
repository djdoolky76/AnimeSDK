#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/POPPOKNJLPA.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ANEKFKPNMHC;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18D363A0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D36100)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET UNITYSDK_OFFSET(0x18D361C0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETMODE_OFFSET UNITYSDK_OFFSET(0x18D36220)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D36410)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D36470)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBadgeRowWidgetController_TypeDefinitionIndex = 40330;

	class UIBossChallengeBadgeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetIsHadal(::System::Boolean isHadal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETISHADAL_OFFSET))(this, isHadal);
		}

		::System::Void SetMode(::POPPOKNJLPA mode)
		{
			return ((::System::Void(*)(::PVOID, ::POPPOKNJLPA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_SETMODE_OFFSET))(this, mode);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::ANEKFKPNMHC* OGMPOGIHBIK()
		{
			return ((::ANEKFKPNMHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
