#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetSelectBuffRandomEnhanceConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2C980)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC2C990)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC2C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffRandomEnhanceConfig_TypeDefinitionIndex = 18141;

	class RogueModifierSetSelectBuffRandomEnhanceConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
