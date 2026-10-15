#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierDisableBattleBuffSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B01B0)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B01C0)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B0170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDisableBattleBuffSelectConfig_TypeDefinitionIndex = 17955;

	class RogueModifierDisableBattleBuffSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDisableBattleBuffSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEBATTLEBUFFSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
