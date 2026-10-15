#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumberSetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterPhase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABC410)
#define RPG_GAMECORE_SETMONSTERPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABC460)
#define RPG_GAMECORE_SETMONSTERPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABC3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterPhase_TypeDefinitionIndex = 22730;

	class SetMonsterPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NumberSetMode SetMode; // 0x20
		::System::UInt32 PhaseNum; // 0x24
		::System::Boolean ApplyOverrideConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
