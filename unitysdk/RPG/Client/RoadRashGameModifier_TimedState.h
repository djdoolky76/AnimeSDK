#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_TimedState; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D333950)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D333960)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D333920)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_TimedState_TypeDefinitionIndex = 10308;

	class RoadRashGameModifier_TimedState : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_TimedState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_TimedState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_TimedState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_TimedState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
