#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ELCLKPBILMM;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x196622A0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19662060)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_SETMEDALID_OFFSET UNITYSDK_OFFSET(0x19662120)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19662310)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19662370)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBadgeWidgetController_TypeDefinitionIndex = 81814;

	class UIBossChallengeBadgeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetMedalID(::System::Int32 medalID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_SETMEDALID_OFFSET))(this, medalID);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::ELCLKPBILMM* OGMPOGIHBIK()
		{
			return ((::ELCLKPBILMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
