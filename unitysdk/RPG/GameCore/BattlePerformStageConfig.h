#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformActorInit; }
namespace RPG::GameCore { class BattlePerformStageConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4651F0)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_EKBGBBACMFL_OFFSET UNITYSDK_OFFSET(0x1D465200)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_LKAIBBCCKHB_OFFSET UNITYSDK_OFFSET(0x1D465300)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformStageConfig_TypeDefinitionIndex = 18145;

	class BattlePerformStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* GraphEmoAvatarIDs; // 0x10
		::Il2CppArray<::System::UInt32>* GraphEmoAvatarServantIDs; // 0x18
		::Il2CppArray<::System::UInt32>* GraphEmoMonsterIDs; // 0x20
		::Il2CppArray<::RPG::GameCore::BattlePerformActorInit*>* ActorInitList; // 0x28
		// static const ::System::String* BATTLE_PERFORM_CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BattlePerformStageConfig* EKBGBBACMFL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattlePerformStageConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_EKBGBBACMFL_OFFSET))(a1);
		}

		::RPG::GameCore::BattlePerformActorInit* LKAIBBCCKHB(::System::String* a1)
		{
			return ((::RPG::GameCore::BattlePerformActorInit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_LKAIBBCCKHB_OFFSET))(this, a1);
		}

	};
}
