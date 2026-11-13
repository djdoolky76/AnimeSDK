#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyIneritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BattleEventLifeBinding.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServantConfig; }

#define RPG_GAMECORE_SERVANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F851750)
#define RPG_GAMECORE_SERVANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F851870)
#define RPG_GAMECORE_SERVANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F8513E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantConfig_TypeDefinitionIndex = 16694;

	class ServantConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x238
		::RPG::GameCore::TeamLocationType LocationType; // 0x23C
		::System::Boolean AddToTeamFormation; // 0x240
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AttackDamageType DamageType; // 0x244
		::System::Boolean EffectAttachToSummonerTimeline; // 0x248
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AbilityPropertyIneritType PropertyInherit; // 0x24C
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* SyncPropertyExceptList; // 0x250
		::RPG::MVector3 ViewModeServantFollowOffset; // 0x258
		::System::Single ViewModeServantFollowYawAngle; // 0x264
		::System::Boolean IsPlayerControlled; // 0x268
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
