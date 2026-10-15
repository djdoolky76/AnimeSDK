#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActDestroyRogueMiracleByIDConfig; }

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970010)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970020)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleByIDConfig_TypeDefinitionIndex = 19647;

	class RogueActDestroyRogueMiracleByIDConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyRogueMiracleByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLEBYIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
