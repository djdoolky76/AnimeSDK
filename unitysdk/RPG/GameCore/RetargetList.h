#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RetargetList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RETARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D998B70)
#define RPG_GAMECORE_RETARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D998BD0)
#define RPG_GAMECORE_RETARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D998AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetargetList_TypeDefinitionIndex = 22909;

	class RetargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Boolean ByRandom; // 0x28
		::System::Boolean IncludeLimbo; // 0x29
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
