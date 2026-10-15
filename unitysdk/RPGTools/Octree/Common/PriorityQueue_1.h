#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 48900;

	template <typename T>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _nodes; // 0x0
		::System::Collections::Generic::IComparer_1<T>* _comparer; // 0x0
		::System::Object* _unorderedItems; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		// static const ::System::Object Arity; // 0x0
		// static const ::System::Object Log2Arity; // 0x0
	};
}
