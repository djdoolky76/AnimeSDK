#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelGroupEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B3880)
#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7B3890)
#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7B3830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGroupEntitiesSelectorConfig_TypeDefinitionIndex = 16069;

	class ChimeraDuelGroupEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::Boolean ExcludeCaster; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
