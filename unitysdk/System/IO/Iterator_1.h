#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO
{
	inline static constexpr unsigned int Iterator_1_TypeDefinitionIndex = 673;

	template <typename T>
	class Iterator_1 : public ::System::Object
	{
	public:
		::System::Int32 threadId; // 0x0
		::System::Int32 state; // 0x0
		T current; // 0x0
	};
}
