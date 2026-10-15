#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureCaptureMonsterConfig; }

#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3920)
#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3930)
#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A38E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureCaptureMonsterConfig_TypeDefinitionIndex = 17893;

	class RogueAdventureCaptureMonsterConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
