#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	template <typename T>
	class AdvWaitingTaskBase_1 : public ::GELIALJDFBL
	{
	public:
		T _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::MJKLAEILHPK _TaskExecutor; // 0x0
		::GELIALJDFBL* _ConditionTask; // 0x0
		::System::Boolean _LoopWaiting; // 0x0
		::System::Boolean _EventReceived; // 0x0
	};
}
