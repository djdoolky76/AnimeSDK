#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsThisAttackTriggerBattle; }

#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9E00)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F9E10)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F9DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsThisAttackTriggerBattle_TypeDefinitionIndex = 20785;

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
