#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FEBF9D0)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FEBFA30)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FEBFA50)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FEBFA40)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBF9C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledResultSource_TypeDefinitionIndex = 31315;

	class UniTask_CanceledResultSource : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10

		::System::Void _ctor(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE__CTOR_OFFSET))(this, cancellationToken);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}
	};
}
