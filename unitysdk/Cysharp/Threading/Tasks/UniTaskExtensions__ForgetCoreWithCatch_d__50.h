#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5F1C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ForgetCoreWithCatch_d__50_TypeDefinitionIndex = 38422;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50>
	struct alignas(8) UniTaskExtensions__ForgetCoreWithCatch_d__50
	{
		::System::Object* __7__wrap1; // 0x10
		::System::Exception* _ex_5__4; // 0x18
		::System::Action_1<::System::Exception*>* exceptionHandler; // 0x20
		::Cysharp::Threading::Tasks::UniTask task; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter __u__2; // 0x48
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x58
		::System::Int32 __1__state; // 0x60
		::System::Boolean handleExceptionOnMainThread; // 0x64
		::System::Byte _padding0[0x3];
		::System::Int32 __7__wrap2; // 0x68
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
