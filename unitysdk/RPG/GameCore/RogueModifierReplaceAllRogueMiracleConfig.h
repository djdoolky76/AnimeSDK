#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceAllRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA199A0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA199B0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceAllRogueMiracleConfig_TypeDefinitionIndex = 17754;

	class RogueModifierReplaceAllRogueMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEALLROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
