#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerFightFestLineupInMission; }

#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC53040)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC53050)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC53010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestLineupInMission_TypeDefinitionIndex = 21720;

	class TriggerFightFestLineupInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaceID; // 0x18
		::System::UInt32 ScoreRaceSpecialInviteEventID; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
