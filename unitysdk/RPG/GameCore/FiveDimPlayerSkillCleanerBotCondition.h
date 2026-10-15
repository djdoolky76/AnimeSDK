#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerSkillCleanerBotCondition; }

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D26D0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D26E0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D2660)

namespace RPG::GameCore
{
	class FiveDimPlayerSkillCleanerBotCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
