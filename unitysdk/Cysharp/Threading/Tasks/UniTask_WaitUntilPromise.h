#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF14A40)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FF14B80)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FF14DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FF14950)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF14F10)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FF14EB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FF14D00)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FF14E40)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF14960)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF14A30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilPromise_TypeDefinitionIndex = 31317;

	class UniTask_WaitUntilPromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilPromise_TypeDefinitionIndex)->GetStaticField(0x282A0);
		}
		::System::Func_1<::System::Boolean>* predicate; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise* nextNode; // 0x20
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_CREATE_OFFSET))(predicate, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
