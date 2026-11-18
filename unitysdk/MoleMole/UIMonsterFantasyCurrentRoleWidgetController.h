#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DLPEBGKKGIE;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CA6930)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CA66C0)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET UNITYSDK_OFFSET(0x14CA6F60)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14CA69A0)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA70E0)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CA7140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyCurrentRoleWidgetController_TypeDefinitionIndex = 81086;

	class UIMonsterFantasyCurrentRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::RectTransform* NGFKELJIPCD; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUnitTurnStart(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET))(this, unit);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::DLPEBGKKGIE* OGMPOGIHBIK()
		{
			return ((::DLPEBGKKGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
