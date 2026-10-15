#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	struct alignas(8) UniTaskCancelableAsyncEnumerable_1
	{
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* enumerable; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
