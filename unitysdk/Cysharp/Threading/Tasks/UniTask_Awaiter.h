#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9AD310)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD230)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD3F0)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_SOURCEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD530)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD520)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_Awaiter_TypeDefinitionIndex = 31330;

	struct alignas(4) UniTask_Awaiter
	{
		::Cysharp::Threading::Tasks::UniTask task; // 0x10

		/*
		::System::Void _ctor(::Cysharp::Threading::Tasks::UniTask& task)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER__CTOR_OFFSET))(this, task);
		}
		*/

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void SourceOnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_SOURCEONCOMPLETED_OFFSET))(this, continuation, state);
		}
	};
}
