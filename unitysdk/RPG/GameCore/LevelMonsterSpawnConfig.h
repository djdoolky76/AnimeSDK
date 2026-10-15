#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelMonsterSpawnConfig; }

#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D787280)
#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D787290)
#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D787250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMonsterSpawnConfig_TypeDefinitionIndex = 17248;

	class LevelMonsterSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelMonsterSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelMonsterSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
