#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_Iterator_1_TypeDefinitionIndex = 3134;

	template <typename T>
	class Enumerable_Iterator_1 : public ::System::Object
	{
	public:
		::System::Int32 threadId; // 0x0
		::System::Int32 state; // 0x0
		T current; // 0x0
	};
}
