#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActDestroyRogueMiracleThenGetRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9700D0)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9700E0)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleThenGetRogueMiracleConfig_TypeDefinitionIndex = 19617;

	class RogueActDestroyRogueMiracleThenGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
