#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class SwitchTeamInBattleActivitySubSystem_EndReportData; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x198D5280)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x198D51A0)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x198D5110)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x198D4E40)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_SETBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x198D4EB0)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x198D53B0)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x198D5460)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleActivitySubSystem_TypeDefinitionIndex = 71385;

	class SwitchTeamInBattleActivitySubSystem
	{
	public:
		// static const ::System::String* FINAL_ACTIVITY_SCORE; // 0x0
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0x10
		::MoleMole::SwitchTeamInBattleActivitySubSystem_EndReportData* reportData; // 0x18
		::System::String* StrBuffProName; // 0x20
		::System::String* StrBuffLevelName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetBuffLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_SETBUFFLEVEL_OFFSET))(this);
		}

		::System::Void InitSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void DisposeSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Boolean CanSwitchTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_CANSWITCHTEAM_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
