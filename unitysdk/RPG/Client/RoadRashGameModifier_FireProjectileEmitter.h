#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_FireProjectileEmitter; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D330360)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D330370)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32BED0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_FireProjectileEmitter_TypeDefinitionIndex = 10289;

	class RoadRashGameModifier_FireProjectileEmitter : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint FireInterval; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
