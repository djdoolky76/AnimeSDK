#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAddExtraBattleMonster; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D360540)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D360550)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D360510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddExtraBattleMonster_TypeDefinitionIndex = 21811;

	class AdvAddExtraBattleMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
