#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAI; }
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIConfig; }
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIGlobalParams; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D302A20)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D302A30)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3029F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_MatchLevelAI_TypeDefinitionIndex = 10318;

	class RoadRashGameModifier_MatchLevelAI : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxSpeedModifierPriority; // 0x18
		::Il2CppArray<::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig*>* AIConfigs; // 0x20
		::RPG::Client::RoadRashGameModifier_MatchLevelAIGlobalParams* GlobalParams; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
