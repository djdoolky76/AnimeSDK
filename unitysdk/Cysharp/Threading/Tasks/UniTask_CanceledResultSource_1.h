#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledResultSource_1_TypeDefinitionIndex = 38246;

	template <typename T>
	class UniTask_CanceledResultSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
