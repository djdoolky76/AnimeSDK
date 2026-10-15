#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_TypeDefinitionIndex = 38382;

	template <typename T>
	struct alignas(8) UniTask_1
	{
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x0
		T result; // 0x0
		::System::Int16 token; // 0x0
	};
}
