#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierEmptyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DDBD0)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DDBE0)
#define RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DDB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEmptyConfig_TypeDefinitionIndex = 17681;

	class RogueModifierEmptyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEmptyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEmptyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREMPTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
