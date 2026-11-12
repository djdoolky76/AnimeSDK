#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeRogueMiracleToRogueCoinConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE6870)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE6880)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE6830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueCoinConfig_TypeDefinitionIndex = 19945;

	class RogueActChangeRogueMiracleToRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
