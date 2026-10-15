#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class AsyncSubject_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	struct alignas(8) UniTaskObservableExtensions__Fire_d__3_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* subject; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
