#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_AttachExternalCancellationSource_1__RunTask_d__5_TypeDefinitionIndex = 38405;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) UniTaskExtensions_AttachExternalCancellationSource_1__RunTask_d__5
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T1> task; // 0x0
		::System::Object* __4__this; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
