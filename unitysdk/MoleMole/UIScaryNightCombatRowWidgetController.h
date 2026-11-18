#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class APKEHDDPGOD;
class JNDANIBHNNF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18256B80)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x182568A0)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18256940)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_SETLEVELDATA_OFFSET UNITYSDK_OFFSET(0x18256BF0)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18256CA0)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18256D00)
#define MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18256DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCombatRowWidgetController_TypeDefinitionIndex = 51764;

	class UIScaryNightCombatRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetLevelData(::APKEHDDPGOD* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::APKEHDDPGOD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_SETLEVELDATA_OFFSET))(this, levelData);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JNDANIBHNNF* OGMPOGIHBIK()
		{
			return ((::JNDANIBHNNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
