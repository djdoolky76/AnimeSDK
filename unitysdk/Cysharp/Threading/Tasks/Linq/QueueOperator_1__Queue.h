#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class Channel; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int QueueOperator_1__Queue_TypeDefinitionIndex = 45539;

	template <typename T>
	class QueueOperator_1__Queue : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::Channel* channel; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* channelEnumerator; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* sourceEnumerator; // 0x0
		::System::Boolean channelClosed; // 0x0
	};
}
