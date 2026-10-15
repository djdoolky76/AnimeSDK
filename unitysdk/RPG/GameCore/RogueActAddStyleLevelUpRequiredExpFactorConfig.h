#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActAddStyleLevelUpRequiredExpFactorConfig; }

#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D190)
#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D1A0)
#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D150)

namespace RPG::GameCore
{
	class RogueActAddStyleLevelUpRequiredExpFactorConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
