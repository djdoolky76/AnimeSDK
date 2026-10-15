#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }

#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1600)
#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B1610)
#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B1400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarBaseClickConfig_TypeDefinitionIndex = 23652;

	class MonsterEnergyBarBaseClickConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
