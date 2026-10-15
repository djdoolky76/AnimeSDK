#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskFactory; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_1_TypeDefinitionIndex = 889;

	template <typename T>
	class Task_1 : public ::System::Threading::Tasks::Task
	{
	public:
		T m_result; // 0x0
		static ::System::Threading::Tasks::TaskFactory** StaticGet_s_Factory()
		{
			return (::System::Threading::Tasks::TaskFactory**)UnitySDK::FromName("System.Threading.Tasks", "Task`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Threading::Tasks::Task*, ::System::Threading::Tasks::Task*>** StaticGet_TaskWhenAnyCast()
		{
			return (::System::Func_2<::System::Threading::Tasks::Task*, ::System::Threading::Tasks::Task*>**)UnitySDK::FromName("System.Threading.Tasks", "Task`1")->GetStaticField(0x0);
		}

	};
}
