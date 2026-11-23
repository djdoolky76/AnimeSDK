#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class B838AC1510EB2DCE;

namespace ABC::Collections::Pooled
{
	inline static constexpr unsigned int PooledQueue_1_TypeDefinitionIndex = 19588;

	template <typename T>
	class PooledQueue_1 : public ::System::Object
	{
	public:
		::B838AC1510EB2DCE<T>* _pool; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _head; // 0x0
		::System::Int32 _tail; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
	};
}
