#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbility_SlamCast; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32DF40)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D32DF50)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32DF10)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_SlamCast_TypeDefinitionIndex = 10293;

	class RoadRashGameAbility_SlamCast : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireCastTime; // 0x18
		::System::String* LV3ToggleName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
