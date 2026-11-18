#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GetComponentsScope_1_TypeDefinitionIndex = 27060;

	template <typename T>
	struct alignas(8) GetComponentsScope_1
	{
		::System::Collections::Generic::List_1<T>* components; // 0x0
	};
}
