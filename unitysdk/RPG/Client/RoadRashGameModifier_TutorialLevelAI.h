#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_TutorialLevelAI; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D306010)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D306020)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D305FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_TutorialLevelAI_TypeDefinitionIndex = 10314;

	class RoadRashGameModifier_TutorialLevelAI : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxSpeedModifierPriority; // 0x18
		::RPG::GameCore::FixPoint FollowingDistance; // 0x20
		::RPG::GameCore::FixPoint LeadingDistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
