#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureWolfGunConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3BD0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3BE0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A4400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunConfig_TypeDefinitionIndex = 17902;

	class RogueAdventureWolfGunConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
