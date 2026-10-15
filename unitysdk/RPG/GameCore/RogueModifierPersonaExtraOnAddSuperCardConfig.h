#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaExtraOnAddSuperCardConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA191C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA191D0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaExtraOnAddSuperCardConfig_TypeDefinitionIndex = 17865;

	class RogueModifierPersonaExtraOnAddSuperCardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
