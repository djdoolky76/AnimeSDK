#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E519989062D53DE5;
template <typename T> class A651EC0956AC1F3D;

namespace ABC::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_TypeDefinitionIndex = 19628;

	template <typename T>
	class SortedSet_1 : public ::System::Object
	{
	public:
		::System::Object* root; // 0x0
		::A651EC0956AC1F3D<T>* comparer; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::E519989062D53DE5* siInfo; // 0x0
	};
}
