#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyReviveAvatarCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA186E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA186F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA186A0)

namespace RPG::GameCore
{
	class RogueModifierModifyReviveAvatarCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
