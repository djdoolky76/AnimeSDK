#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/BattlePerformanceCondition.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPerformanceCondition; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPERFORMANCECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9CD30)
#define RPG_GAMECORE_WAITPERFORMANCECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9CD70)
#define RPG_GAMECORE_WAITPERFORMANCECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9CCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPerformanceCondition_TypeDefinitionIndex = 23377;

	class WaitPerformanceCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattlePerformanceCondition ConditionType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ActiveCustomString; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* SkillName; // 0x38
		::System::String* InsertAbilityName; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x48
		::System::Boolean TurnBeginIgnoreTargetType; // 0x50
		::System::Boolean Repeat; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPerformanceCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPerformanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPerformanceCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPerformanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
