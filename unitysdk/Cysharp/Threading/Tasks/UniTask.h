#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET UNITYSDK_OFFSET(0x1FE65370)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET UNITYSDK_OFFSET(0x1FE64C40)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET UNITYSDK_OFFSET(0x1FE64E20)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET UNITYSDK_OFFSET(0x1FE65040)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET UNITYSDK_OFFSET(0x1FE64EC0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x1FE64D30)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x1FE652A0)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FE63150)
#define CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x358710)
#define CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9AC870)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET UNITYSDK_OFFSET(0x1FE64980)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET UNITYSDK_OFFSET(0x1FE64A30)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_3_OFFSET UNITYSDK_OFFSET(0x1FE64AC0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1FE648D0)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x1FE653F0)
#define CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET UNITYSDK_OFFSET(0x9AC950)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1FE65460)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x1FE65480)
#define CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AC970)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1FE64B50)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FE64BE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x1FE65490)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x1FE65530)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_2_OFFSET UNITYSDK_OFFSET(0x1FE655D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_3_OFFSET UNITYSDK_OFFSET(0x1FE65680)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANY_1_OFFSET UNITYSDK_OFFSET(0x1FE65850)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_1_OFFSET UNITYSDK_OFFSET(0x1FE647A0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_2_OFFSET UNITYSDK_OFFSET(0x1FE647B0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_3_OFFSET UNITYSDK_OFFSET(0x1FE64840)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET UNITYSDK_OFFSET(0x1FE64790)
#define CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE65C70)
#define CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x382E80)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_TypeDefinitionIndex = 31297;

	struct alignas(8) UniTask
	{
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CompletedTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x281A0);
		}
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CanceledUniTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x281B0);
		}
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Int16 token; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* source, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET))(this, source, token);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET))();
		}

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield_1(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_1_OFFSET))(timing);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield_2(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_2_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield_3(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_3_OFFSET))(timing, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_1(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET))(timing);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_2(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_3(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_3_OFFSET))(timing, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame(::UnityEngine::MonoBehaviour* coroutineRunner, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::MonoBehaviour*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET))(coroutineRunner, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable WaitForFixedUpdate()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask DelayFrame(::System::Int32 delayFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET))(delayFrameCount, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay(::System::Int32 millisecondsDelay, ::System::Boolean ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(millisecondsDelay, ignoreTimeScale, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_1(::System::TimeSpan delayTimeSpan, ::System::Boolean ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET))(delayTimeSpan, ignoreTimeScale, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_2(::System::Int32 millisecondsDelay, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET))(millisecondsDelay, delayType, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_3(::System::TimeSpan delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET))(delayTimeSpan, delayType, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask FromException(::System::Exception* ex)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET))(ex);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask FromCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET))(cancellationToken);
		}
		*/

		static ::System::Action* Action(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction)
		{
			return ((::System::Action*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET))(asyncAction);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Action* action, ::System::Boolean configureAwait, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET))(action, configureAwait, cancellationToken);
		}
		*/

		static ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET))(cancellationToken);
		}

		static ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable SwitchToThreadPool()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET))();
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitUntil(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET))(predicate, timing, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitWhile(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET))(predicate, timing, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WhenAll_2(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_2_OFFSET))(tasks);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WhenAll_3(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_3_OFFSET))(tasks);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> WhenAny_1(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANY_1_OFFSET))(tasks);
		}
		*/

		::Cysharp::Threading::Tasks::UniTaskStatus get_Status()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET))(this);
		}

		/*
		::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET))(this);
		}
		*/

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> SuppressCancellationThrow()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET))(this);
		}
	};
}
