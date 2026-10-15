#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitForWithTaskList; }

#define RPG_GAMECORE_WAITFORWITHTASKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC99130)
#define RPG_GAMECORE_WAITFORWITHTASKLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC99140)
#define RPG_GAMECORE_WAITFORWITHTASKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC99100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForWithTaskList_TypeDefinitionIndex = 23794;

	class WaitForWithTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskListClientOnly; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForWithTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForWithTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForWithTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForWithTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
