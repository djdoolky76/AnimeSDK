#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModiferDecreaseDoorNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD130)
#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD140)
#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD0F0)

namespace RPG::GameCore
{
	class RogueModiferDecreaseDoorNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
