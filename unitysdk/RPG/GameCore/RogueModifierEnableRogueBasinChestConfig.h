#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierEnableRogueBasinChestConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA153C0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA153D0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableRogueBasinChestConfig_TypeDefinitionIndex = 17781;

	class RogueModifierEnableRogueBasinChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
