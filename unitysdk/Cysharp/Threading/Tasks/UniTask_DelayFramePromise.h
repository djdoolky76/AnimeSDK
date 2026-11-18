#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF54970)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FF54AF0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FF54C60)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FF54880)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF54DB0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FF54D90)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FF54BE0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FF54D20)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF54890)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF54960)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayFramePromise_TypeDefinitionIndex = 31304;

	class UniTask_DelayFramePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayFramePromise_TypeDefinitionIndex)->GetStaticField(0x28390);
		}
		::Cysharp::Threading::Tasks::UniTask_DelayFramePromise* nextNode; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x18
		::System::Byte _padding0[0x18];
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::System::Int32 delayFrameCount; // 0x40
		::System::Int32 currentFrameCount; // 0x44
		::System::Int32 initialFrame; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Int32 delayFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_CREATE_OFFSET))(delayFrameCount, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
