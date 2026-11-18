#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class IBPCDEKGHCJ;
namespace MoleMole { class UIActivityCombatPausePrepareWidgetController; }
namespace MoleMole { class UILineupSelectContext; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188436E0)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18843EE0)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x188436F0)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x188439E0)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__3_OFFSET UNITYSDK_OFFSET(0x18843E20)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__5_OFFSET UNITYSDK_OFFSET(0x18843840)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCombatPausePrepareWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 72933;

	class UIActivityCombatPausePrepareWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::IBPCDEKGHCJ* activityBattleQuestCfg; // 0x10
		::System::Action* __9__5; // 0x18
		::MoleMole::UIActivityCombatPausePrepareWidgetController* __4__this; // 0x20
		::MoleMole::UILineupSelectContext* context; // 0x28
		::System::Int32 _activityID; // 0x30
		::System::Int32 _questID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenTeamPage_b__1(::ALDOKCCIFNB* beginData)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__1_OFFSET))(this, beginData);
		}

		::System::Void _OpenTeamPage_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__5_OFFSET))(this);
		}

		::System::Void _OpenTeamPage_b__2(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__2_OFFSET))(this, data);
		}

		::System::Boolean _OpenTeamPage_b__3(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__3_OFFSET))(this, i);
		}

		::System::Void _OpenTeamPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__DISPLAYCLASS11_0__OPENTEAMPAGE_B__0_OFFSET))(this);
		}
	};
}
