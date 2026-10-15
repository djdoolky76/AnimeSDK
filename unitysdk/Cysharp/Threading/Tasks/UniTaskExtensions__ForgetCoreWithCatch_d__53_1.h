#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ForgetCoreWithCatch_d__53_1_TypeDefinitionIndex = 38423;

	template <typename T>
	struct alignas(8) UniTaskExtensions__ForgetCoreWithCatch_d__53_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Boolean handleExceptionOnMainThread; // 0x0
		::System::Action* exceptionHandler; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Exception* _ex_5__4; // 0x0
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter __u__2; // 0x0
	};
}
