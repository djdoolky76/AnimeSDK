#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 28105;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* buffer; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 mask; // 0x0
	};
}
