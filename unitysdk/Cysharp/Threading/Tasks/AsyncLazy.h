#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_ASYNCLAZY_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C4B30)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203C4550)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_CTOR_OFFSET UNITYSDK_OFFSET(0x203C44F0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x203C47D0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x203C4770)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x203C4780)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_GET_TASK_OFFSET UNITYSDK_OFFSET(0x203C4720)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_1_OFFSET UNITYSDK_OFFSET(0x203C49D0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_OFFSET UNITYSDK_OFFSET(0x203C4680)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncLazy_TypeDefinitionIndex = 39045;

	class AsyncLazy : public ::System::Object
	{
	public:
		::System::Object* syncLock; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* completionSource; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter awaiter; // 0x20
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* taskFactory; // 0x30
		::System::Boolean initialized; // 0x38
		static ::System::Action_1<::System::Object*>** StaticGet_continuation()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncLazy")->GetStaticField(0x36100);
		}

		::System::Void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTask get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_GET_TASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_GETAWAITER_OFFSET))(this);
		}

		::System::Void EnsureInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZED_OFFSET))(this);
		}

		::System::Void EnsureInitializedCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZEDCORE_OFFSET))(this);
		}

		::System::Void SetCompletionSource(::Cysharp::Threading::Tasks::UniTask_Awaiter a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask_Awaiter))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_OFFSET))(this, a1);
		}

		static ::System::Void SetCompletionSource_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_1_OFFSET))(a1);
		}

	};
}
