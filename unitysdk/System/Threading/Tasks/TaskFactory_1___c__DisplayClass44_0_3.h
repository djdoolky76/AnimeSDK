#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1___c__DisplayClass44_0_3_TypeDefinitionIndex = 883;

	template <typename T1, typename T2, typename T3>
	class TaskFactory_1___c__DisplayClass44_0_3 : public ::System::Object
	{
	public:
		::System::Func_2<::System::IAsyncResult*, T1>* endFunction; // 0x0
		::System::Action_1<::System::IAsyncResult*>* endAction; // 0x0
		::System::Threading::Tasks::Task_1<T1>* promise; // 0x0
	};
}
