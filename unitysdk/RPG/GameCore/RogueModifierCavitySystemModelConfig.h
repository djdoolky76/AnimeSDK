#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierCavitySystemModelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD740)
#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD750)
#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierCavitySystemModelConfig_TypeDefinitionIndex = 17753;

	class RogueModifierCavitySystemModelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierCavitySystemModelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierCavitySystemModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierCavitySystemModelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierCavitySystemModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
