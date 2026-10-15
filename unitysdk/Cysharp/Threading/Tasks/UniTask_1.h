#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	struct alignas(8) UniTask_1
	{
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x0
		T result; // 0x0
		::System::Int16 token; // 0x0
	};
}
