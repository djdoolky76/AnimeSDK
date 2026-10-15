#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PredicateTaskListWithFail; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93F060)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93F070)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F030)

namespace RPG::GameCore
{
	class PredicateTaskListWithFail : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
