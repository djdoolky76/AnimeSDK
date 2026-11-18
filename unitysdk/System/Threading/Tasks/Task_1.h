#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Threading::Tasks { template <typename T> class TaskFactory_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_1_TypeDefinitionIndex = 873;

	template <typename T>
	class Task_1 : public ::System::Threading::Tasks::Task
	{
	public:
		static ::System::Threading::Tasks::TaskFactory_1<T>** StaticGet_s_Factory()
		{
			return (::System::Threading::Tasks::TaskFactory_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Task_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<T>*>** StaticGet_TaskWhenAnyCast()
		{
			return (::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Task_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T m_result; // 0x0
	};
}
