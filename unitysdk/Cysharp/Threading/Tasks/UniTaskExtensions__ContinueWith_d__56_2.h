#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2>
	struct alignas(8) UniTaskExtensions__ContinueWith_d__56_2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Func_2<T2, T1>* continuationFunction; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Func_2<T2, T1>* __7__wrap1; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
