#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F120F90)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F120F00)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F120DD0)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F120DE0)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F120E90)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_TRYGETRESULT_1_OFFSET UNITYSDK_OFFSET(0x1F120F10)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F120EB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int MoveNextSource_TypeDefinitionIndex = 38174;

	class MoveNextSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> completionSource; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CTOR_OFFSET))(this);
		}

		::System::Boolean GetResult(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Boolean TryGetResult_1(::Cysharp::Threading::Tasks::UniTask_Awaiter a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask_Awaiter))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_TRYGETRESULT_1_OFFSET))(this, a1);
		}

	};
}
