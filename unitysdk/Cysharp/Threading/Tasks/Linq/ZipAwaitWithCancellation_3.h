#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ZipAwaitWithCancellation_3_TypeDefinitionIndex = 45745;

	template <typename T1, typename T2, typename T3>
	class ZipAwaitWithCancellation_3 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* second; // 0x0
		::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* resultSelector; // 0x0
	};
}
