#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnOpenChestConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077EF60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077EF70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnOpenChestConfig_TypeDefinitionIndex = 17862;

	class RogueModifierExecuteActionOnOpenChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
