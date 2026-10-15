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

#define RPG_GAMECORE_SERVANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8D2D0)
#define RPG_GAMECORE_SERVANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8D3F0)
#define RPG_GAMECORE_SERVANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8CF60)

namespace RPG::GameCore
{
	class ServantConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x220
		::RPG::GameCore::TeamLocationType LocationType; // 0x224
		::System::Boolean AddToTeamFormation; // 0x228
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AttackDamageType DamageType; // 0x22C
		::System::Boolean EffectAttachToSummonerTimeline; // 0x230
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AbilityPropertyIneritType PropertyInherit; // 0x234
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* SyncPropertyExceptList; // 0x238
		::RPG::MVector3 ViewModeServantFollowOffset; // 0x240
		::System::Single ViewModeServantFollowYawAngle; // 0x24C
		::System::Boolean IsPlayerControlled; // 0x250
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
