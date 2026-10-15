#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 6399;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 offset; // 0x0
		::System::Int32 count; // 0x0
		::System::Object* sync; // 0x0
	};
}
