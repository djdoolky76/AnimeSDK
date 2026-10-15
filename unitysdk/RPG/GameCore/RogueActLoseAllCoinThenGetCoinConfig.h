#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActLoseAllCoinThenGetCoinConfig; }

#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970DA0)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970DB0)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLoseAllCoinThenGetCoinConfig_TypeDefinitionIndex = 19623;

	class RogueActLoseAllCoinThenGetCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
