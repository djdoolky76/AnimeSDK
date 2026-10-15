#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncMethodBuilderCore.h"
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskMethodBuilder_1_TypeDefinitionIndex = 1351;

	template <typename T>
	struct alignas(8) AsyncTaskMethodBuilder_1
	{
		::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState; // 0x0
		::System::Threading::Tasks::Task_1<T>* m_task; // 0x0
		static ::System::Threading::Tasks::Task_1<T>** StaticGet_s_defaultResultTask()
		{
			return (::System::Threading::Tasks::Task_1<T>**)UnitySDK::FromName("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1")->GetStaticField(0x0);
		}

	};
}
