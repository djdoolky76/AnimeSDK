#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyAnyGainCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9DE0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9DF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAnyGainCoinConfig_TypeDefinitionIndex = 17964;

	class RogueModifierModifyAnyGainCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
