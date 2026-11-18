#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1FE8D900)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_2_OFFSET UNITYSDK_OFFSET(0x1FE8E050)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_3_OFFSET UNITYSDK_OFFSET(0x1FE8E0B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET UNITYSDK_OFFSET(0x1FE8DFF0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET UNITYSDK_OFFSET(0x1FE8DF70)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x1FE8DC00)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1FE8DBA0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_TypeDefinitionIndex = 31357;

	class UniTaskExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask task, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET))(task, cancellationToken);
		}

		static ::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask task, ::System::Action_1<::System::Exception*>* exceptionHandler)
		{
			return ((::System::Collections::IEnumerator*(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET))(task, exceptionHandler);
		}

		static ::System::Void Forget(::Cysharp::Threading::Tasks::UniTask task)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(task);
		}

		static ::System::Void Forget_1(::Cysharp::Threading::Tasks::UniTask task, ::System::Action_1<::System::Exception*>* exceptionHandler, ::System::Boolean handleExceptionOnMainThread)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET))(task, exceptionHandler, handleExceptionOnMainThread);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask task, ::System::Action_1<::System::Exception*>* exceptionHandler, ::System::Boolean handleExceptionOnMainThread)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET))(task, exceptionHandler, handleExceptionOnMainThread);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_2(::Cysharp::Threading::Tasks::UniTask task, ::System::Action* continuationFunction)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_2_OFFSET))(task, continuationFunction);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_3(::Cysharp::Threading::Tasks::UniTask task, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* continuationFunction)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_3_OFFSET))(task, continuationFunction);
		}
	};
}
