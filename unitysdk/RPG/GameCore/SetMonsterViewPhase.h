#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/RPG/GameCore/NumberSetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterViewPhase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERVIEWPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABCC10)
#define RPG_GAMECORE_SETMONSTERVIEWPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABCC50)
#define RPG_GAMECORE_SETMONSTERVIEWPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABCBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterViewPhase_TypeDefinitionIndex = 22731;

	class SetMonsterViewPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::MonsterViewPhaseType PhaseType; // 0x20
		::RPG::GameCore::NumberSetMode SetMode; // 0x24
		::System::UInt32 PhaseNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterViewPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterViewPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterViewPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterViewPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
