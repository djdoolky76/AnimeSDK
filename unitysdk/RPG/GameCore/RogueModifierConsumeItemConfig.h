#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierConsumeItemConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD9F0)
#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DDA00)
#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConsumeItemConfig_TypeDefinitionIndex = 17979;

	class RogueModifierConsumeItemConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierConsumeItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierConsumeItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierConsumeItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierConsumeItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
