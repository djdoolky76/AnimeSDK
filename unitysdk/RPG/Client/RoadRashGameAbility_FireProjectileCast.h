#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbility_FireProjectileCast; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FE460)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FE470)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FE430)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_FireProjectileCast_TypeDefinitionIndex = 10290;

	class RoadRashGameAbility_FireProjectileCast : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireCastTime; // 0x18
		::RPG::GameCore::FixPoint Lv2RequireCastTime; // 0x20
		::System::String* LV2ToggleName; // 0x28
		::RPG::GameCore::FixPoint Lv2MaxTargetCount; // 0x30
		::System::String* CurrentLevelAttributeName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
