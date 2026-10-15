#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureTurntableConfig; }

#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3BB0)
#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3BC0)
#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A43C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureTurntableConfig_TypeDefinitionIndex = 17894;

	class RogueAdventureTurntableConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureTurntableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureTurntableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureTurntableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureTurntableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
