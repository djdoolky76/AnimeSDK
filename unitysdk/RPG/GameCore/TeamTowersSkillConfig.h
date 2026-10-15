#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JNFBANKKLJK;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class TeamTowersSkillConfig; }

#define RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E2A0)
#define RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7E1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersSkillConfig_TypeDefinitionIndex = 21406;

	class TeamTowersSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* OnTrigger; // 0x10
		::JNFBANKKLJK* CompleteCondition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
