#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable_TypeDefinitionIndex = 38149;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable : public ::System::Object
	{
	public:
		::System::Action* CancellationCallback1Delegate; // 0x0
		::System::Action* CancellationCallback2Delegate; // 0x0
		::System::Object* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration1; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration2; // 0x0
		T current; // 0x0
		::System::Boolean cacheValue; // 0x0
		::System::Boolean running; // 0x0
	};
}
