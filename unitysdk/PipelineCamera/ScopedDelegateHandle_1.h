#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ScopedDelegateHandle_1_TypeDefinitionIndex = 36356;

	template <typename T>
	struct alignas(8) ScopedDelegateHandle_1
	{
		::System::Action_1<T>* _onDestroy; // 0x0
		T _context; // 0x0
	};
}
