#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetThenDestroyRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E580)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E590)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetThenDestroyRogueMiracleConfig_TypeDefinitionIndex = 19672;

	class RogueActGetThenDestroyRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
