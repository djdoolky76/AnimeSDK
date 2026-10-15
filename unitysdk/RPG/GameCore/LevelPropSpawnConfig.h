#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropSpawnConfig; }

#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CB3F0)
#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7CB400)
#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CB080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropSpawnConfig_TypeDefinitionIndex = 17257;

	class LevelPropSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
