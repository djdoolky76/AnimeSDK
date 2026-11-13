#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerFightFestBattleInMission; }

#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32FEE0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E32FEF0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E32FE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestBattleInMission_TypeDefinitionIndex = 22110;

	class TriggerFightFestBattleInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
