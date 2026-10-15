#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsThisAttackTriggerBattle; }

#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D527870)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D527880)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D527830)

namespace RPG::GameCore
{
	class ByIsThisAttackTriggerBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsThisAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsThisAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsThisAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsThisAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
