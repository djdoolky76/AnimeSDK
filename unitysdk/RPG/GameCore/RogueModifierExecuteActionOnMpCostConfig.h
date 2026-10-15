#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnMpCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E8B40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E8B50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E8B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMpCostConfig_TypeDefinitionIndex = 17688;

	class RogueModifierExecuteActionOnMpCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
