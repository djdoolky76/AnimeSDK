#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Octree
{
	inline static constexpr unsigned int BoundsOctree_1_TypeDefinitionIndex = 61412;

	template <typename T>
	class BoundsOctree_1 : public ::System::Object
	{
	public:
		::System::Object* _rootNode; // 0x0
		::System::Single _looseness; // 0x0
		::System::Single _initialSize; // 0x0
		::System::Single _minSize; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
