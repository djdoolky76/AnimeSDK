#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client { class RoadRashGameModifier_FireProjectileEmitter; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FDF00)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FDF10)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FDED0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_FireProjectile_TypeDefinitionIndex = 10288;

	class RoadRashGameAbility_FireProjectile : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::GameCore::FixPoint InitHeight; // 0x20
		::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* LaunchPoints; // 0x28
		::RPG::GameCore::FixPoint HitUltimateEnergy; // 0x30
		::System::String* ProjectilePassiveToggleName; // 0x38
		::System::String* ProjectilePassivePrefabPath; // 0x40
		::RPG::GameCore::FixPoint ProjectilePassiveHitUltimateEnergyAdditive; // 0x48
		::System::String* Lv3ToggleName; // 0x50
		::RPG::GameCore::FixPoint Lv3HitUltimateEnergy; // 0x58
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* Lv3HitSpeedModifier; // 0x60
		::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* FireProjectileModifierConfig; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_FireProjectile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbility_FireProjectile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
