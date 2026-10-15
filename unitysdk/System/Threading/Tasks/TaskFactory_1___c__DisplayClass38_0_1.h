#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Threading::Tasks { class Task; }

namespace System::Threading::Tasks
{
	template <typename T>
	class TaskFactory_1___c__DisplayClass38_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<::System::IAsyncResult*, T>* endFunction; // 0x0
		::System::Action* endAction; // 0x0
		::System::Threading::Tasks::Task* promise; // 0x0
	};
}
