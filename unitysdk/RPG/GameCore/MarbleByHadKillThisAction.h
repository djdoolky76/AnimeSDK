#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByHadKillThisAction; }

#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D839FB0)
#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D839FC0)
#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D839F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByHadKillThisAction_TypeDefinitionIndex = 16897;

	class MarbleByHadKillThisAction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByHadKillThisAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByHadKillThisAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByHadKillThisAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByHadKillThisAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
