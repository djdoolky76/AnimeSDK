#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyQueryFactorConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A2470)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A2480)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A2430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyQueryFactorConfig_TypeDefinitionIndex = 18128;

	class RogueModifierModifyQueryFactorConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
