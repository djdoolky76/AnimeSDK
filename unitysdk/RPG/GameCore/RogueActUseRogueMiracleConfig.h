#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActUseRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2740)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A2750)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActUseRogueMiracleConfig_TypeDefinitionIndex = 19646;

	class RogueActUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
