#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelSummonedChimeraSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB3E0)
#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AB3F0)
#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AB390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSummonedChimeraSelectorConfig_TypeDefinitionIndex = 15910;

	class ChimeraDuelSummonedChimeraSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
