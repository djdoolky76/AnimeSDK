#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class A651EC0956AC1F3D;

namespace ABC::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_TypeDefinitionIndex = 19684;

	template <typename T1, typename T2>
	class SortedList_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T1>* keys; // 0x0
		::Il2CppArray<T2>* values; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 version; // 0x0
		::A651EC0956AC1F3D<T1>* comparer; // 0x0
		::System::Object* keyList; // 0x0
		::System::Object* valueList; // 0x0
	};
}
