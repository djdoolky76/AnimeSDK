#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_TypeDefinitionIndex = 8566;

	template <typename T1, typename T2>
	class PriorityQueue_2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 Arity = 0x4; // 0x0
		// static const ::System::Int32 Log2Arity = 0x2; // 0x0
		::Il2CppArray<::System::ValueTuple_2<T1, T2>>* _nodes; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* _comparer; // 0x0
		::System::Object* _unorderedItems; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
	};
}
