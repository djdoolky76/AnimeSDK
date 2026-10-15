#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TriggerEvent_1_TypeDefinitionIndex = 38225;

	template <typename T>
	struct alignas(8) TriggerEvent_1
	{
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* head; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* iteratingHead; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* iteratingNode; // 0x0
	};
}
