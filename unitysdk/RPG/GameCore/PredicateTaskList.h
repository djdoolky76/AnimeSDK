#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PredicateTaskList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PREDICATETASKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911290)
#define RPG_GAMECORE_PREDICATETASKLIST_GEBHFIJADFO_OFFSET UNITYSDK_OFFSET(0x1D911670)
#define RPG_GAMECORE_PREDICATETASKLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9112A0)
#define RPG_GAMECORE_PREDICATETASKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateTaskList_TypeDefinitionIndex = 23815;

	class PredicateTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Int32 GEBHFIJADFO(::FCOEMCEDLNL* a1)
		{
			return ((::System::Int32(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_GEBHFIJADFO_OFFSET))(a1);
		}

	};
}
