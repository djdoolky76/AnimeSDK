#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F144AA0)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F149640)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F149400)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F149650)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F1498B0)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F149780)

namespace Cysharp::Threading::Tasks
{
	class UniTask_IsCanceledSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GetResult(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

	};
}
