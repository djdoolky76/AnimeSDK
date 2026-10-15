#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelDiceCombatNPCConfig; }

#define RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8EB0)
#define RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E8D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelDiceCombatNPCConfig_TypeDefinitionIndex = 17393;

	class GameLevelDiceCombatNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 DiceStageID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelDiceCombatNPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelDiceCombatNPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
