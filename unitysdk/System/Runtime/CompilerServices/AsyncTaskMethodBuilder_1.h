#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncMethodBuilderCore.h"
namespace System::Threading::Tasks { class Task; }

namespace System::Runtime::CompilerServices
{
	template <typename T>
	struct alignas(8) AsyncTaskMethodBuilder_1
	{
		::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState; // 0x0
		::System::Threading::Tasks::Task* m_task; // 0x0
		static ::System::Threading::Tasks::Task** StaticGet_s_defaultResultTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1")->GetStaticField(0x0);
		}

	};
}
