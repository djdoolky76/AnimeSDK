#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_TypeDefinitionIndex = 38382;

	template <typename T>
	struct alignas(8) UniTask_1
	{
		::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* source; // 0x0
		T result; // 0x0
		::System::Int16 token; // 0x0
	};
}
