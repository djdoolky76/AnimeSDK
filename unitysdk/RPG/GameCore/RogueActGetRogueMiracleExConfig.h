#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueMiracleExConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E4C0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E4D0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleExConfig_TypeDefinitionIndex = 19604;

	class RogueActGetRogueMiracleExConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
