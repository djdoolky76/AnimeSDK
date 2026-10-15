#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_TypeDefinitionIndex = 38146;

	template <typename T>
	class SingleConsumerUnboundedChannel_1
	{
	public:
		::System::Collections::Generic::Queue_1<T>* items; // 0x0
		::System::Object* readerSource; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* completedTaskSource; // 0x0
		::Cysharp::Threading::Tasks::UniTask completedTask; // 0x0
		::System::Exception* completionError; // 0x0
		::System::Boolean closed; // 0x0
	};
}
