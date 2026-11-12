#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelAllyTeamFieldSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB690)
#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7AB6A0)
#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7AB600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAllyTeamFieldSelectorConfig_TypeDefinitionIndex = 16097;

	class ChimeraDuelAllyTeamFieldSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
