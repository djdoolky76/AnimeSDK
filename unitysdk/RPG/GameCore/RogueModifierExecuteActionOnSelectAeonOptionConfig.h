#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnSelectAeonOptionConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16B60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16B70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnSelectAeonOptionConfig_TypeDefinitionIndex = 17682;

	class RogueModifierExecuteActionOnSelectAeonOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
