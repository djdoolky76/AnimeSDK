#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D430)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D440)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig_TypeDefinitionIndex = 19616;

	class RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
