#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolOfReusable_1_TypeDefinitionIndex = 8471;

	template <typename T>
	class ObjectPoolOfReusable_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* _cache; // 0x0
	};
}
