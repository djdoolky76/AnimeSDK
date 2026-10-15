#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelWaitSummonUnitQueueCountValueGetter; }

#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC6A0)
#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AC6B0)
#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AC650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitSummonUnitQueueCountValueGetter_TypeDefinitionIndex = 16002;

	class ChimeraDuelWaitSummonUnitQueueCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
