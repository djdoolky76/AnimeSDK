#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/WhenEachResult_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/WhenEachState.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class Channel; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class WhenEachEnumerable_1_Enumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::Channel* channel; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* channelEnumerator; // 0x0
		::System::Int32 completeCount; // 0x0
		::Cysharp::Threading::Tasks::WhenEachState state; // 0x0
	};
}
