#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Buffers { template <typename T> class ArrayPool_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForStruct_1_TypeDefinitionIndex = 5116;

	template <typename T>
	class PooledListForStruct_1 : public ::System::Object
	{
	public:
		::System::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		// static const ::System::Object s_maxArrayLength; // 0x0
		// static const ::System::Object s_defaultCapacity; // 0x0
	};
}
